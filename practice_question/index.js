const users = [
  {
    name: "Aman",
    age: 25,
    orders: [
      {
        id: 1,
        items: [
          { product: "Laptop", price: 45000 },
          { product: "Mouse", price: 800 },
        ],
      },
      {
        id: 2,
        items: [
          { product: "Keyboard", price: 1500 },
          { product: "Monitor", price: 8000 },
        ],
      },
    ],
    skills: ["JavaScript", "React", "Node.js"],
    location: { city: "Delhi", country: "India" },
  },
  {
    name: "Riya",
    age: 30,
    orders: [
      {
        id: 1,
        items: [
          { product: "Phone", price: 20000 },
          { product: "Headphones", price: 1500 },
        ],
      },
      {
        id: 2,
        items: [
          { product: "Tablet", price: 18000 },
          { product: "Charger", price: 500 },
        ],
      },
    ],
    skills: ["Python", "Django", "Machine Learning"],
    location: { city: "Bangalore", country: "India" },
  },
  {
    name: "Kunal",
    age: 28,
    orders: [
      {
        id: 1,
        items: [
          { product: "Smartwatch", price: 10000 },
          { product: "Phone", price: 15000 },
        ],
      },
      {
        id: 2,
        items: [
          { product: "Laptop", price: 40000 },
          { product: "Speaker", price: 2500 },
        ],
      },
    ],
    skills: ["Java", "Spring", "Angular"],
    location: { city: "Mumbai", country: "India" },
  },
  {
    name: "Neha",
    age: 22,
    orders: [
      {
        id: 1,
        items: [
          { product: "Camera", price: 25000 },
          { product: "Tripod", price: 2000 },
        ],
      },
      {
        id: 2,
        items: [
          { product: "Laptop", price: 50000 },
          { product: "Mouse", price: 1000 },
        ],
      },
    ],
    skills: ["PHP", "Laravel", "MySQL"],
    location: { city: "Chennai", country: "India" },
  },
];

const value = users.filter((eachUser) => {
  if (eachUser.orders.length < 2) {
    return false;
  }

  let sumOfPrice = eachUser.orders.reduce((sum, order) => {
    return (
      sum + order.items.reduce((orderSum, item) => orderSum + item.price, 0)
    );
  }, 0);

  if (sumOfPrice < 5000) {
    return false;
  }

  const requiredSkills = ["JavaScript", "React", "Node.js"];
  const hasAllSkills = requiredSkills.every((skill) =>
    eachUser.skills.includes(skill)
  );

  return hasAllSkills;
});

console.log(value);
