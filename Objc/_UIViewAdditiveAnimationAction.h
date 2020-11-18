//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/CAAction-Protocol.h>

@class CAAnimation, UIView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIViewAdditiveAnimationAction : NSObject <CAAction>
{
    CAAnimation *_pendingAnimation;
    UIViewPropertyAnimator *_animationObject;
    UIView *_view;
}

@property (readonly, strong, nonatomic) UIViewPropertyAnimator *animationObject; // @synthesize animationObject=_animationObject;
@property (readonly, strong, nonatomic) CAAnimation *pendingAnimation; // @synthesize pendingAnimation=_pendingAnimation;
@property (readonly, strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

@end

