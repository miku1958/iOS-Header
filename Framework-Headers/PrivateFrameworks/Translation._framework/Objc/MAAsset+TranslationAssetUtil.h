//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileAsset/MAAsset.h>

@interface MAAsset (TranslationAssetUtil)
- (long long)assetVersion;
- (BOOL)canBePurged;
- (long long)compareAssetVersionReversed:(id)arg1;
- (long long)formatVersion;
- (id)identifier;
- (BOOL)isANEModel;
- (BOOL)isASRModel;
- (BOOL)isCompatibleWithThisDevice;
- (BOOL)isConfig;
- (BOOL)isCurrentlyAvailable;
- (BOOL)isDownloading;
- (BOOL)isInstalled;
- (BOOL)isMTModel;
- (BOOL)isNewerCompatibleVersionThan:(id)arg1;
- (BOOL)isNewerVersionThan:(id)arg1;
- (BOOL)isPhrasebook;
- (id)localeIdentifiers;
- (BOOL)matchesAsset:(id)arg1;
- (long long)requiredCapabilityIdentifier;
- (BOOL)transcribesLocale:(id)arg1;
- (BOOL)translatesLanguagePair:(id)arg1;
@end

