function CRYPTOFINANCE(ticker,instance){
  var instance = instance.toString().toLowerCase();
  var ticker = ticker.toString().toLowerCase();
  var num = 0;
  var URL_STRING2 = "https://api.coingecko.com/api/v3/coins/list?include_platform=false";
  var a_response = UrlFetchApp.fetch(URL_STRING2);
  var a_json = a_response.getContentText();
  var a_data = JSON.parse(a_json);
  var d_length = a_data.length;

  for(i=0;i<d_length;i++){
    var text = a_data[i]["symbol"];
    if(text == ticker){
      num = i;
      i = d_length;
    }
  }

  var final_text = a_data[num]["id"];
  var URL_STRING = "https://api.coingecko.com/api/v3/simple/price?ids="+final_text+"&vs_currencies=usd&include_market_cap=true&include_24hr_vol=true&include_24hr_change=true";
  var b_response = UrlFetchApp.fetch(URL_STRING);
  var b_json = b_response.getContentText();
  var b_data = JSON.parse(b_json);
  var text_data = "";
  
  
  if(instance == "price"){
    text_data = "usd"
  }
  if(instance == "marketcap"){
    text_data = "usd_market_cap"
  }
  if(instance == "volume"){
    text_data = "usd_24h_vol"
  }
  if(instance == "marketcap"){
    text_data = "usd_24h_change"
  }
  var result = b_data[final_text][text_data];

  return result;  
}
