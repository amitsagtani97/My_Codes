no_cameras = int(input("Enter the total no. of cameras sold in this month :"))
basic_salary = 1500
camera_price = int(input("Enter the price of each camera :"))
total_sale = no_cameras * camera_price
bonus = total_sale * (2 / 100)
bonus = bonus + (200 * no_cameras)
print ("The salary of the camera man this month is : %d" % (basic_salary + bonus))
