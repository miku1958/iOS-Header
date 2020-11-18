//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoConferenceDefaults : NSObject
{
    int _forceCaptureWidth;
    int _forceCaptureHeight;
    int _forceEncodeWidth;
    int _forceEncodeHeight;
    int _forceFramerate;
    int _forceBitrate;
    int _forceVideoPayload;
    int _forceRecvVideoPayload;
}

@property (readonly) BOOL audioRecordingEnabled;
@property (readonly) int bundleAudio;
@property (readonly) BOOL cannedReplayEnabled;
@property (readonly) BOOL disableVAD;
@property (readonly) int enable2vuyCapture;
@property (readonly) BOOL enableBitstreamCapture;
@property (readonly) BOOL enableRecvBitstreamDump;
@property (readonly) BOOL enableTxBitstreamDump;
@property (readonly) int enableTxSourceYuvDump;
@property (readonly) BOOL enableVPBLogging;
@property (readonly) int forceBitrate;
@property (readonly) int forceCaptureHeight;
@property (readonly) int forceCaptureWidth;
@property (readonly) int forceEncodeHeight;
@property (readonly) int forceEncodeWidth;
@property (readonly) int forceFramerate;
@property (readonly) BOOL forceHWI;
@property (readonly) BOOL forceIPv6;
@property (readonly) int forceRecvVideoPayload;
@property (readonly) int forceVideoPayload;
@property (readonly) int max2GRate;

+ (id)VideoConferenceDefaultsSingleton;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
