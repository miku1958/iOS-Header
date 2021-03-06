//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartSpeechRequest *_root;
}

@property (readonly, nonatomic) NSString *application_name;
@property (readonly, nonatomic) NSString *client_endpointer_model_version;
@property (readonly, nonatomic) long long codec;
@property (readonly, nonatomic) NSString *device_os;
@property (readonly, nonatomic) NSString *device_type;
@property (readonly, nonatomic) BOOL disable_auto_punctuation;
@property (readonly, nonatomic) BOOL enable_endpoint_candidate;
@property (readonly, nonatomic) BOOL enable_hybrid_endpoint;
@property (readonly, nonatomic) BOOL enable_server_side_endpoint;
@property (readonly, nonatomic) BOOL enable_utterance_detection;
@property (readonly, nonatomic) long long end_point_mode;
@property (readonly, nonatomic) NSString *experiment_id;
@property (readonly, nonatomic) NSString *fork_id;
@property (readonly, nonatomic) unsigned int initial_recognition_candidate_id;
@property (readonly, nonatomic) NSString *input_origin;
@property (readonly, nonatomic) BOOL is_far_field;
@property (readonly, nonatomic) BOOL keyboard_dictation;
@property (readonly, nonatomic) NSString *keyboard_identifier;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *metadata;
@property (readonly, nonatomic) NSString *mic_type;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) long long speech_request_source;
@property (readonly, nonatomic) int start_audio_bookmark;
@property (readonly, nonatomic) unsigned long long start_endpointing_at;
@property (readonly, nonatomic) unsigned long long start_recognition_at;
@property (readonly, nonatomic) BOOL store_audio;
@property (readonly, nonatomic) BOOL stream_results;
@property (readonly, nonatomic) BOOL stream_unstable_results;
@property (readonly, nonatomic) BOOL tandem_mode;
@property (readonly, nonatomic) NSString *task_name;
@property (readonly, nonatomic) NSString *udm_host;
@property (readonly, nonatomic) int udm_port;

- (void).cxx_destruct;
- (Offset_b7f57b05)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechRequest *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechRequest *)arg2 verify:(BOOL)arg3;

@end

