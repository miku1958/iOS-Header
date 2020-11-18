//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIScrollAccessory-Protocol.h>

@class NSArray, NSInvocation, UIButton, UIScrollView;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory>
{
    UIView *_dividerLine;
    NSInvocation *_invocation;
    NSArray *_constraints;
    BOOL _shouldInsetButtonsForIndex;
    UIScrollView *_scrollView;
    long long _edge;
    UIButton *_upButton;
    UIButton *_downButton;
}

@property (readonly, nonatomic) long long desiredAccessoryEdge;
@property (readonly, nonatomic) UIButton *downButton; // @synthesize downButton=_downButton;
@property (nonatomic) long long edge; // @synthesize edge=_edge;
@property (readonly, nonatomic) BOOL overlay;
@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) BOOL shouldInsetButtonsForIndex; // @synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex;
@property (readonly, nonatomic) UIButton *upButton; // @synthesize upButton=_upButton;

- (void).cxx_destruct;
- (unsigned long long)_axis;
- (id)_constraintsForEdge:(long long)arg1;
- (void)_setupSubviewsIfNeeded;
- (void)buttonTapped:(id)arg1;
- (struct CGRect)centeringBounds;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)update;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

@end

