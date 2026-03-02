//
// Copyright 2016 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef RPRUSD_GENERATED_RENDERERSETTINGSAPI_H
#define RPRUSD_GENERATED_RENDERERSETTINGSAPI_H

/// \file rprUsd/rendererSettingsAPI.h

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
// RPRRENDERERSETTINGSAPI                                                     //
// -------------------------------------------------------------------------- //

/// \class RprUsdRendererSettingsAPI
///
/// Defines render settings for AMD Radeon Pro Renderer
///
/// For any described attribute \em Fallback \em Value or \em Allowed \em Values below
/// that are text/tokens, the actual token is published and defined in \ref RprUsdTokens.
/// So to set an attribute to the value "rightHanded", use RprUsdTokens->rightHanded
/// as the value.
///
class RprUsdRendererSettingsAPI : public UsdAPISchemaBase
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::SingleApplyAPI;

    /// Construct a RprUsdRendererSettingsAPI on UsdPrim \p prim .
    /// Equivalent to RprUsdRendererSettingsAPI::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit RprUsdRendererSettingsAPI(const UsdPrim& prim=UsdPrim())
        : UsdAPISchemaBase(prim)
    {
    }

    /// Construct a RprUsdRendererSettingsAPI on the prim held by \p schemaObj .
    /// Should be preferred over RprUsdRendererSettingsAPI(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit RprUsdRendererSettingsAPI(const UsdSchemaBase& schemaObj)
        : UsdAPISchemaBase(schemaObj)
    {
    }

    /// Destructor.
    RPRUSD_API
    virtual ~RprUsdRendererSettingsAPI();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    RPRUSD_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a RprUsdRendererSettingsAPI holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// RprUsdRendererSettingsAPI(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    RPRUSD_API
    static RprUsdRendererSettingsAPI
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
    /// This information is stored by adding "RprRendererSettingsAPI" to the 
    /// token-valued, listOp metadata \em apiSchemas on the prim.
    /// 
    /// \return A valid RprUsdRendererSettingsAPI object is returned upon success. 
    /// An invalid (or empty) RprUsdRendererSettingsAPI object is returned upon 
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
    static RprUsdRendererSettingsAPI 
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
    // RPRCOREDISPLAYGAMMA 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:core:displayGamma = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprCoreDisplayGammaAttr() const;

    /// See GetRprCoreDisplayGammaAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreDisplayGammaAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCOREUSEGMON 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:core:useGmon = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprCoreUseGmonAttr() const;

    /// See GetRprCoreUseGmonAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreUseGmonAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCORERENDERQUALITY 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:core:renderQuality = "Northstar"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | Low, Medium, High, HybridPro, Full, Northstar |
    RPRUSD_API
    UsdAttribute GetRprCoreRenderQualityAttr() const;

    /// See GetRprCoreRenderQualityAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreRenderQualityAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCORERENDERMODE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:core:renderMode = "Global Illumination"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | Global Illumination, Direct Illumination, Wireframe, Material Index, Position, Normal, Texcoord, Ambient Occlusion, Diffuse, Contour |
    RPRUSD_API
    UsdAttribute GetRprCoreRenderModeAttr() const;

    /// See GetRprCoreRenderModeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreRenderModeAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCOREFLIPVERTICAL 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:core:flipVertical = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprCoreFlipVerticalAttr() const;

    /// See GetRprCoreFlipVerticalAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreFlipVerticalAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCOREUSEOPENCL 
    // --------------------------------------------------------------------- //
    /// Use OpenCL Northstar backed instead of HIP/CUDA
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:core:useOpenCL = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprCoreUseOpenCLAttr() const;

    /// See GetRprCoreUseOpenCLAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreUseOpenCLAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCORELEGACYTOON 
    // --------------------------------------------------------------------- //
    /// Enable backward compatibility of RPR Toon shader appearance
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:core:legacyToon = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprCoreLegacyToonAttr() const;

    /// See GetRprCoreLegacyToonAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreLegacyToonAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRAMBIENTOCCLUSIONRADIUS 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:ambientOcclusion:radius = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprAmbientOcclusionRadiusAttr() const;

    /// See GetRprAmbientOcclusionRadiusAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprAmbientOcclusionRadiusAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURANTIALIASING 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:contour:antialiasing = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourAntialiasingAttr() const;

    /// See GetRprContourAntialiasingAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourAntialiasingAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURUSENORMAL 
    // --------------------------------------------------------------------- //
    /// Whether to use geometry normals for edge detection or not
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:contour:useNormal = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourUseNormalAttr() const;

    /// See GetRprContourUseNormalAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourUseNormalAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURLINEWIDTHNORMAL 
    // --------------------------------------------------------------------- //
    /// Linewidth of edges detected via normals.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:contour:linewidthNormal = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourLinewidthNormalAttr() const;

    /// See GetRprContourLinewidthNormalAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourLinewidthNormalAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURNORMALTHRESHOLD 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:contour:normalThreshold = 45` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourNormalThresholdAttr() const;

    /// See GetRprContourNormalThresholdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourNormalThresholdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURUSEPRIMID 
    // --------------------------------------------------------------------- //
    /// Whether to use primitive Id for edge detection or not.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:contour:usePrimId = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourUsePrimIdAttr() const;

    /// See GetRprContourUsePrimIdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourUsePrimIdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURLINEWIDTHPRIMID 
    // --------------------------------------------------------------------- //
    /// Linewidth of edges detected via Primitive Id.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:contour:linewidthPrimId = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourLinewidthPrimIdAttr() const;

    /// See GetRprContourLinewidthPrimIdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourLinewidthPrimIdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURUSEMATERIALID 
    // --------------------------------------------------------------------- //
    /// Whether to use material Id for edge detection or not.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:contour:useMaterialId = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourUseMaterialIdAttr() const;

    /// See GetRprContourUseMaterialIdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourUseMaterialIdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURLINEWIDTHMATERIALID 
    // --------------------------------------------------------------------- //
    /// Linewidth of edges detected via Material Id.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:contour:linewidthMaterialId = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourLinewidthMaterialIdAttr() const;

    /// See GetRprContourLinewidthMaterialIdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourLinewidthMaterialIdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURUSEUV 
    // --------------------------------------------------------------------- //
    /// Whether to use UV for edge detection or not
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:contour:useUv = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourUseUvAttr() const;

    /// See GetRprContourUseUvAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourUseUvAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURLINEWIDTHUV 
    // --------------------------------------------------------------------- //
    /// Linewidth of edges detected via UV.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:contour:linewidthUv = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourLinewidthUvAttr() const;

    /// See GetRprContourLinewidthUvAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourLinewidthUvAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURUVTHRESHOLD 
    // --------------------------------------------------------------------- //
    /// Threshold of edges detected via UV.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:contour:uvThreshold = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourUvThresholdAttr() const;

    /// See GetRprContourUvThresholdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourUvThresholdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCONTOURDEBUG 
    // --------------------------------------------------------------------- //
    /// Whether to show colored outlines according to used features or not.
    /// Colors legend:
    /// * red - primitive Id
    /// * green - material Id
    /// * blue - normal
    /// * yellow - primitive Id + material Id
    /// * magenta - primitive Id + normal
    /// * cyan - material Id + normal
    /// * black - all
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:contour:debug = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprContourDebugAttr() const;

    /// See GetRprContourDebugAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprContourDebugAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCORECAMERAMODE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:core:cameraMode = "default"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | default, Latitude Longitude 360, Latitude Longitude Stereo, Cubemap, Cubemap Stereo, Fisheye |
    RPRUSD_API
    UsdAttribute GetRprCoreCameraModeAttr() const;

    /// See GetRprCoreCameraModeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCoreCameraModeAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRALPHAENABLE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:alpha:enable = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprAlphaEnableAttr() const;

    /// See GetRprAlphaEnableAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprAlphaEnableAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // STAGEMETERSPERUNIT 
    // --------------------------------------------------------------------- //
    /// Scene unit size in meters
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform double stageMetersPerUnit = 1` |
    /// | C++ Type | double |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Double |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetStageMetersPerUnitAttr() const;

    /// See GetStageMetersPerUnitAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateStageMetersPerUnitAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRBEAUTYMOTIONBLURENABLE 
    // --------------------------------------------------------------------- //
    /// If disabled, only velocity AOV will store information about movement on the scene. Required for motion blur that is generated in post-processing.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:beautyMotionBlur:enable = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprBeautyMotionBlurEnableAttr() const;

    /// See GetRprBeautyMotionBlurEnableAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprBeautyMotionBlurEnableAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRUNIFORMSEED 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:uniformSeed = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprUniformSeedAttr() const;

    /// See GetRprUniformSeedAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprUniformSeedAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRSEEDOVERRIDE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:seedOverride = 0` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprSeedOverrideAttr() const;

    /// See GetRprSeedOverrideAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprSeedOverrideAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRMAXSAMPLES 
    // --------------------------------------------------------------------- //
    /// Maximum number of samples to render for each pixel.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:maxSamples = 128` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprMaxSamplesAttr() const;

    /// See GetRprMaxSamplesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprMaxSamplesAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRADAPTIVESAMPLINGMINSAMPLES 
    // --------------------------------------------------------------------- //
    /// Minimum number of samples to render for each pixel. After this, adaptive sampling will stop sampling pixels where noise is less than 'Variance Threshold'.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:adaptiveSampling:minSamples = 32` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprAdaptiveSamplingMinSamplesAttr() const;

    /// See GetRprAdaptiveSamplingMinSamplesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprAdaptiveSamplingMinSamplesAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRADAPTIVESAMPLINGNOISETRESHOLD 
    // --------------------------------------------------------------------- //
    /// Cutoff for adaptive sampling. Once pixels are below this amount of noise, no more samples are added. Set to 0 for no cutoff.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:adaptiveSampling:noiseTreshold = 0.05` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprAdaptiveSamplingNoiseTresholdAttr() const;

    /// See GetRprAdaptiveSamplingNoiseTresholdAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprAdaptiveSamplingNoiseTresholdAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRAYDEPTH 
    // --------------------------------------------------------------------- //
    /// The number of times that a ray bounces off various surfaces before being terminated.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:rayDepth = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRayDepthAttr() const;

    /// See GetRprQualityRayDepthAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRayDepthAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRAYDEPTHDIFFUSE 
    // --------------------------------------------------------------------- //
    /// The maximum number of times that a light ray can be bounced off diffuse surfaces.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:rayDepthDiffuse = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRayDepthDiffuseAttr() const;

    /// See GetRprQualityRayDepthDiffuseAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRayDepthDiffuseAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRAYDEPTHGLOSSY 
    // --------------------------------------------------------------------- //
    /// The maximum number of ray bounces from specular surfaces.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:rayDepthGlossy = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRayDepthGlossyAttr() const;

    /// See GetRprQualityRayDepthGlossyAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRayDepthGlossyAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRAYDEPTHREFRACTION 
    // --------------------------------------------------------------------- //
    /// The maximum number of times that a light ray can be refracted, and is designated for clear transparent materials, such as glass.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:rayDepthRefraction = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRayDepthRefractionAttr() const;

    /// See GetRprQualityRayDepthRefractionAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRayDepthRefractionAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRAYDEPTHGLOSSYREFRACTION 
    // --------------------------------------------------------------------- //
    /// The Glossy Refraction Ray Depth parameter is similar to the Refraction Ray Depth. The difference is that it is aimed to work with matte refractive materials, such as semi-frosted glass.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:rayDepthGlossyRefraction = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRayDepthGlossyRefractionAttr() const;

    /// See GetRprQualityRayDepthGlossyRefractionAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRayDepthGlossyRefractionAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRAYDEPTHSHADOW 
    // --------------------------------------------------------------------- //
    /// Controls the accuracy of shadows cast by transparent objects. It defines the maximum number of surfaces that a light ray can encounter on its way causing these surfaces to cast shadows.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:rayDepthShadow = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRayDepthShadowAttr() const;

    /// See GetRprQualityRayDepthShadowAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRayDepthShadowAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRAYCASTEPSILON 
    // --------------------------------------------------------------------- //
    /// Determines an offset used to move light rays away from the geometry for ray-surface intersection calculations.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:quality:raycastEpsilon = 0.002` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRaycastEpsilonAttr() const;

    /// See GetRprQualityRaycastEpsilonAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRaycastEpsilonAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRADIANCECLAMPING 
    // --------------------------------------------------------------------- //
    /// Limits the intensity, or the maximum brightness, of samples in the scene. Greater clamp radiance values produce more brightness. Set to 0.0 ot disable clamping.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:quality:radianceClamping = 0` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityRadianceClampingAttr() const;

    /// See GetRprQualityRadianceClampingAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityRadianceClampingAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYFILTERTYPE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:quality:filterType = "None"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | None, Box, Triangle, Gaussian, Mitchell, Lanczos, BlackmanHarris |
    RPRUSD_API
    UsdAttribute GetRprQualityFilterTypeAttr() const;

    /// See GetRprQualityFilterTypeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityFilterTypeAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYIMAGEFILTERRADIUS 
    // --------------------------------------------------------------------- //
    /// Determines Pixel filter width (anti-aliasing).
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:quality:imageFilterRadius = 1.5` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityImageFilterRadiusAttr() const;

    /// See GetRprQualityImageFilterRadiusAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityImageFilterRadiusAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYRESERVOIRSAMPLING 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:quality:reservoirSampling = "PathSpace"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | Off, ScreenSpace, PathSpace |
    RPRUSD_API
    UsdAttribute GetRprQualityReservoirSamplingAttr() const;

    /// See GetRprQualityReservoirSamplingAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityReservoirSamplingAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYINTERACTIVERAYDEPTH 
    // --------------------------------------------------------------------- //
    /// Controls value of 'Max Ray Depth' in interactive mode.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:interactive:rayDepth = 2` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityInteractiveRayDepthAttr() const;

    /// See GetRprQualityInteractiveRayDepthAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityInteractiveRayDepthAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYINTERACTIVERESOLUTIONDOWNSCALE 
    // --------------------------------------------------------------------- //
    /// Controls how much rendering resolution is downscaled in interactive mode. Formula: resolution / (2 ^ downscale). E.g. downscale==2 will give you 4 times smaller rendering resolution.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform int rpr:quality:interactive:resolutionDownscale = 3` |
    /// | C++ Type | int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Int |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityInteractiveResolutionDownscaleAttr() const;

    /// See GetRprQualityInteractiveResolutionDownscaleAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityInteractiveResolutionDownscaleAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRQUALITYINTERACTIVEENABLEDOWNSCALE 
    // --------------------------------------------------------------------- //
    /// Controls whether in interactive mode resolution should be downscaled or no.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:quality:interactive:enableDownscale = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprQualityInteractiveEnableDownscaleAttr() const;

    /// See GetRprQualityInteractiveEnableDownscaleAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprQualityInteractiveEnableDownscaleAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDTONEMAPPING 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:hybrid:tonemapping = "None"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | None, Filmic, Aces, Reinhard, Photolinear |
    RPRUSD_API
    UsdAttribute GetRprHybridTonemappingAttr() const;

    /// See GetRprHybridTonemappingAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridTonemappingAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDDENOISING 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:hybrid:denoising = "None"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | None, SVGF, ASVGF |
    RPRUSD_API
    UsdAttribute GetRprHybridDenoisingAttr() const;

    /// See GetRprHybridDenoisingAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridDenoisingAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDDISPLACEMENT 
    // --------------------------------------------------------------------- //
    /// Enables displecement in Hybrid Pro. Render restart might be required.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:hybrid:displacement = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprHybridDisplacementAttr() const;

    /// See GetRprHybridDisplacementAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridDisplacementAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDACCELERATION_MEMORY_SIZE_MB 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform uint rpr:hybrid:acceleration_memory_size_mb = 2048` |
    /// | C++ Type | unsigned int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->UInt |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprHybridAcceleration_memory_size_mbAttr() const;

    /// See GetRprHybridAcceleration_memory_size_mbAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridAcceleration_memory_size_mbAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDMESH_MEMORY_SIZE_MB 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform uint rpr:hybrid:mesh_memory_size_mb = 1024` |
    /// | C++ Type | unsigned int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->UInt |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprHybridMesh_memory_size_mbAttr() const;

    /// See GetRprHybridMesh_memory_size_mbAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridMesh_memory_size_mbAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDSTAGING_MEMORY_SIZE_MB 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform uint rpr:hybrid:staging_memory_size_mb = 512` |
    /// | C++ Type | unsigned int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->UInt |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprHybridStaging_memory_size_mbAttr() const;

    /// See GetRprHybridStaging_memory_size_mbAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridStaging_memory_size_mbAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDSCRATCH_MEMORY_SIZE_MB 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform uint rpr:hybrid:scratch_memory_size_mb = 256` |
    /// | C++ Type | unsigned int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->UInt |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprHybridScratch_memory_size_mbAttr() const;

    /// See GetRprHybridScratch_memory_size_mbAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridScratch_memory_size_mbAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRTONEMAPPINGENABLE 
    // --------------------------------------------------------------------- //
    /// Enable linear photographic tone mapping filter. More info in RIF documentation.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:tonemapping:enable = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprTonemappingEnableAttr() const;

    /// See GetRprTonemappingEnableAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprTonemappingEnableAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRTONEMAPPINGEXPOSURETIME 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:tonemapping:exposureTime = 0.125` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprTonemappingExposureTimeAttr() const;

    /// See GetRprTonemappingExposureTimeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprTonemappingExposureTimeAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRTONEMAPPINGSENSITIVITY 
    // --------------------------------------------------------------------- //
    /// Luminance of the scene (in candela per m^2).
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:tonemapping:sensitivity = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprTonemappingSensitivityAttr() const;

    /// See GetRprTonemappingSensitivityAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprTonemappingSensitivityAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRTONEMAPPINGFSTOP 
    // --------------------------------------------------------------------- //
    /// Aperture f-number.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:tonemapping:fstop = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprTonemappingFstopAttr() const;

    /// See GetRprTonemappingFstopAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprTonemappingFstopAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRTONEMAPPINGGAMMA 
    // --------------------------------------------------------------------- //
    /// Gamma correction value.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:tonemapping:gamma = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprTonemappingGammaAttr() const;

    /// See GetRprTonemappingGammaAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprTonemappingGammaAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRGAMMAENABLE 
    // --------------------------------------------------------------------- //
    /// Enable gamma correction.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:gamma:enable = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprGammaEnableAttr() const;

    /// See GetRprGammaEnableAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprGammaEnableAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRGAMMAVALUE 
    // --------------------------------------------------------------------- //
    /// Gamma correction value.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform float rpr:gamma:value = 1` |
    /// | C++ Type | float |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprGammaValueAttr() const;

    /// See GetRprGammaValueAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprGammaValueAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPROCIOCONFIGPATH 
    // --------------------------------------------------------------------- //
    /// The file path of the OpenColorIO config file to be used. Overrides any value specified in OCIO environment variable.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform asset rpr:ocio:configPath = @@` |
    /// | C++ Type | SdfAssetPath |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Asset |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprOcioConfigPathAttr() const;

    /// See GetRprOcioConfigPathAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprOcioConfigPathAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPROCIORENDERINGCOLORSPACE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform string rpr:ocio:renderingColorSpace = ""` |
    /// | C++ Type | std::string |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->String |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprOcioRenderingColorSpaceAttr() const;

    /// See GetRprOcioRenderingColorSpaceAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprOcioRenderingColorSpaceAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCRYPTOMATTEOUTPUTPATH 
    // --------------------------------------------------------------------- //
    /// Controls where cryptomatte should be saved. Use 'Cryptomatte Output Mode' to control when cryptomatte is saved.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform asset rpr:cryptomatte:outputPath = @@` |
    /// | C++ Type | SdfAssetPath |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Asset |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprCryptomatteOutputPathAttr() const;

    /// See GetRprCryptomatteOutputPathAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCryptomatteOutputPathAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCRYPTOMATTEOUTPUTMODE 
    // --------------------------------------------------------------------- //
    /// Batch - save cryptomatte only in the batch rendering mode (USD Render ROP, husk). Interactive - same as the Batch but also save cryptomatte in the non-batch rendering mode. Cryptomatte always saved after 'Max Samples' is reached.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:cryptomatte:outputMode = "Batch"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | Batch, Interactive |
    RPRUSD_API
    UsdAttribute GetRprCryptomatteOutputModeAttr() const;

    /// See GetRprCryptomatteOutputModeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCryptomatteOutputModeAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRCRYPTOMATTEPREVIEWLAYER 
    // --------------------------------------------------------------------- //
    /// Whether to generate cryptomatte preview layer or not. Whether you need it depends on the software you are planning to use cryptomatte in. For example, Houdini's COP Cryptomatte requires it, Nuke, on contrary, does not.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:cryptomatte:previewLayer = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprCryptomattePreviewLayerAttr() const;

    /// See GetRprCryptomattePreviewLayerAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprCryptomattePreviewLayerAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPREXPORTPATH 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform asset rpr:export:path = @@` |
    /// | C++ Type | SdfAssetPath |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Asset |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprExportPathAttr() const;

    /// See GetRprExportPathAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprExportPathAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPREXPORTASSINGLEFILE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:export:asSingleFile = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprExportAsSingleFileAttr() const;

    /// See GetRprExportAsSingleFileAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprExportAsSingleFileAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPREXPORTUSEIMAGECACHE 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool rpr:export:useImageCache = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    RPRUSD_API
    UsdAttribute GetRprExportUseImageCacheAttr() const;

    /// See GetRprExportUseImageCacheAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprExportUseImageCacheAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RPRHYBRIDUPSCALINGQUALITY 
    // --------------------------------------------------------------------- //
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token rpr:hybrid:upscalingQuality = "Ultra Performance"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref RprUsdTokens "Allowed Values" | Ultra Quality, Quality, Balance, Performance, Ultra Performance |
    RPRUSD_API
    UsdAttribute GetRprHybridUpscalingQualityAttr() const;

    /// See GetRprHybridUpscalingQualityAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    RPRUSD_API
    UsdAttribute CreateRprHybridUpscalingQualityAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

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
