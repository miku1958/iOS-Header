//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

@class HFItem, HUCameraView, HUGridCameraCellLayoutOptions, NADecayingTimer, NSArray, UILabel, UIView;

@interface HUGridCameraCell : HUGridCell
{
    HFItem *_item;
    HUGridCameraCellLayoutOptions *_layoutOptions;
    UIView *_topBarView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    HUCameraView *_cameraView;
    NSArray *_allConstraints;
    NSArray *_labelsConstraints;
    NADecayingTimer *_descriptionLabelUpdateTimer;
}

@property (strong, nonatomic) NSArray *allConstraints; // @synthesize allConstraints=_allConstraints;
@property (strong, nonatomic) HUCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property (nonatomic) double cameraViewAlpha;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) NADecayingTimer *descriptionLabelUpdateTimer; // @synthesize descriptionLabelUpdateTimer=_descriptionLabelUpdateTimer;
@property (strong, nonatomic) NSArray *labelsConstraints; // @synthesize labelsConstraints=_labelsConstraints;
@property (strong, nonatomic) HUGridCameraCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;

+ (Class)layoutOptionsClass;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_animateTransitionWithView:(id)arg1 animations:(CDUnknownBlockType)arg2;
- (id)_descriptionLabelText:(id)arg1;
- (void)_invalidateConstraints;
- (void)_updateCameraViewAppearance;
- (void)_updateLabelsAppearance;
- (struct CGRect)cameraViewFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (void)setItem:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

