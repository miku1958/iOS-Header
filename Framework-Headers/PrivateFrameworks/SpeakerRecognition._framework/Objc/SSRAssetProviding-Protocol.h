//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class CSAsset, NSArray, NSString;

@protocol SSRAssetProviding <NSObject>
- (unsigned long long)getAssetProviderType;
- (CSAsset *)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(NSString *)arg2;

@optional
- (NSArray *)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(NSString *)arg2;
@end

