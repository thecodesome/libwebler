#include <iostream>
#include <string>
#include <vector>
#include <webler/http.hpp>
#include <webler/WebCrawler.hpp>
using namespace std;

int main () {

	webler::http_response r;
	// r = webler::http_get("http://localhost:3000/first/");
	r = webler::http_get("http://timesofindia.indiatimes.com/2016/1/1/archivelist/year-2016,month-1,starttime-42370.cms");
	if(r.success) {
		cout << r.html << endl;
	} else {
		cout << "Error occured" << endl;		
	}

	cout << "HTTP GET test is over" << endl;

	vector<string> urls = webler::get_href(r.html);

	for(auto i: urls) {
		cout << i << endl;
	}

	return 0;
}