//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PHAsset, PHAssetExportRequestOptions;

@interface PUActivityItemSourceConfiguration : NSObject
{
    BOOL _requiresAssetExport;
    CDStruct_915a387c _sharingPreferences;
    unsigned long long _maxFileSizeLimit;
    long long _outputType;
    long long _assetExportKind;
    PHAssetExportRequestOptions *_assetExportRequestOptions;
    PHAsset *_asset;
    NSDictionary *_sharingVariants;
    NSString *_activityType;
}

@property (copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property (strong, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) long long assetExportKind; // @synthesize assetExportKind=_assetExportKind;
@property (readonly, nonatomic) PHAssetExportRequestOptions *assetExportRequestOptions; // @synthesize assetExportRequestOptions=_assetExportRequestOptions;
@property (readonly, nonatomic) unsigned long long maxFileSizeLimit; // @synthesize maxFileSizeLimit=_maxFileSizeLimit;
@property (readonly, nonatomic) long long outputType; // @synthesize outputType=_outputType;
@property (readonly, nonatomic) BOOL requiresAssetExport; // @synthesize requiresAssetExport=_requiresAssetExport;
@property (nonatomic) CDStruct_df7f102b sharingPreferences; // @synthesize sharingPreferences=_sharingPreferences;
@property (copy, nonatomic) NSDictionary *sharingVariants; // @synthesize sharingVariants=_sharingVariants;

+ (id)_activitiesThatDontRequireAssetExport;
+ (id)_activitiesThatDontSupportMomentShareLinks;
+ (id)_activitiesThatOnlySupportMomentShareLinks;
+ (id)_activitiesThatSupportAssetBundles;
+ (id)_activitiesThatSupportHEIFHEVC;
+ (id)_activitiesThatSupportLivePhotoBundles;
+ (id)_photosActionSheetActivities;
+ (id)_photosInternalActivities;
+ (id)_systemActivitiesThatDontSupportMomentShareLinks;
+ (id)descriptionForAssetExportKind:(long long)arg1;
+ (id)descriptionForOutputType:(long long)arg1;
+ (BOOL)isAssetBundleSupportedByActivityType:(id)arg1;
+ (BOOL)isIndividualItemPreparationSupportedByActivityType:(id)arg1;
+ (BOOL)isLivePhotoBundleSupportedByActivityType:(id)arg1;
+ (BOOL)isMomentShareLinkSupportedByActivityType:(id)arg1;
+ (unsigned long long)maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2;
+ (BOOL)shouldExcludeAlternateVariantForActivityType:(id)arg1;
+ (BOOL)shouldProvideAlternateVariantForActivityType:(id)arg1 forAsset:(id)arg2 withAvailableSharingVariants:(id)arg3;
+ (BOOL)shouldProvideCompatibleFormatForActivityType:(id)arg1 andAvailableSharingVariants:(id)arg2;
+ (BOOL)supportsAssetLocalIdentifierForActivityType:(id)arg1;
- (void).cxx_destruct;
- (void)_configure;
- (id)_customAccessibilityLabel;
- (BOOL)_requiresAssetExportForAsset:(id)arg1 forActivityType:(id)arg2;
- (BOOL)_requiresAssetsLibraryURLForAsset:(id)arg1 forActivityType:(id)arg2;
- (BOOL)_shouldFlattenSlomoVideoForActivityType:(id)arg1;
- (id)_videoExportFileTypeForActivityType:(id)arg1;
- (id)_videoExportPresetForActivityType:(id)arg1;
- (BOOL)_wantsAssetBundleForActivityType:(id)arg1;
- (BOOL)_wantsLivePhotoBundleForActivityType:(id)arg1;
- (id)initWithAsset:(id)arg1 availableSharingVariants:(id)arg2 activityType:(id)arg3 preferences:(CDStruct_df7f102b)arg4;

@end

