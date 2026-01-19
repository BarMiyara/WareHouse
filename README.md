<h1 align="center">🏭 WareHouse</h1>

<p align="center">
  <b>C++ Warehouse Simulation</b> • <b>Config-Driven</b> • <b>CLI Actions Engine</b> • <b>OOP</b>
</p>

<p align="center">
  <span>
    <img alt="C++" src="https://img.shields.io/badge/C%2B%2B-11%2F14-blue" />
    <img alt="Build" src="https://img.shields.io/badge/Build-make-success" />
    <img alt="Platform" src="https://img.shields.io/badge/Platform-macOS%20%7C%20Linux-lightgrey" />
    <img alt="Status" src="https://img.shields.io/badge/Status-stable-success" />
  </span>
</p>

<p align="center">
  <a href="#-quick-run">Quick Run</a> •
  <a href="#-overview">Overview</a> •
  <a href="#-architecture">Architecture</a> •
  <a href="#-project-structure">Structure</a> •
  <a href="#-commands">Commands</a> •
  <a href="#-troubleshooting">Troubleshooting</a>
</p>

<hr/>

<h2>🎬 Demo</h2>
<p style="margin-top:0;">
  Add a GIF or screenshot to instantly make the repo look premium.
</p>

<p align="center">
  <!-- Put your file at: assets/demo.gif (recommended) OR assets/demo.png -->
  <img src="assets/demo.gif" alt="Demo" width="900" />
</p>

<hr/>

<h2 id="-overview">⚡ Overview</h2>
<ul>
  <li>✅ <b>Warehouse simulation</b> in C++ with an interactive CLI</li>
  <li>✅ <b>Config-driven startup</b> — loads customers/volunteers/scenario from a text file</li>
  <li>✅ <b>Action-based engine</b> — each command is handled as a structured operation</li>
  <li>✅ <b>OOP design</b> — clear separation between data models, actions, and orchestration</li>
  <li>✅ Focus on <b>correctness</b>, <b>edge cases</b>, and <b>stable runtime behavior</b></li>
</ul>

<p>
  If it survives “dirty” inputs and long runs — it’s not just working… it’s <b>solid</b>.
</p>

<hr/>

<h2 id="-quick-run">🚀 Quick Run</h2>

<h3>1) Build</h3>
<pre><code>make</code></pre>

<h3>2) Run</h3>
<pre><code>./warehouse &lt;path-to-config&gt;</code></pre>

<p><b>Example:</b></p>
<pre><code>./warehouse input_file.txt</code></pre>

<hr/>

<h2 id="-architecture">🧠 Architecture</h2>
<p>
  The project is structured as a small simulation system:
</p>

<ul>
  <li><b>Parser / Loader</b> → reads the configuration file and creates initial state</li>
  <li><b>WareHouse (Orchestrator)</b> → owns the simulation state and main loop</li>
  <li><b>Actions</b> → each CLI command triggers an action object / handler</li>
  <li><b>Entities</b> → customers, volunteers, orders, etc.</li>
</ul>

<p align="center">
  <img alt="Flow" src="https://img.shields.io/badge/Flow-config%20load%20%E2%86%92%20CLI%20loop%20%E2%86%92%20actions%20%E2%86%92%20state%20updates-blueviolet" />
</p>

<hr/>

<h2 id="-commands">🕹️ Commands</h2>
<p>
  Put your exact CLI commands here (names depend on your implementation). Example layout:
</p>

<ul>
  <li><code>step &lt;n&gt;</code> — advance simulation by <b>n</b> steps</li>
  <li><code>order &lt;customer_id&gt;</code> — create a new order</li>
  <li><code>customerStatus &lt;customer_id&gt;</code> — show customer info + orders</li>
  <li><code>orderStatus &lt;order_id&gt;</code> — show order status</li>
  <li><code>log</code> — show executed actions log</li>
  <li><code>backup</code> / <code>restore</code> — snapshot & recover state</li>
  <li><code>close</code> — end simulation</li>
</ul>

<p>
  <b>🔥 Want me to make this section perfect?</b><br/>
  Send me a screenshot / paste of the assignment’s required command list, ואני מסדר את זה בדיוק 1:1.
</p>

<hr/>

<h2 id="-project-structure">📁 Project Structure</h2>
<p>
  Adjust this tree to your real repo layout (still looks premium even if you keep it as-is):
</p>

<pre><code>WareHouse/
├─ makefile
├─ main.cpp
├─ input_file.txt
├─ include/
│  ├─ WareHouse.h
│  └─ ...
├─ src/
│  ├─ WareHouse.cpp
│  └─ ...
└─ assets/
   ├─ demo.gif
   └─ demo.png
</code></pre>

<hr/>

<h2>🧪 Testing (optional, but looks pro)</h2>
<p>
  Even without unit tests, you can include a “manual checklist”:
</p>

<ul>
  <li>☑️ Invalid config lines → handled gracefully</li>
  <li>☑️ Many orders / long run → no crash, consistent state</li>
  <li>☑️ Backup/restore repeated → stable behavior</li>
  <li>☑️ Edge inputs (0/negative steps, missing ids) → safe responses</li>
</ul>

<hr/>

<h2 id="-troubleshooting">🧯 Troubleshooting</h2>

<h3>“usage: warehouse &lt;config_path&gt;”</h3>
<p>
  You forgot to pass the configuration file:
</p>
<pre><code>./warehouse input_file.txt</code></pre>

<h3>Demo image not showing</h3>
<p>
  Make sure the file exists:
</p>
<pre><code>ls -lh assets/</code></pre>
<p>
  And the README points to the correct name:
  <code>assets/demo.gif</code> or <code>assets/demo.png</code>
</p>

<h3>Build fails</h3>
<p>
  Verify you are in the repository root (where the makefile is):
</p>
<pre><code>pwd
ls</code></pre>

<hr/>

<h2>👥 Author</h2>
<ul>
  <li><b>Bar Miyara</b> — <a href="https://github.com/BarMiyara">github.com/BarMiyara</a></li>
</ul>

<hr/>

<h2>📄 License</h2>
<p>
  Educational project.
</p>
