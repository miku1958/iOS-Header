//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTFinishAudio : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct FinishAudio *_root;
}

@property (readonly, nonatomic) NSArray *features_at_endpoint;
@property (readonly, nonatomic) int packet_count;
@property (readonly, nonatomic) NSArray *server_feature_latency_distribution;
@property (readonly, nonatomic) float total_audio_recorded_seconds;

- (void).cxx_destruct;
- (Offset_4c45a82e)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio *)arg2 verify:(BOOL)arg3;

@end

