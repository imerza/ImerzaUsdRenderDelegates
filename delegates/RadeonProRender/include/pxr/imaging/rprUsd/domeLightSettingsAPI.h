//
// Copyright 2016 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef RPRUSD_GENERATED_DOMELIGHTSETTINGSAPI_H
#define RPRUSD_GENERATED_DOMELIGHTSETTINGSAPI_H

/// \file rprUsd/domeLightSettingsAPI.h

#include "pxr/pxr.h"
#include "./api.h"
#include "pxr/usd/usd/apiSchemaBase.h"
#include "pxr/usd/usd/prim.h"
#include "pxr/usd/usd/stage.h"
#include "./tokens.h"

#include "pxr/base/vt/value.h"

#include "pxr/base/gf/vec3d.h"
#include "pxr/base/gf/vec3f.h"
#include "pxr/base/gf/matrix4d.h"

#include "pxr/base/tf/token.h"
#include "pxr/base/tf/type.h"

PXR_NAMESPACE_OPEN_SCOPE

class SdfAssetPath;

// -------------------------------------------------------------------------- //
// RPRDOMELIGHTSETTINGSAPI                                                    //
// -------------------------------------------------------------------------- //

/// \class RprUsdDomeLightSettingsAPI
///
///
class RprUsdDomeLightSettingsAPI : public UsdAPISchemaBase
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::SingleApplyAPI;

    /// Construct a RprUsdDomeLightSettingsAPI on UsdPrim \p prim .
    /// Equivalent to RprUsdDomeLightSettingsAPI::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit RprUsdDomeLightSettingsAPI(const UsdPrim& prim=UsdPrim())
        : UsdAPISchemaBase(prim)
    {
    }

    /// Construct a RprUsdDomeLightSettingsAPI on the prim held by \p schemaObj .
    /// Should be preferred over RprUsdDomeLightSettingsAPI(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit RprUsdDomeLightSettingsAPI(const UsdSchemaBase& schemaObj)
        : UsdAPISchemaBase(schemaObj)
    {
    }

    /// Destructor.
    RPRUSD_API
    virtual ~RprUsdDomeLightSettingsAPI();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    RPRUSD_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a RprUsdDomeLightSettingsAPI holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// RprUsdDomeLightSettingsAPI(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    RPRUSD_API
    static RprUsdDomeLightSettingsAPI
    Get(const UsdStagePtr &stage, const SdfPath &path);


    /// Returns true if this <b>single-apply</b> API schema can be applied to 
    /// the given \p prim. If this schema can not be a applied to the prim, 
    /// this returns false and, if provided, populates \p whyNot with the 
    /// reason it can not be applied.
    /// 
    /// Note that if CanApply returns false, that does not necessarily imply
    /// that calling Apply will fail. Callers are expected to call CanApply
    /// before calling Apply if they want to ensure that it is valid to 
    /// apply a schema.
    /// 
    /// \sa UsdPrim::GetAppliedSchemas()
    /// \sa UsdPrim::HasAPI()
    /// \sa UsdPrim::CanApplyAPI()
    /// \sa UsdPrim::ApplyAPI()
    /// \sa UsdPrim::RemoveAPI()
    ///
    RPRUSD_API
    static bool 
    CanApply(const UsdPrim &prim, std::string *whyNot=nullptr);

    /// Applies this <b>single-apply</b> API schema to the given \p prim.
    /// This information is stored by adding "RprDomeLightSettingsAPI" to the 
    /// token-valued, listOp metadata \em apiSchemas on the prim.
    /// 
    /// \return A valid RprUsdDomeLightSettingsAPI object is returned upon success. 
    /// An invalid (or empty) RprUsdDomeLightSettingsAPI object is returned upon 
    /// failure. See \ref UsdPrim::ApplyAPI() for conditions 
    /// resulting in failure. 
    /// 
    /// \sa UsdPrim::GetAppliedSchemas()
    /// \sa UsdPrim::HasAPI()
    /// \sa UsdPrim::CanApplyAPI()
    /// \sa UsdPrim::ApplyAPI()
    /// \sa UsdPrim::RemoveAPI()
    ///
    RPRUSD_API
    static RprUsdDomeLightSettingsAPI 
    Apply(const UsdPrim &prim);

protected:
    /// Returns the kind of schema this class belongs to.
    ///
    /// \sa UsdSchemaKind
    RPRUSD_API
    UsdSchemaKind _GetSchemaKind() const override;

private:
    // needs to invoke _GetStaticTfType.
    friend class UsdSchemaRegistry;
    RPRUSD_API
    static const TfType &_GetStaticTfType();

    static bool _IsTypedSchema();

    // override SchemaBase virtuals.
    RPRUSD_API
    const TfType &_GetTfType() const override;

public:
    // --------------------------------------------------------------------- //
    // DOMELIGHTBACKGROUNDOVERRIDE 
    // --------------------------------------------------------------------- //
    /// Whether to override background.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:backgroundOverride:enable = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetDomeLightBackgroundOverrideAttr() const;

    /// See GetDomeLightBackgroundOverrideAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateDomeLightBackgroundOverrideAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // BACKGROUNDOVERRIDECOLOR 
    // --------------------------------------------------------------------- //
    /// Color that overrides background
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform color3f rpr:backgroundOverride:color = (1, 1, 1)` |
    /// | C++ Type | GfVec3f |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Color3f |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetBackgroundOverrideColorAttr() const;

    /// See GetBackgroundOverrideColorAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateBackgroundOverrideColorAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // DOMELIGHTBACKGROUNDOVERRIDEGLOBAL 
    // --------------------------------------------------------------------- //
    /// Whether to override background.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:backgroundOverrideGlobal:enable = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetDomeLightBackgroundOverrideGlobalAttr() const;

    /// See GetDomeLightBackgroundOverrideGlobalAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateDomeLightBackgroundOverrideGlobalAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // BACKGROUNDOVERRIDECOLORGLOBAL 
    // --------------------------------------------------------------------- //
    /// Color that overrides background
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform color3f rpr:backgroundOverrideGlobal:color = (1, 1, 1)` |
    /// | C++ Type | GfVec3f |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Color3f |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetBackgroundOverrideColorGlobalAttr() const;

    /// See GetBackgroundOverrideColorGlobalAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateBackgroundOverrideColorGlobalAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // ===================================================================== //
    // Feel free to add custom code below this line, it will be preserved by 
    // the code generator. 
    //
    // Just remember to: 
    //  - Close the class declaration with }; 
    //  - Close the namespace with PXR_NAMESPACE_CLOSE_SCOPE
    //  - Close the include guard with #endif
    // ===================================================================== //
    // --(BEGIN CUSTOM CODE)--
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
