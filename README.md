# irc-bootcamp-programming
## Identitas 
- Muhammad Fatih Pramana
- fpramana555@gmail.com
- G7401241032
- Transporter
- Programming
## Resume bootcamp
## Penjelasan kode 
### Arduino (https://wokwi.com/projects/430669176495551489)
1. Import dan variabel global
- Servo myservo: membuat objek servo
- pos: posisi sudut servo
- direction: kontrol arah gerak servo (maju/mundur)
- lastServoMove & lastLedToggle: untuk menghitung waktu sejak aksi terakhir
- ledState: menyimpan status ON/OFF LED
2. Inisiasi servo saat pertama kali dinyalakan
- setup ()
3. Logika utama
- Loop ()
4. Led berkedip tiap 1 detik
- jika sudah 1000 ms sejak terakhir toggle, ubah status LED
- led akan nyala → mati → nyala tiap detik.
5. Servo bergerak halus setiap 15 ms
- servo bergerak satu derajat tiap 15ms, gerakan halus dan konstan
- jika mencapai 0 atau 180 derajat, arah dibalik
### Python
1. Import library
- mengimpor library OpenCV (cv2) untuk pemrosesan gambar dan video
2. Load model deteksi wajah
- memuat model Haar Cascade bawaan OpenCV untuk deteksi wajah depan
3. Membuka kamera
- membuka kamera laptop (0)
4. Loop untuk baca dan proses frame
- Membaca satu frame dari kamera.
- ret: boolean
- frame: gambar yang ditangkap
5. Konversi ke grayscale
- gambar diubah menjadi grayscale agar proses deteksi wajah lebih cepat dan efisien
6. Deteksi wajah
- mendeteksi wajah dari gambar grayscale
- scaleFactor=1.1: seberapa besar gambar dikecilkan tiap skala
- minNeighbors=5: semakin ketat nilainya semakin ketat deteksinya
7. Tampilkan kotak dan teks
- kotak hijau di sekitar wajah
- tulisan "Fatih" di atas kotak
8. Tampilkan frame
- menampilkan frame dengan kotak dan teks pada jendela berjudul 'Deteksi Wajah'
9. Keluar saat tekan 'q'
10. Bersihkan dan tutup kamera cv
