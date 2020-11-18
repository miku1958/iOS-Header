//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AFUIStateMachineDelegate;

@interface AFUIStateMachine : NSObject
{
    id<AFUIStateMachineDelegate> _delegate;
    long long _state;
    NSMutableDictionary *_endStatesByEventByStartState;
}

@property (weak, nonatomic) id<AFUIStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic, getter=_endStatesByEventByStartState) NSMutableDictionary *endStatesByEventByStartState; // @synthesize endStatesByEventByStartState=_endStatesByEventByStartState;
@property (nonatomic, setter=_setState:) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)_descriptionForEvent:(long long)arg1;
- (id)_endStateNumberFromDictionary:(id)arg1 forEvent:(long long)arg2;
- (void)_setState:(long long)arg1 forEvent:(long long)arg2;
- (void)addTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3;
- (id)initWithInitialState:(long long)arg1;
- (void)performTransitionForEvent:(long long)arg1;

@end
