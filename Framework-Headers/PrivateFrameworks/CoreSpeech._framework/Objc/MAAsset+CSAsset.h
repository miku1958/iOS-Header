//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileAsset/MAAsset.h>

@interface MAAsset (CSAsset)
- (id)_compatibilityVersion;
- (id)_footprint;
- (id)_version;
- (BOOL)canBePurged;
- (id)getCSAssetOfType:(unsigned long long)arg1;
- (BOOL)isCSAssetInstalled;
- (BOOL)isDownloading;
- (BOOL)isLatestCompareTo:(id)arg1;
- (BOOL)isPremium;
- (id)path;
@end
