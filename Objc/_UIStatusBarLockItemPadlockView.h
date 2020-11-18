//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UIImageView, UIStatusBarLockItemView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate>
{
    UIImageView *_bodyView;
    UIImageView *_shackleView;
    CDUnknownBlockType _completionBlock;
    UIStatusBarLockItemView *_owner;
}

@property (strong, nonatomic) UIImageView *bodyView; // @synthesize bodyView=_bodyView;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIStatusBarLockItemView *owner; // @synthesize owner=_owner;
@property (strong, nonatomic) UIImageView *shackleView; // @synthesize shackleView=_shackleView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 owner:(id)arg2;
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

