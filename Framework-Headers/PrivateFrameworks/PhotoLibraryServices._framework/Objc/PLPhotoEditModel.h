//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface PLPhotoEditModel : NSObject <NSCopying>
{
    NSString *_effectFilterName;
    long long _effectFilterVersion;
    BOOL _smartToneEnabled;
    double _smartToneLevel;
    double _autoSmartToneLevel;
    NSString *_autoSmartToneIdentifier;
    double _brightnessLevelOffset;
    double _contrastLevelOffset;
    double _exposureLevelOffset;
    double _shadowsLevelOffset;
    double _blackPointLevelOffset;
    double _highlightsLevelOffset;
    BOOL _smartColorEnabled;
    double _autoSmartColorLevel;
    NSString *_autoSmartColorIdentifier;
    double _smartColorLevel;
    double _colorContrastLevelOffset;
    double _colorVibrancyLevelOffset;
    double _colorCastLevelOffset;
    BOOL _smartBWEnabled;
    double _smartBWLevel;
    double _bwStrengthLevelOffset;
    double _bwNeutralGammaLevelOffset;
    double _bwToneLevelOffset;
    double _bwHueLevelOffset;
    double _bwGrainLevelOffset;
    BOOL _whiteBalanceEnabled;
    double _whiteBalanceFaceI;
    double _whiteBalanceFaceQ;
    double _whiteBalanceFaceStrength;
    double _whiteBalanceFaceWarmth;
    double _straightenAngle;
    struct CGRect _normalizedCropRect;
    long long _cropConstraintWidth;
    long long _cropConstraintHeight;
    long long _appliedOrientation;
    BOOL _autoCropped;
    NSDictionary *_smartToneStatistics;
    NSDictionary *_smartColorStatistics;
    NSDictionary *_smartBWStatistics;
    NSDictionary *_autoWhiteBalanceSettings;
    NSString *_autoWhiteBalanceIdentifier;
    NSArray *_redEyeCorrections;
    NSArray *_autoRedEyeCorrections;
    NSArray *_legacyAutoEnhanceFilters;
    BOOL _legacyAutoEnhanceIsOn;
}

@property (readonly, nonatomic) long long appliedOrientation; // @synthesize appliedOrientation=_appliedOrientation;
@property (readonly, nonatomic, getter=isAutoCropped) BOOL autoCropped; // @synthesize autoCropped=_autoCropped;
@property (readonly, copy, nonatomic) NSArray *autoRedEyeCorrections; // @synthesize autoRedEyeCorrections=_autoRedEyeCorrections;
@property (readonly, copy, nonatomic) NSString *autoSmartColorIdentifier; // @synthesize autoSmartColorIdentifier=_autoSmartColorIdentifier;
@property (readonly, nonatomic) double autoSmartColorLevel; // @synthesize autoSmartColorLevel=_autoSmartColorLevel;
@property (readonly, copy, nonatomic) NSString *autoSmartToneIdentifier; // @synthesize autoSmartToneIdentifier=_autoSmartToneIdentifier;
@property (readonly, nonatomic) double autoSmartToneLevel; // @synthesize autoSmartToneLevel=_autoSmartToneLevel;
@property (readonly, copy, nonatomic) NSString *autoWhiteBalanceIdentifier; // @synthesize autoWhiteBalanceIdentifier=_autoWhiteBalanceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *autoWhiteBalanceSettings; // @synthesize autoWhiteBalanceSettings=_autoWhiteBalanceSettings;
@property (readonly, nonatomic) double blackPointLevelOffset; // @synthesize blackPointLevelOffset=_blackPointLevelOffset;
@property (readonly, nonatomic) double brightnessLevelOffset; // @synthesize brightnessLevelOffset=_brightnessLevelOffset;
@property (readonly, nonatomic) double bwGrainLevelOffset; // @synthesize bwGrainLevelOffset=_bwGrainLevelOffset;
@property (readonly, nonatomic) double bwHueLevelOffset; // @synthesize bwHueLevelOffset=_bwHueLevelOffset;
@property (readonly, nonatomic) double bwNeutralGammaLevelOffset; // @synthesize bwNeutralGammaLevelOffset=_bwNeutralGammaLevelOffset;
@property (readonly, nonatomic) double bwStrengthLevelOffset; // @synthesize bwStrengthLevelOffset=_bwStrengthLevelOffset;
@property (readonly, nonatomic) double bwToneLevelOffset; // @synthesize bwToneLevelOffset=_bwToneLevelOffset;
@property (readonly, nonatomic) double colorCastLevelOffset; // @synthesize colorCastLevelOffset=_colorCastLevelOffset;
@property (readonly, nonatomic) double colorContrastLevelOffset; // @synthesize colorContrastLevelOffset=_colorContrastLevelOffset;
@property (readonly, nonatomic) double colorVibrancyLevelOffset; // @synthesize colorVibrancyLevelOffset=_colorVibrancyLevelOffset;
@property (readonly, nonatomic) double contrastLevelOffset; // @synthesize contrastLevelOffset=_contrastLevelOffset;
@property (readonly, nonatomic, getter=isCropConstrained) BOOL cropConstrained;
@property (readonly, nonatomic) long long cropConstraintHeight; // @synthesize cropConstraintHeight=_cropConstraintHeight;
@property (readonly, nonatomic) long long cropConstraintWidth; // @synthesize cropConstraintWidth=_cropConstraintWidth;
@property (readonly, copy, nonatomic) NSString *effectFilterName; // @synthesize effectFilterName=_effectFilterName;
@property (readonly, nonatomic) long long effectFilterVersion; // @synthesize effectFilterVersion=_effectFilterVersion;
@property (readonly, nonatomic) double exposureLevelOffset; // @synthesize exposureLevelOffset=_exposureLevelOffset;
@property (readonly, nonatomic) BOOL hasAnyAutoEnhancement;
@property (readonly, nonatomic) BOOL hasIdentityCrop;
@property (readonly, nonatomic) BOOL hasRedEyeCorrections;
@property (readonly, nonatomic) double highlightsLevelOffset; // @synthesize highlightsLevelOffset=_highlightsLevelOffset;
@property (readonly, copy, nonatomic) NSArray *legacyAutoEnhanceFilters; // @synthesize legacyAutoEnhanceFilters=_legacyAutoEnhanceFilters;
@property (readonly, nonatomic) BOOL legacyAutoEnhanceIsOn; // @synthesize legacyAutoEnhanceIsOn=_legacyAutoEnhanceIsOn;
@property (readonly, nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
@property (readonly, copy, nonatomic) NSArray *redEyeCorrections; // @synthesize redEyeCorrections=_redEyeCorrections;
@property (readonly, nonatomic) double shadowsLevelOffset; // @synthesize shadowsLevelOffset=_shadowsLevelOffset;
@property (readonly, nonatomic, getter=isSmartBWEnabled) BOOL smartBWEnabled; // @synthesize smartBWEnabled=_smartBWEnabled;
@property (readonly, nonatomic) double smartBWLevel; // @synthesize smartBWLevel=_smartBWLevel;
@property (readonly, copy, nonatomic) NSDictionary *smartBWStatistics; // @synthesize smartBWStatistics=_smartBWStatistics;
@property (readonly, nonatomic, getter=isSmartColorEnabled) BOOL smartColorEnabled; // @synthesize smartColorEnabled=_smartColorEnabled;
@property (readonly, nonatomic) double smartColorLevel; // @synthesize smartColorLevel=_smartColorLevel;
@property (readonly, copy, nonatomic) NSDictionary *smartColorStatistics; // @synthesize smartColorStatistics=_smartColorStatistics;
@property (readonly, nonatomic, getter=isSmartToneEnabled) BOOL smartToneEnabled; // @synthesize smartToneEnabled=_smartToneEnabled;
@property (readonly, nonatomic) double smartToneLevel; // @synthesize smartToneLevel=_smartToneLevel;
@property (readonly, copy, nonatomic) NSDictionary *smartToneStatistics; // @synthesize smartToneStatistics=_smartToneStatistics;
@property (readonly, nonatomic) double straightenAngle; // @synthesize straightenAngle=_straightenAngle;
@property (readonly, nonatomic, getter=isWhiteBalanceEnabled) BOOL whiteBalanceEnabled; // @synthesize whiteBalanceEnabled=_whiteBalanceEnabled;
@property (readonly, nonatomic) double whiteBalanceFaceI; // @synthesize whiteBalanceFaceI=_whiteBalanceFaceI;
@property (readonly, nonatomic) double whiteBalanceFaceQ; // @synthesize whiteBalanceFaceQ=_whiteBalanceFaceQ;
@property (readonly, nonatomic) double whiteBalanceFaceStrength; // @synthesize whiteBalanceFaceStrength=_whiteBalanceFaceStrength;
@property (readonly, nonatomic) double whiteBalanceFaceWarmth; // @synthesize whiteBalanceFaceWarmth=_whiteBalanceFaceWarmth;

+ (id)_identityModel;
+ (void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(CDStruct_183601bc **)arg3;
+ (void)_loadSubfilterReferenceLevelsIfNeeded;
+ (double)_referenceValueOfType:(long long)arg1 fromLevels:(CDStruct_39925896)arg2;
+ (long long)identityCropConstraint;
+ (struct CGRect)identityNormalizedCropRect;
+ (long long)identityOrientation;
+ (double)referenceBWGrainLevelOfType:(long long)arg1;
+ (double)referenceBWHueLevelOfType:(long long)arg1;
+ (double)referenceBWNeutralGammaLevelOfType:(long long)arg1;
+ (double)referenceBWStrengthLevelOfType:(long long)arg1;
+ (double)referenceBWToneLevelOfType:(long long)arg1;
+ (double)referenceBlackPointLevelOfType:(long long)arg1;
+ (double)referenceBrightnessLevelOfType:(long long)arg1;
+ (double)referenceColorCastLevelOfType:(long long)arg1;
+ (double)referenceColorContrastLevelOfType:(long long)arg1;
+ (double)referenceColorVibrancyLevelOfType:(long long)arg1;
+ (double)referenceContrastLevelOfType:(long long)arg1;
+ (double)referenceExposureLevelOfType:(long long)arg1;
+ (double)referenceHighlightsLevelOfType:(long long)arg1;
+ (double)referenceShadowsLevelOfType:(long long)arg1;
+ (double)referenceSmartBWLevelOfType:(long long)arg1;
+ (double)referenceSmartColorLevelOfType:(long long)arg1;
+ (double)referenceSmartToneLevelOfType:(long long)arg1;
+ (double)referenceStraightenAngleOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceILevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceQLevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceStrengthLevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceWarmthLevelOfType:(long long)arg1;
- (void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(double)arg3;
- (id)_debugDictionaryRepresentation;
- (BOOL)_shouldEarlyExitComparisonToModel:(id)arg1 returnValue:(BOOL *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isCropConstraintEqualToPhotoEditModel:(id)arg1;
- (BOOL)isEffectFilterEqualToPhotoEditModel:(id)arg1;
- (BOOL)isEqualToPhotoEditModel:(id)arg1;
- (BOOL)isGeometryEqualToPhotoEditModel:(id)arg1;
- (BOOL)isGeometryIdentity;
- (BOOL)isIdentityModel;
- (BOOL)isRedEyeCorrectionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartBWPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartColorPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartTonePrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1;
- (id)mutableCopy;
- (id)pl_aggregateKeysForPreviousPhotoEditModel:(id)arg1;
- (id)pl_aggregateNameForEffectFilter;
- (struct CGSize)pl_dataCropConstraintSizeForImageGeometry:(id)arg1;
- (struct CGRect)pl_dataCropRectForImageGeometry:(id)arg1 straightenAngle:(double)arg2;
- (BOOL)pl_isCropConstraintEnabled;
- (BOOL)pl_isCropEnabled;

@end

