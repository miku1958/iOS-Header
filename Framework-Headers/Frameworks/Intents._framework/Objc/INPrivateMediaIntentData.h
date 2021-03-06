//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INAppIdentifier, INSpeakerIDInfo, INWholeHouseAudioMetadata, NSNumber, NSString;

@interface INPrivateMediaIntentData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakerIDInfo *_speakerIDInfo;
    INAppIdentifier *_proxiedThirdPartyAppInfo;
    NSNumber *_isAppAttributionRequired;
    NSNumber *_useDialogMemoryForAttribution;
    NSNumber *_isAppCorrection;
    NSString *_fallbackUsername;
    INWholeHouseAudioMetadata *_wholeHouseAudioMetadata;
    NSNumber *_nlConfidenceScore;
    long long _nlConfidenceLevel;
    NSNumber *_asrConfidenceScore;
    long long _asrConfidenceLevel;
    NSString *_resolvedSharedUserID;
}

@property (readonly, nonatomic) long long asrConfidenceLevel; // @synthesize asrConfidenceLevel=_asrConfidenceLevel;
@property (readonly, copy, nonatomic) NSNumber *asrConfidenceScore; // @synthesize asrConfidenceScore=_asrConfidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fallbackUsername; // @synthesize fallbackUsername=_fallbackUsername;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *isAppAttributionRequired; // @synthesize isAppAttributionRequired=_isAppAttributionRequired;
@property (readonly, copy, nonatomic) NSNumber *isAppCorrection; // @synthesize isAppCorrection=_isAppCorrection;
@property (readonly, nonatomic) long long nlConfidenceLevel; // @synthesize nlConfidenceLevel=_nlConfidenceLevel;
@property (readonly, copy, nonatomic) NSNumber *nlConfidenceScore; // @synthesize nlConfidenceScore=_nlConfidenceScore;
@property (copy, nonatomic) INAppIdentifier *proxiedThirdPartyAppInfo; // @synthesize proxiedThirdPartyAppInfo=_proxiedThirdPartyAppInfo;
@property (copy, nonatomic) NSString *resolvedSharedUserID; // @synthesize resolvedSharedUserID=_resolvedSharedUserID;
@property (readonly, copy, nonatomic) INSpeakerIDInfo *speakerIDInfo; // @synthesize speakerIDInfo=_speakerIDInfo;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *useDialogMemoryForAttribution; // @synthesize useDialogMemoryForAttribution=_useDialogMemoryForAttribution;
@property (readonly, copy, nonatomic) INWholeHouseAudioMetadata *wholeHouseAudioMetadata; // @synthesize wholeHouseAudioMetadata=_wholeHouseAudioMetadata;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeakerIDInfo:(id)arg1 proxiedThirdPartyAppInfo:(id)arg2 isAppAttributionRequired:(id)arg3 useDialogMemoryForAttribution:(id)arg4 isAppCorrection:(id)arg5 fallbackUsername:(id)arg6 wholeHouseAudioMetadata:(id)arg7 nlConfidenceScore:(id)arg8 nlConfidenceLevel:(long long)arg9 asrConfidenceScore:(id)arg10 asrConfidenceLevel:(long long)arg11;
- (id)initWithSpeakerIDInfo:(id)arg1 proxiedThirdPartyAppInfo:(id)arg2 isAppAttributionRequired:(id)arg3 useDialogMemoryForAttribution:(id)arg4 isAppCorrection:(id)arg5 fallbackUsername:(id)arg6 wholeHouseAudioMetadata:(id)arg7 nlConfidenceScore:(id)arg8 nlConfidenceLevel:(long long)arg9 asrConfidenceScore:(id)arg10 asrConfidenceLevel:(long long)arg11 resolvedSharedUserID:(id)arg12;
- (BOOL)isEqual:(id)arg1;

@end

