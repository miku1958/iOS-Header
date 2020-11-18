//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/VSAssetBase.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding>
{
    BOOL _isInstalled;
    BOOL _isBuiltInVoice;
    BOOL _isVoiceReadyToUse;
    NSString *_name;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    long long _type;
}

@property (nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property (nonatomic) long long gender; // @synthesize gender=_gender;
@property (nonatomic) BOOL isBuiltInVoice; // @synthesize isBuiltInVoice=_isBuiltInVoice;
@property (nonatomic) BOOL isInstalled; // @synthesize isInstalled=_isInstalled;
@property (nonatomic) BOOL isVoiceReadyToUse; // @synthesize isVoiceReadyToUse=_isVoiceReadyToUse;
@property (copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)compatibilityVersionFromMobileAssetAttributes:(id)arg1;
+ (long long)footprintFromString:(id)arg1;
+ (id)footprintStringFromFootprint:(long long)arg1;
+ (long long)genderFromString:(id)arg1;
+ (id)genderStringFromGender:(long long)arg1;
+ (id)languagesFromMobileAssetAttributes:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (long long)typeFromString:(id)arg1;
+ (id)typeStringFromType:(long long)arg1;
- (void).cxx_destruct;
- (void)amendNameVersionAndSizeWithMobileAssetAttributes:(id)arg1;
- (id)description;
- (id)descriptiveKey;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromMobileAssetAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)nameKey;
- (id)voiceKey;

@end
