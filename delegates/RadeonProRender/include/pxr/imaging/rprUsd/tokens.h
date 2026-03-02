//
// Copyright 2016 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef RPRUSD_TOKENS_H
#define RPRUSD_TOKENS_H

/// \file rprUsd/tokens.h

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// 
// This is an automatically generated file (by usdGenSchema.py).
// Do not hand-edit!
// 
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "pxr/pxr.h"
#include "./api.h"
#include "pxr/base/tf/staticData.h"
#include "pxr/base/tf/token.h"
#include <vector>

PXR_NAMESPACE_OPEN_SCOPE


/// \class RprUsdTokensType
///
/// \link RprUsdTokens \endlink provides static, efficient
/// \link TfToken TfTokens\endlink for use in all public USD API.
///
/// These tokens are auto-generated from the module's schema, representing
/// property names, for when you need to fetch an attribute or relationship
/// directly by name, e.g. UsdPrim::GetAttribute(), in the most efficient
/// manner, and allow the compiler to verify that you spelled the name
/// correctly.
///
/// RprUsdTokens also contains all of the \em allowedTokens values
/// declared for schema builtin attributes of 'token' scene description type.
/// Use RprUsdTokens like so:
///
/// \code
///     gprim.GetMyTokenValuedAttr().Set(RprUsdTokens->Aces);
/// \endcode
struct RprUsdTokensType {
    RPRUSD_API RprUsdTokensType();
    /// \brief "Aces"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridTonemappingAttr()
    const TfToken Aces;
    /// \brief "Ambient Occlusion"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Ambient_Occlusion;
    /// \brief "ASVGF"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridDenoisingAttr()
    const TfToken ASVGF;
    /// \brief "Balance"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridUpscalingQualityAttr()
    const TfToken Balance;
    /// \brief "Batch"
    /// 
    /// Fallback value for RprUsdRendererSettingsAPI::GetRprCryptomatteOutputModeAttr()
    const TfToken Batch;
    /// \brief "BlackmanHarris"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityFilterTypeAttr()
    const TfToken BlackmanHarris;
    /// \brief "Box"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityFilterTypeAttr()
    const TfToken Box;
    /// \brief "Contour"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Contour;
    /// \brief "Cubemap"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreCameraModeAttr()
    const TfToken Cubemap;
    /// \brief "Cubemap Stereo"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreCameraModeAttr()
    const TfToken Cubemap_Stereo;
    /// \brief "default"
    /// 
    /// Fallback value for RprUsdRendererSettingsAPI::GetRprCoreCameraModeAttr()
    const TfToken default_;
    /// \brief "Diffuse"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Diffuse;
    /// \brief "Direct Illumination"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Direct_Illumination;
    /// \brief "Filmic"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridTonemappingAttr()
    const TfToken Filmic;
    /// \brief "Fisheye"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreCameraModeAttr()
    const TfToken Fisheye;
    /// \brief "Full"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderQualityAttr()
    const TfToken Full;
    /// \brief "Gaussian"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityFilterTypeAttr()
    const TfToken Gaussian;
    /// \brief "Global Illumination"
    /// 
    /// Fallback value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Global_Illumination;
    /// \brief "High"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderQualityAttr()
    const TfToken High;
    /// \brief "HybridPro"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderQualityAttr()
    const TfToken HybridPro;
    /// \brief "Interactive"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCryptomatteOutputModeAttr()
    const TfToken Interactive;
    /// \brief "Lanczos"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityFilterTypeAttr()
    const TfToken Lanczos;
    /// \brief "Latitude Longitude 360"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreCameraModeAttr()
    const TfToken Latitude_Longitude_360;
    /// \brief "Latitude Longitude Stereo"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreCameraModeAttr()
    const TfToken Latitude_Longitude_Stereo;
    /// \brief "Low"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderQualityAttr()
    const TfToken Low;
    /// \brief "Material Index"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Material_Index;
    /// \brief "Medium"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderQualityAttr()
    const TfToken Medium;
    /// \brief "Mitchell"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityFilterTypeAttr()
    const TfToken Mitchell;
    /// \brief "None"
    /// 
    /// Fallback value for RprUsdRendererSettingsAPI::GetRprHybridDenoisingAttr(), Fallback value for RprUsdRendererSettingsAPI::GetRprHybridTonemappingAttr(), Fallback value for RprUsdRendererSettingsAPI::GetRprQualityFilterTypeAttr()
    const TfToken None_;
    /// \brief "Normal"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Normal;
    /// \brief "Northstar"
    /// 
    /// Fallback value for RprUsdRendererSettingsAPI::GetRprCoreRenderQualityAttr()
    const TfToken Northstar;
    /// \brief "Off"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityReservoirSamplingAttr()
    const TfToken Off;
    /// \brief "PathSpace"
    /// 
    /// Fallback value for RprUsdRendererSettingsAPI::GetRprQualityReservoirSamplingAttr()
    const TfToken PathSpace;
    /// \brief "Performance"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridUpscalingQualityAttr()
    const TfToken Performance;
    /// \brief "Photolinear"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridTonemappingAttr()
    const TfToken Photolinear;
    /// \brief "Position"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Position;
    /// \brief "primvars:rpr:mesh:ignoreContour"
    /// 
    /// RprUsdMeshSettingsAPI
    const TfToken primvarsRprMeshIgnoreContour;
    /// \brief "primvars:rpr:mesh:subdivisionCreaseWeight"
    /// 
    /// RprUsdMeshSettingsAPI
    const TfToken primvarsRprMeshSubdivisionCreaseWeight;
    /// \brief "primvars:rpr:mesh:subdivisionLevel"
    /// 
    /// RprUsdMeshSettingsAPI
    const TfToken primvarsRprMeshSubdivisionLevel;
    /// \brief "primvars:rpr:object:assetName"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectAssetName;
    /// \brief "primvars:rpr:object:deform:samples"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectDeformSamples;
    /// \brief "primvars:rpr:object:id"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectId;
    /// \brief "primvars:rpr:object:transform:samples"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectTransformSamples;
    /// \brief "primvars:rpr:object:visibility:camera"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityCamera;
    /// \brief "primvars:rpr:object:visibility:diffuse"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityDiffuse;
    /// \brief "primvars:rpr:object:visibility:glossyReflection"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityGlossyReflection;
    /// \brief "primvars:rpr:object:visibility:glossyRefraction"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityGlossyRefraction;
    /// \brief "primvars:rpr:object:visibility:light"
    /// 
    /// RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityLight;
    /// \brief "primvars:rpr:object:visibility:reflection"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityReflection;
    /// \brief "primvars:rpr:object:visibility:refraction"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityRefraction;
    /// \brief "primvars:rpr:object:visibility:shadow"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityShadow;
    /// \brief "primvars:rpr:object:visibility:transparent"
    /// 
    /// RprUsdObjectSettingsAPI, RprUsdMeshSettingsAPI
    const TfToken primvarsRprObjectVisibilityTransparent;
    /// \brief "Quality"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridUpscalingQualityAttr()
    const TfToken Quality;
    /// \brief "Reinhard"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridTonemappingAttr()
    const TfToken Reinhard;
    /// \brief "rpr"
    /// 
    /// .
    const TfToken rpr;
    /// \brief "rpr:adaptiveSampling:minSamples"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprAdaptiveSamplingMinSamples;
    /// \brief "rpr:adaptiveSampling:noiseTreshold"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprAdaptiveSamplingNoiseTreshold;
    /// \brief "rpr:alpha:enable"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprAlphaEnable;
    /// \brief "rpr:ambientOcclusion:radius"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprAmbientOcclusionRadius;
    /// \brief "rpr:backgroundOverride:color"
    /// 
    /// RprUsdDomeLightSettingsAPI
    const TfToken rprBackgroundOverrideColor;
    /// \brief "rpr:backgroundOverride:enable"
    /// 
    /// RprUsdDomeLightSettingsAPI
    const TfToken rprBackgroundOverrideEnable;
    /// \brief "rpr:backgroundOverrideGlobal:color"
    /// 
    /// RprUsdDomeLightSettingsAPI
    const TfToken rprBackgroundOverrideGlobalColor;
    /// \brief "rpr:backgroundOverrideGlobal:enable"
    /// 
    /// RprUsdDomeLightSettingsAPI
    const TfToken rprBackgroundOverrideGlobalEnable;
    /// \brief "rpr:beautyMotionBlur:enable"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprBeautyMotionBlurEnable;
    /// \brief "rpr:camera:blades"
    /// 
    /// RprUsdCameraSettingsAPI
    const TfToken rprCameraBlades;
    /// \brief "rpr:contour:antialiasing"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourAntialiasing;
    /// \brief "rpr:contour:debug"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourDebug;
    /// \brief "rpr:contour:linewidthMaterialId"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourLinewidthMaterialId;
    /// \brief "rpr:contour:linewidthNormal"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourLinewidthNormal;
    /// \brief "rpr:contour:linewidthPrimId"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourLinewidthPrimId;
    /// \brief "rpr:contour:linewidthUv"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourLinewidthUv;
    /// \brief "rpr:contour:normalThreshold"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourNormalThreshold;
    /// \brief "rpr:contour:useMaterialId"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourUseMaterialId;
    /// \brief "rpr:contour:useNormal"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourUseNormal;
    /// \brief "rpr:contour:usePrimId"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourUsePrimId;
    /// \brief "rpr:contour:useUv"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourUseUv;
    /// \brief "rpr:contour:uvThreshold"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprContourUvThreshold;
    /// \brief "rpr:core:cameraMode"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreCameraMode;
    /// \brief "rpr:core:displayGamma"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreDisplayGamma;
    /// \brief "rpr:core:flipVertical"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreFlipVertical;
    /// \brief "rpr:core:legacyToon"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreLegacyToon;
    /// \brief "rpr:core:renderMode"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreRenderMode;
    /// \brief "rpr:core:renderQuality"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreRenderQuality;
    /// \brief "rpr:core:useGmon"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreUseGmon;
    /// \brief "rpr:core:useOpenCL"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCoreUseOpenCL;
    /// \brief "rpr:cryptomatte:outputMode"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCryptomatteOutputMode;
    /// \brief "rpr:cryptomatte:outputPath"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCryptomatteOutputPath;
    /// \brief "rpr:cryptomatte:previewLayer"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprCryptomattePreviewLayer;
    /// \brief "rpr:export:asSingleFile"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprExportAsSingleFile;
    /// \brief "rpr:export:path"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprExportPath;
    /// \brief "rpr:export:useImageCache"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprExportUseImageCache;
    /// \brief "rpr:gamma:enable"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprGammaEnable;
    /// \brief "rpr:gamma:value"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprGammaValue;
    /// \brief "rprHidden"
    /// 
    /// RPR specific Sdf metadata
    const TfToken rprHidden;
    /// \brief "rpr:hybrid:acceleration_memory_size_mb"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridAcceleration_memory_size_mb;
    /// \brief "rpr:hybrid:denoising"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridDenoising;
    /// \brief "rpr:hybrid:displacement"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridDisplacement;
    /// \brief "rpr:hybrid:mesh_memory_size_mb"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridMesh_memory_size_mb;
    /// \brief "rpr:hybrid:scratch_memory_size_mb"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridScratch_memory_size_mb;
    /// \brief "rpr:hybrid:staging_memory_size_mb"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridStaging_memory_size_mb;
    /// \brief "rpr:hybrid:tonemapping"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridTonemapping;
    /// \brief "rpr:hybrid:upscalingQuality"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprHybridUpscalingQuality;
    /// \brief "rpr:light:intensity:sameWithKarma"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprLightIntensitySameWithKarma;
    /// \brief "rpr:material:assetName"
    /// 
    /// RprUsdMaterialSettingsAPI
    const TfToken rprMaterialAssetName;
    /// \brief "rpr:material:id"
    /// 
    /// RprUsdMaterialSettingsAPI
    const TfToken rprMaterialId;
    /// \brief "rpr:maxSamples"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprMaxSamples;
    /// \brief "rprMaxValue"
    /// 
    /// RPR specific Sdf metadata
    const TfToken rprMaxValue;
    /// \brief "rprMinValue"
    /// 
    /// RPR specific Sdf metadata
    const TfToken rprMinValue;
    /// \brief "rpr:object:visibility:camera"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityCamera;
    /// \brief "rpr:object:visibility:diffuse"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityDiffuse;
    /// \brief "rpr:object:visibility:glossyReflection"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityGlossyReflection;
    /// \brief "rpr:object:visibility:glossyRefraction"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityGlossyRefraction;
    /// \brief "rpr:object:visibility:reflection"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityReflection;
    /// \brief "rpr:object:visibility:refraction"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityRefraction;
    /// \brief "rpr:object:visibility:shadow"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityShadow;
    /// \brief "rpr:object:visibility:transparent"
    /// 
    /// RprUsdLightSettingsAPI
    const TfToken rprObjectVisibilityTransparent;
    /// \brief "rpr:ocio:configPath"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprOcioConfigPath;
    /// \brief "rpr:ocio:renderingColorSpace"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprOcioRenderingColorSpace;
    /// \brief "rpr:quality:filterType"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityFilterType;
    /// \brief "rpr:quality:imageFilterRadius"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityImageFilterRadius;
    /// \brief "rpr:quality:interactive:enableDownscale"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityInteractiveEnableDownscale;
    /// \brief "rpr:quality:interactive:rayDepth"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityInteractiveRayDepth;
    /// \brief "rpr:quality:interactive:resolutionDownscale"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityInteractiveResolutionDownscale;
    /// \brief "rpr:quality:radianceClamping"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRadianceClamping;
    /// \brief "rpr:quality:raycastEpsilon"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRaycastEpsilon;
    /// \brief "rpr:quality:rayDepth"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRayDepth;
    /// \brief "rpr:quality:rayDepthDiffuse"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRayDepthDiffuse;
    /// \brief "rpr:quality:rayDepthGlossy"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRayDepthGlossy;
    /// \brief "rpr:quality:rayDepthGlossyRefraction"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRayDepthGlossyRefraction;
    /// \brief "rpr:quality:rayDepthRefraction"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRayDepthRefraction;
    /// \brief "rpr:quality:rayDepthShadow"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityRayDepthShadow;
    /// \brief "rpr:quality:reservoirSampling"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprQualityReservoirSampling;
    /// \brief "rpr:seedOverride"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprSeedOverride;
    /// \brief "rpr:tonemapping:enable"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprTonemappingEnable;
    /// \brief "rpr:tonemapping:exposureTime"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprTonemappingExposureTime;
    /// \brief "rpr:tonemapping:fstop"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprTonemappingFstop;
    /// \brief "rpr:tonemapping:gamma"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprTonemappingGamma;
    /// \brief "rpr:tonemapping:sensitivity"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprTonemappingSensitivity;
    /// \brief "rpr:uniformSeed"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken rprUniformSeed;
    /// \brief "ScreenSpace"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityReservoirSamplingAttr()
    const TfToken ScreenSpace;
    /// \brief "stageMetersPerUnit"
    /// 
    /// RprUsdRendererSettingsAPI
    const TfToken stageMetersPerUnit;
    /// \brief "SVGF"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridDenoisingAttr()
    const TfToken SVGF;
    /// \brief "Texcoord"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Texcoord;
    /// \brief "Triangle"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprQualityFilterTypeAttr()
    const TfToken Triangle;
    /// \brief "Ultra Performance"
    /// 
    /// Fallback value for RprUsdRendererSettingsAPI::GetRprHybridUpscalingQualityAttr()
    const TfToken Ultra_Performance;
    /// \brief "Ultra Quality"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprHybridUpscalingQualityAttr()
    const TfToken Ultra_Quality;
    /// \brief "Wireframe"
    /// 
    /// Possible value for RprUsdRendererSettingsAPI::GetRprCoreRenderModeAttr()
    const TfToken Wireframe;
    /// \brief "RprCameraSettingsAPI"
    /// 
    /// Schema identifer and family for RprUsdCameraSettingsAPI
    const TfToken RprCameraSettingsAPI;
    /// \brief "RprDomeLightSettingsAPI"
    /// 
    /// Schema identifer and family for RprUsdDomeLightSettingsAPI
    const TfToken RprDomeLightSettingsAPI;
    /// \brief "RprLightSettingsAPI"
    /// 
    /// Schema identifer and family for RprUsdLightSettingsAPI
    const TfToken RprLightSettingsAPI;
    /// \brief "RprMaterialSettingsAPI"
    /// 
    /// Schema identifer and family for RprUsdMaterialSettingsAPI
    const TfToken RprMaterialSettingsAPI;
    /// \brief "RprMeshSettingsAPI"
    /// 
    /// Schema identifer and family for RprUsdMeshSettingsAPI
    const TfToken RprMeshSettingsAPI;
    /// \brief "RprObjectSettingsAPI"
    /// 
    /// Schema identifer and family for RprUsdObjectSettingsAPI
    const TfToken RprObjectSettingsAPI;
    /// \brief "RprRendererSettingsAPI"
    /// 
    /// Schema identifer and family for RprUsdRendererSettingsAPI
    const TfToken RprRendererSettingsAPI;
    /// A vector of all of the tokens listed above.
    const std::vector<TfToken> allTokens;
};

/// \var RprUsdTokens
///
/// A global variable with static, efficient \link TfToken TfTokens\endlink
/// for use in all public USD API.  \sa RprUsdTokensType
extern RPRUSD_API TfStaticData<RprUsdTokensType> RprUsdTokens;

PXR_NAMESPACE_CLOSE_SCOPE

#endif
