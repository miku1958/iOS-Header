//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlColorPaletteViewInteractionDelegate-Protocol.h>
#import <HomeUI/HUQuickControlColorPickerViewInteractionDelegate-Protocol.h>
#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HFColorPalette, HFColorPaletteColor, HUColorLinearPaletteView, HUColorPickerView, HUQuickControlColorViewProfile, NSIndexPath, NSString, UISegmentedControl;
@protocol HUQuickControlColorViewInteractionDelegate, HUQuickControlInteractiveView;

@interface HUQuickControlColorView : UIView <HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlInteractiveView>
{
    BOOL _showPickerModeControl;
    BOOL _userInteractionActive;
    HUQuickControlColorViewProfile *_profile;
    unsigned long long _reachabilityState;
    id<HUQuickControlColorViewInteractionDelegate> _interactionDelegate;
    HFColorPalette *_colorPalette;
    HFColorPaletteColor *_selectedColor;
    id _originalValue;
    HFColorPalette *_originalPalette;
    NSIndexPath *_originalSelectedColorIndexPath;
    HUColorLinearPaletteView *_colorLinearPaletteView;
    HUColorPickerView *_colorPickerView;
    UISegmentedControl *_colorPickerModeSegmentedControl;
}

@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *activeView;
@property (strong, nonatomic) HUColorLinearPaletteView *colorLinearPaletteView; // @synthesize colorLinearPaletteView=_colorLinearPaletteView;
@property (strong, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property (strong, nonatomic) UISegmentedControl *colorPickerModeSegmentedControl; // @synthesize colorPickerModeSegmentedControl=_colorPickerModeSegmentedControl;
@property (strong, nonatomic) HUColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HUQuickControlColorViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (readonly, nonatomic) NSIndexPath *linearPaletteViewSelectedColorIndexPath;
@property (readonly, nonatomic) unsigned long long mode;
@property (strong, nonatomic) HFColorPalette *originalPalette; // @synthesize originalPalette=_originalPalette;
@property (strong, nonatomic) NSIndexPath *originalSelectedColorIndexPath; // @synthesize originalSelectedColorIndexPath=_originalSelectedColorIndexPath;
@property (strong, nonatomic) id originalValue; // @synthesize originalValue=_originalValue;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile; // @synthesize profile=_profile;
@property (nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property (strong, nonatomic) id secondaryValue;
@property (strong, nonatomic) HFColorPaletteColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property (readonly, nonatomic, getter=isSelectedColorInPalette) BOOL selectedColorInPalette;
@property (nonatomic) BOOL showPickerModeControl; // @synthesize showPickerModeControl=_showPickerModeControl;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (strong, nonatomic) id value;

- (void).cxx_destruct;
- (void)_updateColorPicker;
- (void)_updateLayout;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_updateVisibleViews;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)cancelColorPicking;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)storeCurrentColorInformationAsOriginalValues;
- (void)updateSelectedColorIndexPathToIndexPath:(id)arg1;

@end

