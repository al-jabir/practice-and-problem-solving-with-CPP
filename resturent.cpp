class Restaurant {
private:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
public:
    // Constructor to initialize the food items and prices
    Restaurant() {
        // Initialize the food item codes
        for (int i = 0; i < 12; i++) {
            food_item_codes[i] = i+1;
        }

        // Initialize the food item names and prices
        food_item_names[0] = "Burger";
        food_item_prices[0] = 100;
        food_item_names[1] = "Pizza";
        food_item_prices[1] = 200;
        food_item_names[2] = "Fries";
        food_item_prices[2] = 50;
        food_item_names[3] = "Sandwich";
        food_item_prices[3] = 80;
        food_item_names[4] = "Pasta";
        food_item_prices[4] = 150;
        food_item_names[5] = "Salad";
        food_item_prices[5] = 70;
        food_item_names[6] = "Soup";
        food_item_prices[6] = 60;
        food_item_names[7] = "Steak";
        food_item_prices[7] = 250;
        food_item_names[8] = "Fish and Chips";
        food_item_prices[8] = 180;
        food_item_names[9] = "Chicken Tandoori";
        food_item_prices[9] = 220;
        food_item_names[10] = "Noodles";
        food_item_prices[10] = 120;
        food_item_names[11] = "Dosa";
        food_item_prices[11] = 90;

        // Initialize the total tax
        total_tax = 10;
    }

    // Function to get the price of a food item given its code
    int get_price(int code) {
        for (int i = 0; i < 12; i++) {
            if (food_item_codes[i] == code) {
                return food_item_prices[i];
            }
        }
        return -1;  // Return -1 if the code is invalid
    }

    // Function to calculate the total bill for a list of food items
    int calculate_bill(int item_codes[], int num_items) {
        int total_price = 0;
        for (int i = 0; i < num_items; i++) {
            int price = get_price(item_codes[i]);
            if (price != -1) {
                total_price += price;
            }
        }
        return total_price + (total_price * total_tax / 100);
    }
};

