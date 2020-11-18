//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDAccessory, NSMutableArray, NSString;

@interface HMDCameraStreamMetrics : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _streamStarted;
    BOOL _isLocal;
    NSString *_sessionID;
    HMDAccessory *_accessory;
    double _timeStreamStarted;
    NSMutableArray *_resolutionTypes;
}

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property (readonly, nonatomic) NSMutableArray *resolutionTypes; // @synthesize resolutionTypes=_resolutionTypes;
@property (readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic, getter=isStreamStarted) BOOL streamStarted; // @synthesize streamStarted=_streamStarted;
@property (readonly) Class superclass;
@property (nonatomic) double timeStreamStarted; // @synthesize timeStreamStarted=_timeStreamStarted;

+ (id)cameraStreamMetricWithID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3;
+ (void)initialize;
+ (id)uuid;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3;
- (id)metricForAWD;
- (void)negotiationComplete:(id)arg1;
- (void)reportError:(id)arg1;
- (double)startDelay;
- (void)streamStarted;
- (void)streamStopped;

@end

