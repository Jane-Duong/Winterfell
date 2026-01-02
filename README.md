# Winterfell

**Winterfell** is a third-person action prototype built with **Unreal Engine 5**, developed as a personal project to explore **client-side gameplay systems** such as player movement, animation state management, and environment interaction.

This project focuses on **responsiveness, system behavior, and debugging**, rather than content scale or visual polish. It is intended as a technical learning project and a case study in client-oriented game development.

---

## Project Overview

- **Genre:** Third-Person Action / Adventure  
- **Point of View:** Third-Person  
- **Platform:** PC  
- **Engine:** Unreal Engine 5  
- **Primary Language:** C++  
- **Status:** Prototype / Technical Study  

Winterfell is not a finished game. The goal of the project is to understand how different client-side systems interact in real time and how design trade-offs affect player experience.

---

## Key Features

- Player movement and camera-relative input
- Character rotation based on movement direction
- Animation Blueprint with state machines and BlendSpaces
- Grounded and airborne movement states
- Collision detection and basic interaction logic
- Hybrid **C++ + Blueprint** workflow for performance and iteration speed

---

## Technical Stack

- **Unreal Engine 5**
- **C++** for core gameplay and movement logic
- **Blueprints** for animation wiring and rapid iteration
- **Animation Blueprint** (State Machines, BlendSpaces)
- **Enhanced Input System**
- **Visual Studio 2022**

---

## Architecture Overview

- Core player logic is implemented in **C++** to ensure predictable behavior and performance.
- **Blueprints** are used where iteration speed is more valuable than strict control.
- Animation behavior is driven by runtime variables synced from movement logic.
- Collision and interaction systems are handled on the client side.

This hybrid approach reflects common workflows in game client development, balancing robustness and flexibility.

---

## Known Limitations

- Animation transitions are not fully polished and may desync in edge cases.
- UI systems are minimal and not a focus of this project.
- The project prioritizes gameplay responsiveness over visual completeness.

These limitations are intentional, allowing development time to focus on core client-side systems and debugging.

---

## What I Learned

Through this project, I gained hands-on experience with:

- Client-side gameplay architecture in Unreal Engine
- Synchronizing input, movement, and animation systems
- Debugging runtime and animation-related issues
- Making engineering trade-offs under limited scope
- Iterative development using C++ and Blueprints together

---

## Future Improvements

If extended further, potential improvements would include:
- Refining animation transitions and blending
- Adding clearer UI feedback for player actions
- Expanding interaction systems
- Improving overall polish and stability

---

## Disclaimer

This project is for **learning and portfolio purposes**.  
It is not affiliated with any commercial product or organization.

---

## License

This project is released for educational and personal use only.  
