//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXAssetLoader/AXAssetPolicy.h>

@class NSString;

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy
{
    NSString *_language;
}

@property (strong, nonatomic) NSString *language; // @synthesize language=_language;

+ (id)characterVoiceAssetPolicyWithLanguage:(id)arg1;
- (void).cxx_destruct;
- (id)assetType;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(BOOL)arg2;
- (id)init;
- (BOOL)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2;

@end

