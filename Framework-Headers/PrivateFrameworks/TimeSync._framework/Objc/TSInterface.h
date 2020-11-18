//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TimeSync/TSClockClient-Protocol.h>

@class NSString, TSClock;
@protocol OS_dispatch_queue;

@interface TSInterface : NSObject <TSClockClient>
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    CDUnknownFunctionPointerType _lockStateCallback;
    void *_lockStateRefcon;
    CDUnknownFunctionPointerType _masterChangeCallback;
    void *_masterChangeRefcon;
    CDUnknownFunctionPointerType _gptpGrandmasterCallback;
    void *_gptpGrandmasterRefcon;
    TSClock *_clock;
}

@property (strong, nonatomic) TSClock *clock; // @synthesize clock=_clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (void)setLockStateNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setMasterChangeNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setgPTPGrandmasterNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;

@end

