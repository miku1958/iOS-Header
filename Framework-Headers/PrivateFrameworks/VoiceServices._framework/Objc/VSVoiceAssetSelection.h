//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSString, VSVoiceAsset;

@interface VSVoiceAssetSelection : NSObject
{
    VSVoiceAsset *_voiceData;
    MAAsset *_asset;
    NSString *_builtInVoicePath;
    NSString *_voicePath;
}

@property (strong) MAAsset *asset; // @synthesize asset=_asset;
@property (strong) NSString *builtInVoicePath; // @synthesize builtInVoicePath=_builtInVoicePath;
@property (strong) VSVoiceAsset *voiceData; // @synthesize voiceData=_voiceData;
@property (strong, nonatomic) NSString *voicePath; // @synthesize voicePath=_voicePath;

- (void).cxx_destruct;
- (id)descriptiveKey;
- (BOOL)isDownloading;
- (BOOL)isInstalled;
- (id)key;
- (unsigned long long)size;

@end
