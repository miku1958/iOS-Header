//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoAccessoryItemTransitioning-Protocol.h>

@class NSString, UIViewPropertyAnimator;

@interface SXVideoAccessoryItemMoveUpTransitionCoordinator : NSObject <SXVideoAccessoryItemTransitioning>
{
    UIViewPropertyAnimator *_animator;
}

@property (strong, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithContext:(id)arg1;
- (void)cancelTransition;

@end
