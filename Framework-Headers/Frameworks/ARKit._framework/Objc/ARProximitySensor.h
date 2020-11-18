//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>
#import <ARKit/PRRangingSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, PRRangingSession;
@protocol ARSensorDelegate;

@interface ARProximitySensor : NSObject <PRRangingSessionDelegate, ARSensor>
{
    PRRangingSession *_rangingSession;
    NSMutableSet *_peers;
    NSMutableDictionary *_vioSessionID;
    NSMutableSet *_vioSessions;
    struct os_unfair_lock_s _lockState;
    BOOL _running;
    id<ARSensorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (getter=isRunning) BOOL running; // @synthesize running=_running;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestInitialCollaborationData;
- (void)dealloc;
- (id)init;
- (unsigned long long)providedDataTypes;
- (void)pushCollaborationData:(id)arg1;
- (void)start;
- (void)stop;

@end
