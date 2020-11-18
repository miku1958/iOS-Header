//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSTimerGate, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MSClientSidePauseContext : NSObject
{
    NSString *_UUID;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSXPCConnection *_server;
    MSTimerGate *_gate;
}

@property (strong, nonatomic) MSTimerGate *gate; // @synthesize gate=_gate;
@property (strong, nonatomic) NSXPCConnection *server; // @synthesize server=_server;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;

- (void).cxx_destruct;
- (id)initWithServer:(id)arg1;
- (void)resume;
- (void)timerQueuePing;
- (void)timerQueueTimerFired;

@end

