//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;
@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject
{
    int _lock;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    id<_GKStateMachineDelegate> _delegate;
    BOOL _shouldLogStateTransitions;
}

@property (strong) NSString *currentState; // @synthesize currentState=_currentState;
@property id<_GKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
@property (strong) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;

- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)_setCurrentState:(id)arg1;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)applyState:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;

@end

