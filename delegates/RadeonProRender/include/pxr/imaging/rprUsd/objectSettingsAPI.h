//
// Copyright 2016 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef RPRUSD_GENERATED_OBJECTSETTINGSAPI_H
#define RPRUSD_GENERATED_OBJECTSETTINGSAPI_H

/// \file rprUsd/objectSettingsAPI.h

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
// RPROBJECTSETTINGSAPI                                                       //
// -------------------------------------------------------------------------- //

/// \class RprUsdObjectSettingsAPI
///
///
class RprUsdObjectSettingsAPI : public UsdAPISchemaBase
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::SingleApplyAPI;

    /// Construct a RprUsdObjectSettingsAPI on UsdPrim \p prim .
    /// Equivalent to RprUsdObjectSettingsAPI::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit RprUsdObjectSettingsAPI(const UsdPrim& prim=UsdPrim())
        : UsdAPISchemaBase(prim)
    {
    }

    /// Construct a RprUsdObjectSettingsAPI on the prim held by \p schemaObj .
    /// Should be preferred over RprUsdObjectSettingsAPI(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit RprUsdObjectSettingsAPI(const UsdSchemaBase& schemaObj)
        : UsdAPISchemaBase(schemaObj)
    {
    }

    /// Destructor.
    RPRUSD_API
    virtual ~RprUsdObjectSettingsAPI();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    RPRUSD_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a RprUsdObjectSettingsAPI holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// RprUsdObjectSettingsAPI(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    RPRUSD_API
    static RprUsdObjectSettingsAPI
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
    /// This information is stored by adding "RprObjectSettingsAPI" to the 
    /// token-valued, listOp metadata \em apiSchemas on the prim.
    /// 
    /// \return A valid RprUsdObjectSettingsAPI object is returned upon success. 
    /// An invalid (or empty) RprUsdObjectSettingsAPI object is returned upon 
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
    static RprUsdObjectSettingsAPI 
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
    // OBJECTTRANSFORMSAMPLES 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int primvars:rpr:object:transform:samples = 1` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetObjectTransformSamplesAttr() const;

    /// See GetObjectTransformSamplesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectTransformSamplesAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTDEFORMSAMPLES 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int primvars:rpr:object:deform:samples = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetObjectDeformSamplesAttr() const;

    /// See GetObjectDeformSamplesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectDeformSamplesAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTID 
    // --------------------------------------------------------------------- //
    /// Index number of the 'Object Index' render pass
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `int primvars:rpr:object:id = 0` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    RPRUSD_API
    UsdAttribute GetObjectIdAttr() const;

    /// See GetObjectIdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectIdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYCAMERA 
    // --------------------------------------------------------------------- //
    /// Used to show or hide an object from the camera.
    /// Disabling camera visibility is the most optimized way to hide an object from the camera but still have it cast shadows, be visible in reflections, etc.
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:camera = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityCameraAttr() const;

    /// See GetObjectVisibilityCameraAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityCameraAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYDIFFUSE 
    // --------------------------------------------------------------------- //
    /// Diffuse visibility affects indirect diffuse rays and makes an object visible or invisible in reflections on diffuse surfaces.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:diffuse = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityDiffuseAttr() const;

    /// See GetObjectVisibilityDiffuseAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityDiffuseAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYSHADOW 
    // --------------------------------------------------------------------- //
    /// Shadow visibility controls whether to show or to hide shadows cast by the object onto other surfaces (including reflected shadows and shadows seen through transparent objects). You might need this option to hide shadows that darken other objects in the scene or create unwanted effects.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:shadow = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityShadowAttr() const;

    /// See GetObjectVisibilityShadowAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityShadowAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYREFLECTION 
    // --------------------------------------------------------------------- //
    /// Reflection visibility makes an object visible or invisible in reflections on specular surfaces. Note that hiding an object from specular reflections keeps its shadows (including reflected shadows) visible.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:reflection = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityReflectionAttr() const;

    /// See GetObjectVisibilityReflectionAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityReflectionAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYGLOSSYREFLECTION 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:glossyReflection = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityGlossyReflectionAttr() const;

    /// See GetObjectVisibilityGlossyReflectionAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityGlossyReflectionAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYREFRACTION 
    // --------------------------------------------------------------------- //
    /// Refraction visibility makes an object visible or invisible when seen through transparent objects. Note that hiding an object from refractive rays keeps its shadows (including refracted shadows) visible.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:refraction = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityRefractionAttr() const;

    /// See GetObjectVisibilityRefractionAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityRefractionAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYGLOSSYREFRACTION 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:glossyRefraction = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityGlossyRefractionAttr() const;

    /// See GetObjectVisibilityGlossyRefractionAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityGlossyRefractionAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTVISIBILITYTRANSPARENT 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool primvars:rpr:object:visibility:transparent = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    RPRUSD_API
    UsdAttribute GetObjectVisibilityTransparentAttr() const;

    /// See GetObjectVisibilityTransparentAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectVisibilityTransparentAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // OBJECTASSETNAME 
    // --------------------------------------------------------------------- //
    /// Asset name for cryptomatte asset pass
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `string primvars:rpr:object:assetName = ""` |
    /// | C++ Type | std::string |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->String |
    RPRUSD_API
    UsdAttribute GetObjectAssetNameAttr() const;

    /// See GetObjectAssetNameAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateObjectAssetNameAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

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
