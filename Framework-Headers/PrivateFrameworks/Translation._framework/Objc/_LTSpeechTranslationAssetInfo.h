//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSArray, NSDictionary, NSURL, _LTLocalePair, _LTOfflineAssetManager;

__attribute__((visibility("hidden")))
@interface _LTSpeechTranslationAssetInfo : NSObject
{
    _LTOfflineAssetManager *_assetManager;
    _LTLocalePair *_localePair;
    NSDictionary *_pairDictionary;
    MAAsset *_sourceASRModel;
    MAAsset *_targetASRModel;
    NSArray *_allAssets;
    NSArray *_mtAssets;
    NSArray *_missingAssets;
    NSArray *_missingMTAssets;
    BOOL _needsUpdate;
    NSURL *_modelURL;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_createSymlinkDirectoryForAssets:(id)arg1;
- (id)_getTranslationConfig;
- (id)_languagePairDirectory;
- (unsigned long long)_mtModelOfflineState;
- (BOOL)_validateSymlinksForAssets:(id)arg1;
- (id)availabilityInfo;
- (void)createSymlinkDirectoryForMTAssets;
- (id)description;
- (void)downloadAssetsUserInitiated:(BOOL)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithInstalledAssets:(id)arg1 catalogAssets:(id)arg2 localePair:(id)arg3 configInfo:(id)arg4 assetManager:(id)arg5;
- (BOOL)isCompleteBidirectionalModel;
- (BOOL)isCompletePasshtroughModel;
- (void)purgeAssetUserInitiated:(BOOL)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)referenceAssets:(id)arg1 catalogAssets:(id)arg2;
- (id)speechModelURLForLocale:(id)arg1;
- (id)speechModelVersionForLocale:(id)arg1;
- (id)translationModelURL;
- (BOOL)updateAvailableInAssets:(id)arg1;

@end
