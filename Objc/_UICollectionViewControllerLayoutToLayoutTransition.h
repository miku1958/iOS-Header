//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UICollectionViewLayout, UIPercentDrivenInteractiveTransition;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _crossFadeNavigationBar;
    BOOL _crossFadeBottomBars;
    BOOL _interactionAborted;
    UICollectionViewLayout *_toLayout;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _operation;
}

@property (nonatomic) BOOL crossFadeBottomBars; // @synthesize crossFadeBottomBars=_crossFadeBottomBars;
@property (nonatomic) BOOL crossFadeNavigationBar; // @synthesize crossFadeNavigationBar=_crossFadeNavigationBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property (nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
@property (nonatomic) long long operation; // @synthesize operation=_operation;
@property (readonly) Class superclass;
@property (strong, nonatomic) UICollectionViewLayout *toLayout; // @synthesize toLayout=_toLayout;

+ (id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void).cxx_destruct;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)_shouldCrossFadeNavigationBar;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;

@end

