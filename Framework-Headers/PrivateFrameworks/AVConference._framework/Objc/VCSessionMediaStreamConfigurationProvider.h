//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCSessionMediaStreamConfigurationProvider : NSObject
{
    NSMutableArray *_allocatedStreamIDs;
    NSMutableArray *_audioStreamConfigurations;
    NSMutableArray *_videoStreamConfigurations;
    long long _highestEncodingResolution;
    BOOL _isEncodingSqaures;
}

@property (readonly, nonatomic) NSArray *audioStreamConfigurations; // @synthesize audioStreamConfigurations=_audioStreamConfigurations;
@property (readonly, nonatomic) long long highestEncodingResolution; // @synthesize highestEncodingResolution=_highestEncodingResolution;
@property (readonly, nonatomic) BOOL isEncodingSqaures; // @synthesize isEncodingSqaures=_isEncodingSqaures;
@property (readonly, nonatomic) NSArray *videoStreamConfigurations; // @synthesize videoStreamConfigurations=_videoStreamConfigurations;

+ (void)computeMaxNetworkBitrate:(unsigned int *)arg1 maxMediaBitrate:(unsigned int *)arg2 maxPacketsPerSecond:(float *)arg3 audioStreamIndex:(unsigned int)arg4;
+ (BOOL)isAudioStreamOnDemand:(struct _VCMediaStreamConfigurationProviderAudio *)arg1;
+ (BOOL)isVideoStreamOnDemand:(struct _VCMediaStreamConfigurationProviderVideo *)arg1;
- (id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg1 supportedAudioRules:(id)arg2;
- (void)dealloc;
- (unsigned short)generateStreamID;
- (id)init;
- (BOOL)initializeAudioStreamWithIndex:(unsigned int)arg1 supportedAudioRules:(id)arg2;
- (BOOL)initializeAudioStreams;
- (BOOL)initializeStreams;
- (BOOL)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1 streamIndex:(unsigned int)arg2;
- (BOOL)initializeVideoStreamWithDefaults;
- (BOOL)initializeVideoStreams;
- (int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1;

@end

