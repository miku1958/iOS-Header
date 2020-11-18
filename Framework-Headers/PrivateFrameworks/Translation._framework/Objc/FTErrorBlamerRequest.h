//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTStartSpeechRequest, FTUserAcousticProfile, FTUserLanguageProfile, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTErrorBlamerRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ErrorBlamerRequest *_root;
}

@property (readonly, nonatomic) NSArray *audio_packets;
@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) NSString *ref_transcript;
@property (readonly, nonatomic) NSString *right_context;
@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (readonly, nonatomic) FTUserLanguageProfile *user_language_profile;

- (void).cxx_destruct;
- (Offset_9fa31b4a)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorBlamerRequest *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorBlamerRequest *)arg2 verify:(BOOL)arg3;

@end
