//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIConstraintBasedLayoutHostingView : UIView
{
    UIView *_hostedView;
    BOOL _hasAddedConstraints;
}

@property (strong, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;

+ (BOOL)requiresConstraintBasedLayout;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (BOOL)_layoutHeightDependsOnWidth;
- (void)_layoutMetricsInvalidatedForHostedView;
- (struct CGSize)_layoutSizeThatFits:(struct CGSize)arg1 fixedAxes:(unsigned long long)arg2;
- (void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)arg1;
- (void)_setFrameWithAlignmentRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)constraintsDidChangeInEngine:(id)arg1;
- (id)initWithHostedView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)willRemoveSubview:(id)arg1;

@end

