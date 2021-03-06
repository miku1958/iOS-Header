//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAssertion, AXDispatchTimer, UIAttachmentBehavior, UICollisionBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIGravityBehavior, UIPanGestureRecognizer, UISnapBehavior, UIView;
@protocol AXUINubbitDelegate;

@interface AXUINubbitContext : NSObject
{
    UIView *_nubbit;
    id<AXUINubbitDelegate> _delegate;
    AXAssertion *_disableSystemGesturesAssertion;
    AXAssertion *_disableDashBoardSystemGesturesAssertion;
    UIPanGestureRecognizer *_moveNubbitGestureRecognizer;
    AXDispatchTimer *_fadeTimer;
    UIDynamicAnimator *_dynamicAnimator;
    UIGravityBehavior *_gravityBehavior;
    UIAttachmentBehavior *_followPanBehavior;
    UISnapBehavior *_snapToBoundaryBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIDynamicItemBehavior *_dynamicItemBehavior;
    double _originalAlpha;
}

@property (strong, nonatomic) UICollisionBehavior *collisionBehavior; // @synthesize collisionBehavior=_collisionBehavior;
@property (weak, nonatomic) id<AXUINubbitDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) AXAssertion *disableDashBoardSystemGesturesAssertion; // @synthesize disableDashBoardSystemGesturesAssertion=_disableDashBoardSystemGesturesAssertion;
@property (strong, nonatomic) AXAssertion *disableSystemGesturesAssertion; // @synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion;
@property (strong, nonatomic) UIDynamicAnimator *dynamicAnimator; // @synthesize dynamicAnimator=_dynamicAnimator;
@property (strong, nonatomic) UIDynamicItemBehavior *dynamicItemBehavior; // @synthesize dynamicItemBehavior=_dynamicItemBehavior;
@property (strong, nonatomic) AXDispatchTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property (strong, nonatomic) UIAttachmentBehavior *followPanBehavior; // @synthesize followPanBehavior=_followPanBehavior;
@property (strong, nonatomic) UIGravityBehavior *gravityBehavior; // @synthesize gravityBehavior=_gravityBehavior;
@property (strong, nonatomic) UIPanGestureRecognizer *moveNubbitGestureRecognizer; // @synthesize moveNubbitGestureRecognizer=_moveNubbitGestureRecognizer;
@property (strong, nonatomic) UIView *nubbit; // @synthesize nubbit=_nubbit;
@property (nonatomic) double originalAlpha; // @synthesize originalAlpha=_originalAlpha;
@property (strong, nonatomic) UISnapBehavior *snapToBoundaryBehavior; // @synthesize snapToBoundaryBehavior=_snapToBoundaryBehavior;

- (void).cxx_destruct;

@end

