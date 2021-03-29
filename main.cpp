#include<iostream>
#include<fstream>
#include<string>
#include<vector>

bool writeRecToFile(std::string file_name, std::string number, std::string nrp, std::string name, std::string gender);

int main(){
	bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","Daftar","Mahasiswa","Teknologi_Game","PENS");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","#","NRP","Nama","Jenis_kelamin");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","01","4210191002","Irfan Muhammad","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","02","4210191003","Aryazaky Iman Fauzy","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","03","4210191004","Aydin Ihsan Ibrahim Nurdin","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","04","4210191005","Prawida Yumia","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","05","4210191006","Khonsa Nadziroh","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","06","4210191008","Robby Alexander","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","07","4210191009","Miftah Amiruddin Hakim Ganing","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","08","4210191010","Hikmatul Ulya","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","09","4210191011","Mohammad Alifian Rizki Choliq","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","10","4210191012","Berliana Putri Indrasari","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","11","4210191013","Marvel Natanael S","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","12","4210191014","Auriel Harlih Rizkinanda","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","13","4210191015","Vivian Azalia Anwari","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","14","4210191016","Joane Vanesa Hadi","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","15","4210191017","Mochammad Januar Afandi","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","16","4210191018","M. Dwi Febrian","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","17","4210191019","Amos Taruna Siahaan","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","18","4210191020","M Awaluddin Romadhon","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","19","4210191021","Intan Putri Kusuma Wardhani","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","20","4210191022","Andika Rizky Oktavian","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","21","4210191023","Natan Andro Tri Arauna","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","22","4210191024","Andhika Arista Permana","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","23","4210191025","Devinindya Safitri Anggraeni","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","24","4210191026","Siti Julekhah","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","25","4210191027","Imam Biladi","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","26","4210191028","Mukrom Karunia Azza","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","27","4210191029","Dimas Rizky Alimul Fajri","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","28","4210191029","Dimas Rizky Alimul Fajri","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","29","4210191028","Mukrom Karunia Azza","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","30","4210191027","Imam Biladi","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","31","4210191026","Siti Julekhah","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","32","4210191025","Devinindya Safitri Anggraeni","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","33","4210191024","Andhika Arista Permana","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","34","4210191023","Natan Andro Tri Arauna","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","35","4210191022","Andika Rizky Oktavian","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","36","4210191021","Intan Putri Kusuma Wardhani","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","37","4210191020","M Awaluddin Romadhon","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","38","4210191019","Amos Taruna Siahaan","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","39","4210191018","M. Dwi Febrian","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","40","4210191017","Mochammad Januar Afandi","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","41","4210191016","Joane Vanesa Hadi","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","42","4210191015","Vivian Azalia Anwari","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","43","4210191014","Auriel Harlih Rizkinanda","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","44","4210191013","Marvel Natanael S","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","45","4210191012","Berliana Putri Indrasari","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","46","4210191011","Mohammad Alifian Rizki Choliq","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","47","4210191010","Hikmatul Ulya","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","48","4210191009","Miftah Amiruddin Hakim Ganing","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","49","4210191008","Robby Alexander","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","50","4210191006","Khonsa Nadziroh","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","51","4210191005","Prawida Yumia","Perempuan");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","52","4210191004","Aydin Ihsan Ibrahim Nurdin","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","53","4210191003","Aryazaky Iman Fauzy","Laki-laki");
	//bool writeToFile = writeRecToFile("4210191020_MAwaluddinR.csv","54","4210191002","Irfan Muhammad","Laki-laki");
	return 0;
}

bool writeRecToFile(std::string file_name, std::string number, std::string nrp, std::string name, std::string gender){
	std::ofstream file;
	file.open(file_name, std::ios_base::app);
	file<<number<<","<<nrp<<","<<name<<","<<gender<<std::endl;
	file.close();
	return true;
}
