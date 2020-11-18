//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CRKCardViewControllerTransitionAnimatorDelegate;

@interface _CRKCardViewControllerTransitionAnimator : NSObject
{
    id<_CRKCardViewControllerTransitionAnimatorDelegate> _delegate;
}

@property (weak, nonatomic) id<_CRKCardViewControllerTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)sectionShuffleTransitionAnimator;
- (void).cxx_destruct;
- (void)_prepareAnimationFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)transitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end

