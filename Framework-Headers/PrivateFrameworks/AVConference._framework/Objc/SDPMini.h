//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SDPMini : NSObject
{
    NSString *_sdpUsername;
    NSMutableDictionary *_audioParameters;
    NSString *origin;
    NSMutableArray *audioPayloads;
    NSMutableArray *secondaryAudioPayloads;
    NSString *sessionIP;
    NSNumber *audioRTPPort;
    NSNumber *audioRTCPPort;
    NSNumber *audioRTPID;
    NSNumber *videoRTPID;
    BOOL allowRTCPFB;
    NSNumber *answerBandwidth;
    NSNumber *maxBandwidth;
    BOOL allowsDynamicMaxBitrate;
    BOOL allowsContentsChangeWithAspectPreservation;
    NSDictionary *featuresListDict;
    NSNumber *aacBlockSize;
    NSNumber *audioUnitModel;
    BOOL allowAudioRecording;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    NSMutableDictionary *_mediaLines;
}

@property (strong, nonatomic) NSNumber *aacBlockSize; // @synthesize aacBlockSize;
@property (nonatomic) BOOL allowAudioRecording; // @synthesize allowAudioRecording;
@property (nonatomic) BOOL allowRTCPFB; // @synthesize allowRTCPFB;
@property (nonatomic) BOOL allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation;
@property (nonatomic) BOOL allowsDynamicMaxBitrate; // @synthesize allowsDynamicMaxBitrate;
@property (strong, nonatomic) NSNumber *answerBandwidth; // @synthesize answerBandwidth;
@property (readonly, nonatomic) NSMutableArray *audioPayloads; // @synthesize audioPayloads;
@property (strong, nonatomic) NSNumber *audioRTCPPort; // @synthesize audioRTCPPort;
@property (strong, nonatomic) NSNumber *audioRTPID; // @synthesize audioRTPID;
@property (strong, nonatomic) NSNumber *audioRTPPort; // @synthesize audioRTPPort;
@property (strong, nonatomic) NSNumber *audioUnitModel; // @synthesize audioUnitModel;
@property (strong, nonatomic) NSDictionary *featuresListDict; // @synthesize featuresListDict;
@property (strong, nonatomic) NSNumber *maxBandwidth; // @synthesize maxBandwidth;
@property (strong, nonatomic) NSString *origin; // @synthesize origin;
@property (readonly, nonatomic) NSMutableArray *secondaryAudioPayloads; // @synthesize secondaryAudioPayloads;
@property (strong, nonatomic) NSString *sessionIP; // @synthesize sessionIP;

+ (BOOL)setPayload:(int)arg1 mediaLine:(id)arg2;
- (id)SDPUsername;
- (void)addMediaLine:(id)arg1 mediaType:(int)arg2;
- (id)composeAudioFMTPForPayload:(id)arg1;
- (id)composeAudioString;
- (id)composeBandwidthString;
- (id)composeFLSString;
- (id)composeSessionString;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;
- (void)dealloc;
- (BOOL)getBasebandCodecType:(id *)arg1 sampleRate:(id *)arg2;
- (id)getMediaLineForType:(int)arg1;
- (void)getNegotiatedResolutionForPayload:(int)arg1 forInterface:(int)arg2 withRule:(id)arg3 direction:(int)arg4 result:(struct imageTag *)arg5 remoteSupportsHD:(BOOL)arg6 screenSharing:(BOOL)arg7;
- (BOOL)getUseSbr:(BOOL *)arg1 blockSize:(int *)arg2 forAACFormat:(int)arg3;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)mediaTypeToString:(int)arg1;
- (void)parseAudioFormatAttribute:(id)arg1;
- (void)parseAudioMediaAttributes:(id)arg1;
- (void)parseBandwidth:(id)arg1;
- (id)parseIP:(id)arg1;
- (void)parseMediaLine:(id)arg1;
- (id)parseRTCPPort:(id)arg1;
- (id)parseRTPID:(id)arg1;
- (void)parseSDPFromString:(id)arg1;
- (void)parseSessionAttributes:(id)arg1;
- (int)rulesFramerate:(int)arg1;
- (void)rulesImageSizeForExternalPayload:(int)arg1 pWidth:(int *)arg2 pHeight:(int *)arg3;
- (void)setBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (void)setUseSbr:(BOOL)arg1 blockSize:(int)arg2 forAACFormat:(int)arg3;
- (BOOL)setVideoPayloads:(int *)arg1 count:(int)arg2;
- (void)setVideoRTCPFB:(BOOL)arg1 useNACK:(BOOL)arg2;
- (id)toStringWithVideoEnabled:(BOOL)arg1;

@end

