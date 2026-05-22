## ⚡Honorify-Cpp v1.0
Honorify-Cpp adalah aplikasi berbasis C++ CLI untuk otomatisasi perhitungan honor harian dan uang lembur pegawai. Mengimplementasikan konsep dasar Struktur Data seperti Array of Struct dan Alokasi Memori Dinamis.

<div align="center">

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Stable-brightgreen?style=for-the-badge)
![Studio](https://img.shields.io/badge/DigiVora--Studio-orange?style=for-the-badge)


</div>

---

## 🧑‍💻 Profil Pengembang
| Detail | Keterangan |
| :--- | :--- |
| *Developer* | Achmad Khusnul Yakin, S.Kom. |
| *Bussines Developer* | DigiVora Studio |
| *Instansi* | Institut Teknologi Mojosari |

---

## 📌 Fitur Utama

* **Array of Structs:** Mengelompokkan data heterogen setiap pegawai (Nama, Jam Kerja, Upah Lembur, Total Honor) ke dalam satu entitas terstruktur.
* **Alokasi Memori Dinamis:** Memanfaatkan operator `new` dan *pointer* untuk memesan ruang memori secara pas di *heap* sesuai jumlah data input pada saat *runtime*.
* **Pemrograman Modular:** Pemisahan logika kalkulasi upah lembur ke dalam fungsi spesifik (`hitungHonorLembur`) demi menjaga efisiensi kode utama.
* **Format Laporan Presisi:** Menyajikan ringkasan data akhir dalam bentuk tabel grid yang simetris menggunakan manipulator `<iomanip>` (`setw`).

---

## 💼 Aturan Bisnis Perhitungan Honor

| Komponen | Aturan / Ketentuan Perhitungan | Nominal |
| :--- | :--- | :--- |
| **Honor Pokok Harian** | Batas kerja normal reguler (maksimal 8 jam) | **Rp 80.000** |
| **Tarif Lembur / Jam** | Diambil dari selisih kelebihan jam kerja (> 8 jam) | **Rp 10.000 / jam** |
| **Jam Kerja Kurang** | Jam kerja $\le 8$ jam (Lembur otomatis Rp 0) | **Tetap Rp 80.000** |

---

## 🚀 Cara Menjalankan Project (Dev-C++)

### Persyaratan Sistem
Pastikan *compiler* Dev-C++ Anda sudah mendukung standar **C++11** atau lebih baru agar fungsi konversi `to_string()` dapat dieksekusi tanpa kendala.

### Langkah Aktivasi C++11 di Dev-C++:
1. Buka Dev-C++, klik menu **Tools** > **Compiler Options**.
2. Centang opsi *"Add the following commands when calling the compiler"*.
3. Masukkan perintah berikut pada kolom yang tersedia:
   ```bash
   -std=c++11
   ```
4. Klik **OK**, lalu lakukan **Compile & Run** (`F11`).

---

## 📊 Skenario Pengujian (Test Case)

Untuk memvalidasi akurasi sistem, program diuji menggunakan 3 skenario variasi jam kerja berikut:

1. **Hamdan Abi (8 Jam Kerja):** Pas jam kerja normal. Lembur = `Rp 0`, Total = `Rp 80.000`.
2. **Achmad Yakin (11 Jam Kerja):** Kelebihan 3 jam lembur. Lembur = `Rp 30.000`, Total = `Rp 110.000`.
3. **Moch Aditya (6 Jam Kerja):** Kurang dari jam normal. Lembur = `Rp 0`, Total = `Rp 80.000`.

### Tampilan Output Terminal:
```text
=========================================================================================
                                LAPORAN HONOR PEGAWAI                            
=========================================================================================
 | No  | Nama Pegawai         | Jam Kerja  | Honor Lembur       | Total Honor        |
-----------------------------------------------------------------------------------------
 | 1   | Hamdan Abi           | 8          | Rp. 0              | Rp. 80000          |
 | 2   | Achmad Yakin         | 11         | Rp. 30000          | Rp. 110000         |
 | 3   | Moch Aditya          | 6          | Rp. 0              | Rp. 80000          |
=========================================================================================
```

---

## 🤝 Hubungi Saya

<p align="center">
  <a href="https://www.linkedin.com/in/achmad-khusnul-yakin-25b87a3a2?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app" target="_blank">
    <img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn" style="margin-bottom: 5px;">
  </a>
  <a href="https://www.instagram.com/digivora.studio" target="_blank">
    <img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram" style="margin-bottom: 5px;">
  </a>
  <a href="https://wa.me/6283116152891" target="_blank">
    <img src="https://img.shields.io/badge/WhatsApp-25D366?style=for-the-badge&logo=whatsapp&logoColor=white" alt="WhatsApp" style="margin-bottom: 5px;">
  </a>
  <a href="https://github.com/DigiVora" target="_blank">
    <img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white" alt="GitHub" style="margin-bottom: 5px;">
  </a>
</p>
<br>

---

<p align="center">
  <img src="https://img.shields.io/badge/Copyright%20%C2%A9%202026-DigiVora%20Studio-orange?style=flat-square" alt="Copyright">
  <br>
  <sub>Sistem ini dikembangkan dengan dedikasi oleh:
  <br>
  <b>Achmad Khusnul Yakin, S.Kom.</b></sub>
</p>
