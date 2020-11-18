//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUState, CUStateMachine, NSDictionary, NSPointerArray;

@interface SUICProgressStateMachine : NSObject
{
    CUStateMachine *_underlyingStateMachine;
    NSDictionary *_stateForStateName;
    unsigned long long _currentState;
    CUState *_abstractState;
    NSPointerArray *_stateMachineObservers;
}

@property (readonly) unsigned long long state;
@property (strong, nonatomic, getter=_stateMachineObservers, setter=_setStateMachineObservers:) NSPointerArray *stateMachineObservers; // @synthesize stateMachineObservers=_stateMachineObservers;

- (void).cxx_destruct;
- (void)_ignoreEvent:(unsigned long long)arg1;
- (void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (void)addObservers:(id)arg1;
- (void)dealloc;
- (void)handleEvent:(unsigned long long)arg1;
- (id)init;
- (void)setObservers:(id)arg1;

@end
