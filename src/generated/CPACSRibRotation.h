// Copyright (c) 2016 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <tixi.h>
#include <string>
#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include "tigl_internal.h"
#include "CPACSRibRotation_ribRotationReference.h"

namespace tigl
{
    class CCPACSWingRibsPositioning;
    
    namespace generated
    {
        // This class is used in:
        // CPACSWingRibsPositioning
        
        // generated from /xsd:schema/xsd:complexType[730]
        class CPACSRibRotation
        {
        public:
            TIGL_EXPORT CPACSRibRotation(CCPACSWingRibsPositioning* parent);
            
            TIGL_EXPORT virtual ~CPACSRibRotation();
            
            TIGL_EXPORT CCPACSWingRibsPositioning* GetParent() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const boost::optional<CPACSRibRotation_ribRotationReference>& GetRibRotationReference() const;
            TIGL_EXPORT virtual boost::optional<CPACSRibRotation_ribRotationReference>& GetRibRotationReference();
            
            TIGL_EXPORT virtual const double& GetZ() const;
            TIGL_EXPORT virtual void SetZ(const double& value);
            
        protected:
            CCPACSWingRibsPositioning* m_parent;
            
            boost::optional<CPACSRibRotation_ribRotationReference> m_ribRotationReference;
            double                                                 m_z;
            
        private:
            #ifdef HAVE_CPP11
            CPACSRibRotation(const CPACSRibRotation&) = delete;
            CPACSRibRotation& operator=(const CPACSRibRotation&) = delete;
            
            CPACSRibRotation(CPACSRibRotation&&) = delete;
            CPACSRibRotation& operator=(CPACSRibRotation&&) = delete;
            #else
            CPACSRibRotation(const CPACSRibRotation&);
            CPACSRibRotation& operator=(const CPACSRibRotation&);
            #endif
        };
    }
    
    // CPACSRibRotation is customized, use type CCPACSWingRibRotation directly
}
