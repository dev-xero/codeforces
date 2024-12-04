#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    ll tests;
    cin >> tests;
    
    while (tests--) {
        ll shelves, bottles;
        cin >> shelves >> bottles;
        
        map<ll, vector<ll>> brand_bottles;
        
        // Read bottles
        for (ll i = 0; i < bottles; i++) {
            ll brand, cost;
            cin >> brand >> cost;
            brand_bottles[brand].push_back(cost);
        }
        
        // desc order sort
        for (auto& [brand, costs] : brand_bottles) {
            sort(costs.rbegin(), costs.rend());
        }
        
        priority_queue<ll> total_earnings;
        
        for (auto& [first_brand, first_costs] : brand_bottles) {
            ll current_earnings = 0;
            ll shelves_used = 0;
            
            while (shelves_used < shelves && !first_costs.empty()) {
                current_earnings += first_costs.front();
                first_costs.erase(first_costs.begin());
                shelves_used++;
            }
            
            vector<pair<ll, vector<ll>>> remaining_brands;
            for (auto& [brand, costs] : brand_bottles) {
                if (brand != first_brand) {
                    remaining_brands.push_back({brand, costs});
                }
            }
            
            sort(remaining_brands.begin(), remaining_brands.end(), 
                 [](const auto& a, const auto& b) { 
                     return a.second.front() > b.second.front(); 
                 });
            
            for (auto& [brand, costs] : remaining_brands) {
                while (shelves_used < shelves && !costs.empty()) {
                    current_earnings += costs.front();
                    costs.erase(costs.begin());
                    shelves_used++;
                }
                
                if (shelves_used >= shelves) break;
            }
            
            total_earnings.push(current_earnings);
        }
        
        cout << total_earnings.top() << '\n';
    }
    
    return 0;
}