//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextToSpeech/TTSAssetBase.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding>
{
    NSArray *_languages;
    NSArray *_resourceList;
    NSURL *_searchPathURL;
    NSDictionary *_voiceConfig;
}

@property (copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property (copy, nonatomic) NSArray *resourceList; // @synthesize resourceList=_resourceList;
@property (copy, nonatomic) NSURL *searchPathURL; // @synthesize searchPathURL=_searchPathURL;
@property (copy, nonatomic) NSDictionary *voiceConfig; // @synthesize voiceConfig=_voiceConfig;

+ (id)legacyPlatforms;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (id)defaultVoice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)syncWithConfigFile:(id)arg1 voiceType:(long long)arg2;

@end

