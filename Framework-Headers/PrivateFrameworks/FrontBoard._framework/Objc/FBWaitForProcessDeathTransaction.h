//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBProcessManagerObserver-Protocol.h>

@class BSWatchdog, FBProcess, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver>
{
    FBProcess *_process;
    double _timeout;
    BSWatchdog *_watchdog;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) FBProcess *process; // @synthesize process=_process;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void).cxx_destruct;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)initWithProcess:(id)arg1;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;

@end

