// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2018 The WAGERR developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WAGERR_ACCUMULATORCHECKPOINTS_JSON_H
#define WAGERR_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 1400,\n"
            "    \"1\": \"f42866d9331f0d3185c04d605cd96e35a3f820928c67b9b112bb1902fbe1450d\",\n"
            "    \"5\": \"dba24259c0399b09eefdb32bb1693ab844aa362d87dd9ae57ddb90fe5c7cae3a\",\n"
            "    \"10\": \"0dc19dc27a7837ba7cd571ee08a25a5f02b24a60a3b85e7047f6b0e023df7a82\",\n"
            "    \"50\": \"6228d43396362c48e51063a6137b44dcab1402068c97d3e32db7719c59e4ae25\",\n"
            "    \"100\": \"780cd461fad2b35d1ae15c7bf4411a5cf78dad3e5bae16d3a5672d8a42046431\",\n"
            "    \"500\": \"3177d9f3d8d769f20f1a67d5871df2a36bfee0ea5cbe18f5a79aa63bc01679c2\",\n"
            "    \"1000\": \"0e4b8ffe2e5427fca32a4dcf85d3cb648e45d93826d3e44e120b4d8b29194192\",\n"
            "    \"5000\": \"c97ebfe976a907d1893e1376ac6907997d3a3f72a37a1cf11f2fdb1bc2476f95\"\n"
            "  },\n"            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //WAGERR_ACCUMULATORCHECKPOINTS_JSON_H
