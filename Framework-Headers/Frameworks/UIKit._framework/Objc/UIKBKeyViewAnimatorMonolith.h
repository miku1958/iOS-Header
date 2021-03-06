//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBKeyViewAnimator.h>

#import <UIKitCore/_UIFloatingContentViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator <_UIFloatingContentViewDelegate>
{
    NSMutableDictionary *_selectedKeyTimestamps;
    NSMutableDictionary *_transitionCompletions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_transitionFromState:(int)arg1 toState:(int)arg2;
- (void)addTransitionCompletion:(CDUnknownBlockType)arg1 forKeyName:(id)arg2;
- (void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2;
- (unsigned long long)controlStateForKeyState:(int)arg1;
- (void)dealloc;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)init;
- (Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3;
- (void)reset;
- (BOOL)shouldAssertCurrentKeyState:(id)arg1;
- (BOOL)shouldPurgeKeyViews;
- (BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;

@end

