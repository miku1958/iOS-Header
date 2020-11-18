//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUGarageDoorStateTransition, HUShapeLayerView, HUVisualEffectContainerView, UIView, UIVisualEffectView;

@interface HUGarageDoorIconContentView : HUPrimaryStateIconContentView
{
    BOOL _open;
    BOOL _clipBottomPanelShapesToBounds;
    HUShapeLayerView *_buildingView;
    HUVisualEffectContainerView *_buildingContainerView;
    HUShapeLayerView *_carView;
    UIVisualEffectView *_carContainerView;
    UIView *_doorContainerView;
    UIView *_doorHingeView;
    UIView *_doorView;
    UIVisualEffectView *_topPanelHingeView;
    HUShapeLayerView *_topPanelView;
    UIVisualEffectView *_middlePanelHingeView;
    HUShapeLayerView *_middlePanelView;
    UIVisualEffectView *_bottomPanelHingeView;
    HUShapeLayerView *_bottomPanelViewWithoutHandle;
    HUShapeLayerView *_bottomPanelViewWithHandle;
    HUGarageDoorStateTransition *_activeTransition;
}

@property (strong, nonatomic) HUGarageDoorStateTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property (strong, nonatomic) UIVisualEffectView *bottomPanelHingeView; // @synthesize bottomPanelHingeView=_bottomPanelHingeView;
@property (strong, nonatomic) HUShapeLayerView *bottomPanelViewWithHandle; // @synthesize bottomPanelViewWithHandle=_bottomPanelViewWithHandle;
@property (strong, nonatomic) HUShapeLayerView *bottomPanelViewWithoutHandle; // @synthesize bottomPanelViewWithoutHandle=_bottomPanelViewWithoutHandle;
@property (strong, nonatomic) HUVisualEffectContainerView *buildingContainerView; // @synthesize buildingContainerView=_buildingContainerView;
@property (strong, nonatomic) HUShapeLayerView *buildingView; // @synthesize buildingView=_buildingView;
@property (strong, nonatomic) UIVisualEffectView *carContainerView; // @synthesize carContainerView=_carContainerView;
@property (strong, nonatomic) HUShapeLayerView *carView; // @synthesize carView=_carView;
@property (nonatomic) BOOL clipBottomPanelShapesToBounds; // @synthesize clipBottomPanelShapesToBounds=_clipBottomPanelShapesToBounds;
@property (strong, nonatomic) UIView *doorContainerView; // @synthesize doorContainerView=_doorContainerView;
@property (strong, nonatomic) UIView *doorHingeView; // @synthesize doorHingeView=_doorHingeView;
@property (strong, nonatomic) UIView *doorView; // @synthesize doorView=_doorView;
@property (strong, nonatomic) UIVisualEffectView *middlePanelHingeView; // @synthesize middlePanelHingeView=_middlePanelHingeView;
@property (strong, nonatomic) HUShapeLayerView *middlePanelView; // @synthesize middlePanelView=_middlePanelView;
@property (nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property (strong, nonatomic) UIVisualEffectView *topPanelHingeView; // @synthesize topPanelHingeView=_topPanelHingeView;
@property (strong, nonatomic) HUShapeLayerView *topPanelView; // @synthesize topPanelView=_topPanelView;

+ (id)_pathForBottomDoorPanelWithHandleForBounds:(struct CGRect)arg1;
+ (id)_pathForMiddleDoorPanelWithHandleForBounds:(struct CGRect)arg1;
+ (double)_referenceHeightForPanelAtPosition:(unsigned long long)arg1 open:(BOOL)arg2;
+ (double)_referenceOriginYForPanelAtPosition:(unsigned long long)arg1 open:(BOOL)arg2;
+ (id)buildingPathForBounds:(struct CGRect)arg1;
+ (id)carPathForBounds:(struct CGRect)arg1;
+ (id)pathForPanelAtPosition:(unsigned long long)arg1 bounds:(struct CGRect)arg2 showHandle:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_createPanelViewForPosition:(unsigned long long)arg1 showHandle:(BOOL)arg2;
- (struct CATransform3D)_doorHingeSublayerTransformForOpenState:(BOOL)arg1;
- (void)_enumeratePanelViewsWithBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)_frameForPanelAtPosition:(unsigned long long)arg1 open:(BOOL)arg2 relativeToHinge:(BOOL)arg3;
- (struct CGRect)_frameForPanelHingeAtPosition:(unsigned long long)arg1 open:(BOOL)arg2;
- (struct CATransform3D)_panelHingeSublayerTransformWithOpenState:(BOOL)arg1;
- (id)_panelViewsForPosition:(unsigned long long)arg1;
- (double)_referenceScaleFactor;
- (struct CGAffineTransform)_referenceScaleTransform;
- (void)_updateCarLayoutForOpenState:(BOOL)arg1;
- (void)_updateLayoutForOpenState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updatePanelLayoutForOpenState:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)managedVisualEffectViews;
- (id)panelHingeViews;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3;
- (BOOL)wantsManagedVibrancyEffect;

@end
