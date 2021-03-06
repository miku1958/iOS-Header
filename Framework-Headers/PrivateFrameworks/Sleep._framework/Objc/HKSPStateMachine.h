//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/HKSPStateMachineDelegate-Protocol.h>
#import <Sleep/HKSPStateMachineEventHandler-Protocol.h>
#import <Sleep/HKSPStateMachineInfoProvider-Protocol.h>

@class HKSPStateMachineState, NSString;
@protocol HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, NAScheduler;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler>
{
    BOOL _initialized;
    HKSPStateMachineState *_currentState;
    id<HKSPStateMachineDelegate> _delegate;
    id<HKSPStateMachineInfoProvider> _infoProvider;
}

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) HKSPStateMachineState *currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HKSPStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<HKSPStateMachineInfoProvider> infoProvider; // @synthesize infoProvider=_infoProvider;
@property (readonly, nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)enterState:(id)arg1;
- (BOOL)enterState:(id)arg1 context:(id)arg2;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (void)notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)setInitialState:(id)arg1;
- (id)stateMachineLog;
- (id)stateMachineName;
- (void)updateState;

@end

