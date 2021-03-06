//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTAudioAnalytics, FTLatnnMitigatorResult, FTRecognitionResult, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTFinalSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct FinalSpeechRecognitionResponse *_root;
}

@property (readonly, nonatomic) FTAudioAnalytics *audio_analytics;
@property (readonly, nonatomic) BOOL has_result;
@property (readonly, nonatomic) long long lang_profile_recreate_codes;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (readonly, nonatomic) FTRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) long long watermark_detection;
@property (readonly, nonatomic) double watermark_peak_average;

- (void).cxx_destruct;
- (Offset_53990046)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalSpeechRecognitionResponse *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalSpeechRecognitionResponse *)arg2 verify:(BOOL)arg3;

@end

