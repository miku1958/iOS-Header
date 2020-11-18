//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDRemoteMessage, HMFTimer, NSString, NSUUID, _HMDLegacyWatchSession;

@interface _HMDLegacyWatchSessionTransaction : NSObject <HMFTimerDelegate>
{
    BOOL _complete;
    NSUUID *_identifier;
    _HMDLegacyWatchSession *_session;
    HMDRemoteMessage *_message;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _responseHandler;
    HMFTimer *_timer;
}

@property (nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) HMDRemoteMessage *message; // @synthesize message=_message;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (readonly, weak, nonatomic) _HMDLegacyWatchSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessage:(id)arg1 session:(id)arg2;
- (void)receiveResponse:(id)arg1;
- (id)requestMessageWithError:(id *)arg1;
- (void)start;
- (void)stopWithError:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
