//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIButton;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI24GKMultiplayerStepperView : UIView
{
    MISSING_TYPE *downButton;
    MISSING_TYPE *upButton;
    MISSING_TYPE *label;
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *model;
    MISSING_TYPE *isStepperHidden;
}

@property (nonatomic, readonly) UIButton *accessibilityDownButton;
@property (nonatomic, readonly) UIButton *accessibilityUpButton;

- (void).cxx_destruct;
- (void)accessibilityUpdateStepperWithValue:(long long)arg1;
- (void)didTapDown:(id)arg1;
- (void)didTapUp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;

@end

