# import matplotlib.pyplot as plt

# students = ['Alice', 'Bob', 'Charlie', 'David', 'Eva']
# scores = [85, 90, 78, 88, 95]

# plt.bar(students, scores, color='skyblue')
# plt.xlabel('Students')
# plt.ylabel('Scores')
# plt.title('Student Scores')
# plt.show()
# import matplotlib.pyplot as plt

# activities = ['Reading', 'Gaming', 'Cooking', 'Exercising', 'Traveling']
# hours = [3, 5, 2, 1, 3]

# plt.pie(hours, labels=activities, autopct='%1.1f%%', startangle=90)
# plt.axis('equal')
# plt.title('Weekly Time Distribution')
# plt.show()
import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-5, 5, 100)
y = x**2
plt.plot(x, y, color='purple', linewidth=2)
plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.title('Graph of y = x²')
plt.grid(True)
plt.show()
