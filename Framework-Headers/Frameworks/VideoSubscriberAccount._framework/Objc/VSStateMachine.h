//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, VSOptional;
@protocol VSStateMachineDelegate;

@interface VSStateMachine : NSObject
{
    int _mode;
    NSString *_name;
    VSOptional *_currentState;
    id<VSStateMachineDelegate> _delegate;
    NSOperationQueue *_transitionQueue;
    NSMutableArray *_enqueuedTransitions;
    NSMutableDictionary *_transitionTable;
    NSMutableDictionary *_ignoredEventsByState;
}

@property (strong, nonatomic) VSOptional *currentState; // @synthesize currentState=_currentState;
@property (weak, nonatomic) id<VSStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableArray *enqueuedTransitions; // @synthesize enqueuedTransitions=_enqueuedTransitions;
@property (strong, nonatomic) NSMutableDictionary *ignoredEventsByState; // @synthesize ignoredEventsByState=_ignoredEventsByState;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSOperationQueue *transitionQueue; // @synthesize transitionQueue=_transitionQueue;
@property (strong, nonatomic) NSMutableDictionary *transitionTable; // @synthesize transitionTable=_transitionTable;

- (void).cxx_destruct;
- (void)_enteringState:(id)arg1;
- (void)_exitingState:(id)arg1;
- (void)_handleEnqueuedTransitions;
- (void)_setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ignoringEvent:(BOOL)arg4;
- (void)activateWithState:(id)arg1;
- (id)description;
- (void)enqueueEvent:(id)arg1;
- (void)ignoreEvent:(id)arg1 inState:(id)arg2;
- (id)init;
- (void)setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3;

@end
