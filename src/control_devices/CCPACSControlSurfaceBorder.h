/*
 * Copyright (C) 2007-2013 German Aerospace Center (DLR/SC)
 *
 * Created: 2014-01-28 Mark Geiger <Mark.Geiger@dlr.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/**
 * @file
 * @brief  Implementation of ..
 */

#ifndef CCPACSBorder_H
#define CCPACSBorder_H

#include <string>

#include "tixi.h"
#include "CTiglError.h"

namespace tigl
{

class CCPACSControlSurfaceBorder
{

private:

    std::string xsiType;

    double etaLE;
    double etaTE;
    double xsiLE;
    double xsiTE;

    // choice
    // airfoil
    // leading Edge shape
    // relHeightLE

public:
    CCPACSControlSurfaceBorder();

    void ReadCPACS(TixiDocumentHandle tixiHandle,
            const std::string & BorderXPath);

    double getEtaLE() const;
    double getEtaTE() const;
    double getXsiLE() const;
    double getXsiTE() const;

};

} // end namespace tigl

#endif // CCPACSBorder_H
