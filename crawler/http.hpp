#include <string>
namespace web {

	struct http_response {
		std::string html;
		bool success;
		http_response(): success(true), html("") {}
	};

	web::http_response http_get(std::string);
}