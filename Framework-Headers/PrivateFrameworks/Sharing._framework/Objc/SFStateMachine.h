//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol SFStateMachineDelegate;

@interface SFStateMachine : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    BOOL _shouldLogStateTransitions;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    id<SFStateMachineDelegate> _delegate;
}

@property (copy) NSString *currentState; // @synthesize currentState=_currentState;
@property id<SFStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
@property (strong) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;

- (void).cxx_destruct;
- (id)_missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)_setCurrentState:(id)arg1;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)applyState:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)target;

@end

