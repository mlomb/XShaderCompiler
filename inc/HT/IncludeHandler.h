/*
 * IncludeHandler.h
 * 
 * This file is part of the "HLSL Translator" (Copyright (c) 2014 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef HTLIB_INCLUDE_HANDLER_H
#define HTLIB_INCLUDE_HANDLER_H


#include "Export.h"
#include <string>
#include <istream>
#include <memory>


namespace HTLib
{


//! Interface for handling new include streams.
class HTLIB_EXPORT IncludeHandler
{
    
    public:
        
        virtual ~IncludeHandler()
        {
        }

        /**
        \brief Returns an input stream for the specified filename.
        \param[in] includeName Specifies the include filename.
        \return Unique pointer to the new input stream.
        */
        virtual std::unique_ptr<std::istream> Include(const std::string& filename) = 0;

};


} // /namespace HTLib


#endif



// ================================================================================