ldapsearch -Q -LLL "(uid=z*)" |grep "^cn:"|cut -c 5-| sort -r -f
