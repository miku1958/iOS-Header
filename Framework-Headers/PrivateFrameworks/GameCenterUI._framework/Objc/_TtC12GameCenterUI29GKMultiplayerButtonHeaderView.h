//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI29GKMultiplayerButtonHeaderView : UIView
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *stepper;
    MISSING_TYPE *iconView;
    MISSING_TYPE *cancelButton;
    MISSING_TYPE *cancelButtonHandler;
    MISSING_TYPE *wantsMaterialBackground;
    MISSING_TYPE *backgroundView;
}

@property (nonatomic) BOOL isStepperHidden;
@property (nonatomic) long long maximumValue;
@property (nonatomic) long long minimumValue;
@property (nonatomic) BOOL wantsMaterialBackground; // @synthesize wantsMaterialBackground;

- (void).cxx_destruct;
- (void)applyGame:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (id)initWithCancelButtonHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMinimumValue:(long long)arg1 maximumValue:(long long)arg2 initialValue:(long long)arg3 titleChangedHandler:(CDUnknownBlockType)arg4 valueChangedHandler:(CDUnknownBlockType)arg5 cancelButtonHandler:(CDUnknownBlockType)arg6;
- (void)layoutSubviews;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateStepperWithValue:(long long)arg1;

@end

