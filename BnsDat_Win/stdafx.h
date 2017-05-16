#include <stdio.h>
#include <string>
#include <vector>

//wxWidgets
#ifndef WX_PRECOMP  
#include <wx/wx.h>  
#endif 

#include <wx/wxprec.h>
#include <wx/xml/xml.h>
#include <wx/filename.h>
#include <wx/ffile.h>
#include <wx/mstream.h>
#include <wx/dynarray.h>
#include <wx/zstream.h>
#include <wx/app.h>
#include <wx/wxprec.h>  
#include <wx/hashmap.h>
#include <wx/wfstream.h>
#include <wx/dir.h>
#include <wx/stdpaths.h>

//openssl
#include <openssl/aes.h>