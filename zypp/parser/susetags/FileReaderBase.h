/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file	zypp/parser/susetags/FileReaderBase.h
 *
*/
#ifndef ZYPP_PARSER_SUSETAGS_FILEREADERBASE_H
#define ZYPP_PARSER_SUSETAGS_FILEREADERBASE_H

#include <iosfwd>

#include "zypp/base/PtrTypes.h"
#include "zypp/parser/TagParser.h"

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  namespace parser
  { /////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////
    namespace susetags
    { /////////////////////////////////////////////////////////////////

      ///////////////////////////////////////////////////////////////////
      //
      //	CLASS NAME : FileReaderBase
      //
      /** Common base for susetags::FileReaders. */
      class FileReaderBase : public TagParser
      {
	protected:
	  class BaseImpl;
      };
      ///////////////////////////////////////////////////////////////////

      /////////////////////////////////////////////////////////////////
    } // namespace susetags
    ///////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////
  } // namespace parser
  ///////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
#endif // ZYPP_PARSER_SUSETAGS_FILEREADERBASE_H
