/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file zypp/source/yum/YUMProductImpl.cc
 *
*/

#include "zypp/source/yum/YUMProductImpl.h"
#include "zypp/source/yum/YUMSourceImpl.h"
#include <zypp/CapFactory.h>
#include "zypp/parser/yum/YUMParserData.h"
#include <zypp/parser/yum/YUMParser.h>
#include "zypp/Package.h"
#include "zypp/Script.h"
#include "zypp/Message.h"
#include "zypp/base/Logger.h"


using namespace std;
using namespace zypp::detail;
using namespace zypp::parser::yum;

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  namespace source
  { /////////////////////////////////////////////////////////////////
    namespace yum
    {
      ///////////////////////////////////////////////////////////////////
      //
      //        CLASS NAME : YUMProductImpl
      //
      ///////////////////////////////////////////////////////////////////

      /** Default ctor
       * \bug CANT BE CONSTUCTED THAT WAY ANYMORE
      */
      YUMProductImpl::YUMProductImpl(
	Source_Ref source_r,
	const zypp::parser::yum::YUMProductData & parsed
      )
      :	_category(parsed.type),
	_vendor(parsed.vendor),
	_short_name(parsed.short_name),
	_source(source_r)
      {
	_category = source_r.baseSource() ? "base" : "add-on";
      }

      std::string YUMProductImpl::category() const
      { return _category; }

      Label YUMProductImpl::vendor() const
      { return _vendor; }

      TranslatedText YUMProductImpl::summary() const
      { return _summary; }

      TranslatedText YUMProductImpl::description() const
      { return _description; }

      Source_Ref YUMProductImpl::source() const
      { return _source; }

#warning the metadata specification does not support product flags
      std::list<std::string> YUMProductImpl::flags() const
      { return ProductImplIf::flags(); }

      TranslatedText YUMProductImpl::shortName() const
      { return _short_name; }

    } // namespace yum
    /////////////////////////////////////////////////////////////////
  } // namespace source
  ///////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
