//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIKeyboardAnimator.h>

@class BSAnimationSettings;
@protocol SBPasscodeKeyboardAnimatorDelegate;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator
{
    BSAnimationSettings *_animationSettings;
    id<SBPasscodeKeyboardAnimatorDelegate> _delegate;
}

@property (strong, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property (weak, nonatomic) id<SBPasscodeKeyboardAnimatorDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)completeAnimationWithState:(id)arg1;
- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;

@end
