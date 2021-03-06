//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface VUIStateMachine : NSObject
{
    CDUnknownBlockType _stateChangeHandler;
    NSMutableArray *_events;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_defaultHandlers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_blocksToExecuteAfterStateTransition;
    BOOL _handlingEvent;
    BOOL _shouldAcceptEvents;
    BOOL _callsStateChangeHandlerSynchronously;
    NSString *_name;
    NSString *_currentState;
    long long _mode;
    NSObject<OS_os_log> *_logObject;
    NSArray *_ignorableEvents;
}

@property (nonatomic) BOOL callsStateChangeHandlerSynchronously; // @synthesize callsStateChangeHandlerSynchronously=_callsStateChangeHandlerSynchronously;
@property (copy) NSString *currentState; // @synthesize currentState=_currentState;
@property (copy) NSArray *ignorableEvents; // @synthesize ignorableEvents=_ignorableEvents;
@property (strong, nonatomic) NSObject<OS_os_log> *logObject; // @synthesize logObject=_logObject;
@property (readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property BOOL shouldAcceptEvents; // @synthesize shouldAcceptEvents=_shouldAcceptEvents;

+ (void)deregisterStateMachine:(id)arg1;
+ (void)initialize;
+ (void)registerStateMachine:(id)arg1;
+ (id)stateMachineWithName:(id)arg1;
+ (id)stateMachinesOfType:(Class)arg1;
- (void).cxx_destruct;
- (void)_dispatchEvent:(id)arg1;
- (CDUnknownBlockType)_eventHandlerForEvent:(id)arg1;
- (void)_executePostTransitionBlocks;
- (void)_processEvent:(id)arg1;
- (void)_processNextEvent;
- (void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4;
- (void)deregisterHandlers;
- (void)executeBlockAfterCurrentStateTransition:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(CDUnknownBlockType)arg4;
- (void)logUnhandledEvents;
- (void)postEvent:(id)arg1;
- (void)postEvent:(id)arg1 withContext:(id)arg2;
- (void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3;
- (void)purgeEventQueue;
- (void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3;

@end

