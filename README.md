# 🚗 Parkir Praktis

Sistem Parkir Praktis adalah aplikasi berbasis C yang dirancang untuk mengelola data kendaraan pada area parkir menggunakan berbagai struktur data dan algoritma fundamental.

Project ini dikembangkan sebagai implementasi nyata dari konsep Struktur Data dan Algoritma seperti Binary Search Tree (BST), Hash Table, Priority Queue, dan Quick Sort dalam satu sistem terintegrasi.

---

## 📌 Fitur Utama

### 1. Tambah Kendaraan
Menambahkan data kendaraan baru ke sistem parkir.

Data yang disimpan:

- ID Kendaraan
- Nomor Plat
- Nama Pemilik
- Status VIP

---

### 2. Pencarian Kendaraan Berdasarkan Plat

Menggunakan **Hash Table** untuk mempercepat proses pencarian kendaraan.

Keuntungan:

- Waktu pencarian lebih cepat dibanding pencarian linear.
- Cocok untuk data kendaraan dalam jumlah besar.

---

### 3. Menampilkan Seluruh Kendaraan

Menggunakan **Binary Search Tree (BST)** dengan traversal inorder sehingga data ditampilkan secara terurut berdasarkan ID kendaraan.

---

### 4. Manajemen Kendaraan VIP

Kendaraan dengan status VIP akan masuk ke dalam struktur **Priority Queue**.

Fitur:

- Penyimpanan kendaraan prioritas
- Menampilkan daftar kendaraan VIP

---

### 5. Sorting Data Kendaraan

Menggunakan algoritma **Quick Sort** untuk mengurutkan kendaraan berdasarkan nomor plat.

---

### 6. Kendaraan Keluar

Menghapus kendaraan dari:

- Array penyimpanan utama
- Binary Search Tree (BST)

Sehingga data kendaraan aktif selalu terbarui.

---

## 🏗️ Struktur Data yang Digunakan

| Struktur Data | Fungsi |
|--------------|---------|
| Array | Menyimpan seluruh data kendaraan |
| Binary Search Tree | Penyimpanan dan pencarian berdasarkan ID |
| Hash Table | Pencarian cepat berdasarkan plat nomor |
| Priority Queue | Pengelolaan kendaraan VIP |
| Quick Sort | Pengurutan data kendaraan |

---

## 📂 Struktur Folder

```text
ParkirPraktisC/
│
├── main.c
│
├── kendaraan.h
├── kendaraan.c
│
├── bst.h
├── bst.c
│
├── hash.h
├── hash.c
│
├── vip.h
├── vip.c
│
├── sort.h
└── sort.c
```

---

## ⚙️ Cara Kompilasi

Menggunakan GCC:

```bash
gcc main.c bst.c hash.c kendaraan.c sort.c vip.c -o parkir
```

---

## ▶️ Menjalankan Program

Linux / MacOS:

```bash
./parkir
```

Windows:

```bash
parkir.exe
```

---

## 📋 Menu Program

```text
===== SISTEM PARKIR PINTAR =====

1. Tambah Kendaraan
2. Cari Kendaraan
3. Tampilkan Semua
4. Tampilkan VIP
5. Sorting
6. Kendaraan Keluar
7. Exit
```

---

## 🧠 Kompleksitas Algoritma

### Hash Table

| Operasi | Kompleksitas |
|----------|-------------|
| Search | O(1) rata-rata |
| Insert | O(1) rata-rata |

### Binary Search Tree

| Operasi | Kompleksitas |
|----------|-------------|
| Insert | O(log n) rata-rata |
| Search | O(log n) rata-rata |
| Delete | O(log n) rata-rata |

### Quick Sort

| Kasus | Kompleksitas |
|---------|-------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n²) |

---

## 📚 Konsep yang Diimplementasikan

- Modular Programming
- Header File Management
- Dynamic Memory Allocation
- Binary Search Tree
- Hashing
- Priority Queue
- Sorting Algorithm
- Data Management System

---

## 👨‍💻 Pengembang

**Alief Aqsha**

GitHub:
https://github.com/aliefaqsha25

---

## 📄 Lisensi

Project ini dibuat untuk tujuan pembelajaran dan pengembangan kemampuan pemrograman menggunakan bahasa C.