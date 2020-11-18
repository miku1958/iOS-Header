//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTAudioPacket, FTFinishAudio, FTStartLanguageDetectionRequest, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTLanguageDetectionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LanguageDetectionStreamingRequest *_root;
}

@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property (readonly, nonatomic) long long content_type;

- (void).cxx_destruct;
- (Offset_f9a9e10b)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingRequest *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingRequest *)arg2 verify:(BOOL)arg3;

@end
