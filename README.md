<h1 align="center">🏭 WareHouse</h1>

<p align="center">
  <b>C++ Warehouse Simulation</b> • <b>Config-Driven</b> • <b>CLI Actions Engine</b> • <b>OOP Design</b>
</p>

<p align="center">
  A clean <b>warehouse management simulation</b> written in <b>C++</b>, built around an actions-based engine, 
  a configurable input file, and a structured OOP architecture.
</p>

<p align="center">
  <img alt="Language" src="https://img.shields.io/badge/Language-C%2B%2B-blue" />
  <img alt="Paradigm" src="https://img.shields.io/badge/Paradigm-OOP-success" />
  <img alt="Interface" src="https://img.shields.io/badge/Interface-CLI-lightgrey" />
  <img alt="Build" src="https://img.shields.io/badge/Build-makefile-orange" />
  <img alt="Status" src="https://img.shields.io/badge/Status-stable-success" />
</p>

<p align="center">
  <a href="#-quick-run">Quick Run</a> •
  <a href="#-overview">Overview</a> •
  <a href="#-architecture">Architecture</a> •
  <a href="#-project-structure">Structure</a> •
  <a href="#-build--run">Build & Run</a> •
  <a href="#-how-it-works">How it Works</a>
</p>

<hr/>

<h2 id="-quick-run">🚀 Quick Run</h2>

<p>From the repository root:</p>

```bash
make
./WareHouse input_file.txt
```
<hr/> <h2 id="-overview">⚡ Overview</h2> <ul> <li>✅ <b>Warehouse simulation engine</b> in modern C++ style</li> <li>✅ <b>Config-driven</b> behavior using an <code>input_file.txt</code></li> <li>✅ <b>Actions system</b> that drives the entire CLI (command-based workflow)</li> <li>✅ Strong <b>OOP architecture</b>: clear separation between domain objects</li> <li>✅ Includes core entities: <b>Customers</b>, <b>Orders</b>, <b>Volunteers</b>, and <b>Actions</b></li> </ul> <p> The project simulates a small warehouse environment: creating customers and orders, assigning volunteers, and performing actions via the CLI flow. </p> <hr/> <h2 id="-architecture">🧠 Architecture</h2> <p>The project is built around a few core layers:</p> <ul> <li><b>WareHouse</b> — the main simulation controller (state + orchestration)</li> <li><b>Action</b> — an actions engine that controls the CLI behavior</li> <li><b>Customer</b> — customer data + order interactions</li> <li><b>Order</b> — order entity with lifecycle/state</li> <li><b>Volunteer</b> — handles order processing / deliveries / warehouse workflow</li> </ul> <p>High-level flow:</p>

```text
input_file.txt  -->  WareHouse init
                     |
                     v
                  CLI loop
                     |
                     v
             Action::act() executes
                     |
                     v
       updates Customers / Orders / Volunteers state

```

<hr/> <h2 id="-project-structure">📁 Project Structure</h2>

```text
WareHouse/
├─ README.md
├─ main.cpp
├─ makefile
├─ input_file.txt
├─ WareHouse.h / WareHouse.cpp
├─ Action.h / Action.cpp
├─ Customer.h / Customer.cpp
├─ Order.h / Order.cpp
└─ Volunteer.h / Volunteer.cpp

```
<hr/> <h2 id="-build--run">🧰 Build & Run</h2> <h3>✅ Build</h3>

```bash
make
```

<h3>▶️ Run</h3>

```bash
./WareHouse input_file.txt
```

<p> If your executable name is different, run: </p>

```bash
ls
```

<hr/> <h2 id="-how-it-works">🕹️ How it Works</h2> <p> This project runs as a <b>command-based simulation</b>. The CLI receives commands, each command maps into an <b>Action</b> object, and the action updates the system state. </p> <h3>Core Concepts</h3> <ul> <li><b>Customers</b> can create orders</li> <li><b>Orders</b> move through a lifecycle (created → processing → completed)</li> <li><b>Volunteers</b> handle different responsibilities in the warehouse flow</li> <li><b>Actions</b> are the “API” of the CLI — every user command triggers an action</li> </ul> <hr/> <h2>🧾 Input File</h2> <p> The simulation is initialized from <code>input_file.txt</code>. This file defines the starting configuration (entities + initial state). </p> <p> ✅ Tip: If you want the repository to look even more premium, add a short example snippet here. </p> <hr/> <h2>🧯 Troubleshooting</h2> <h3>Make fails / missing compiler</h3> <p>Make sure you have a compiler installed:</p>

```bash
g++ --version
make --version
```

<h3>Permission denied</h3>

```bash
chmod +x WareHouse
```

<h3>Nothing runs / wrong executable name</h3>

```bash
ls
```

<hr/> <h2>🧭 Roadmap</h2> <ul> <li>[ ] Add a GitHub Actions workflow to build on every push</li> <li>[ ] Add a detailed “Commands” section with CLI examples</li> <li>[ ] Add a short demo GIF (<code>assets/demo.gif</code>)</li> </ul> <hr/> <h2>👥 Author</h2> <ul> <li><b>Bar Miyara</b> — https://github.com/BarMiyara</li> </ul> <hr/> <h2>📄 License</h2> <p> Educational project. You are free to use and learn from it. </p> 
