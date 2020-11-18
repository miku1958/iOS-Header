//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SFService;
@protocol OS_dispatch_queue, TRNearbyDeviceAdvertiserDelegate;

@interface TRNearbyDeviceAdvertiser : NSObject
{
    id<TRNearbyDeviceAdvertiserDelegate> _delegate;
    unsigned long long _state;
    SFService *_service;
    NSObject<OS_dispatch_queue> *_advertiserQ;
    unsigned long long _requestedService;
    NSMapTable *_sessionsTable;
    NSObject<OS_dispatch_queue> *_sessionsTableQ;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *advertiserQ; // @synthesize advertiserQ=_advertiserQ;
@property (weak) id<TRNearbyDeviceAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long requestedService; // @synthesize requestedService=_requestedService;
@property (strong, nonatomic) SFService *service; // @synthesize service=_service;
@property (strong, nonatomic) NSMapTable *sessionsTable; // @synthesize sessionsTable=_sessionsTable;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *sessionsTableQ; // @synthesize sessionsTableQ=_sessionsTableQ;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_handleActivationWithError:(id)arg1;
- (void)_handleEventMessage:(id)arg1;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (void)_handleNewConnectionFromPeerDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRequestMessage:(id)arg1;
- (void)_requestSessionForMessage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;
- (id)init;
- (void)pauseAdvertising;
- (void)resumeAdvertising;
- (void)startAdvertisingWithService:(unsigned long long)arg1;
- (void)stopAdvertising;

@end

