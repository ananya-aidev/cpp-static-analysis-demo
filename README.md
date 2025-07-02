# cpp-static-analysis-demo

# 🔍 C++ Static Code Analysis with Cppcheck and GitHub Actions

This repository demonstrates how to perform **static code analysis** on C++ source files using **Cppcheck**, and automatically generate a detailed **HTML report** via **GitHub Actions**.

---

## 📦 Features

- Runs **Cppcheck** on every push or pull request
- Generates a detailed **HTML report** from the XML output
- Automatically fetches the `cppcheck-htmlreport` script from the official Cppcheck GitHub
- Uploads the HTML report as a downloadable **artifact**
- Fully CI/CD-compatible, agentless, and portable

---

## 🚀 How It Works

1. On each push or PR, GitHub Actions:
   - Installs Cppcheck and Python dependencies
   - Runs static analysis with XML output
   - Downloads the latest `cppcheck-htmlreport` script directly from Cppcheck GitHub
   - Converts the XML report into an HTML report
   - Uploads the HTML as a downloadable artifact

2. You can then download the HTML report and open it in your browser to review code issues.

---

## 📥 How to View the Report

1. Go to the **Actions** tab in your GitHub repository
2. Click on the latest **workflow run**
3. Scroll down to the **Artifacts** section
4. Download the `cppcheck-html` artifact
5. Extract the ZIP file
6. Open `index.html` in your browser

---

## 💡 Why This Setup?

- Avoids dependency on system-installed versions of `cppcheck-htmlreport`
- Always uses the latest compatible script version
- Keeps your CI pipeline portable and lightweight
- Perfect for DevOps, QA, and C++ development teams needing visibility into code quality

---

## 🧪 Local Usage (Optional)

You can replicate the analysis locally if needed:
- Install `cppcheck`, Python, and `pygments`
- Download the `cppcheck-htmlreport` script manually
- Run the same analysis commands to generate the report

---

## 🛡 License

This project is licensed under the [MIT License](LICENSE).

---

## 🙌 Credits

Created with ❤️ by Ananya 
Powered by [Cppcheck](https://github.com/danmar/cppcheck) and GitHub Actions
