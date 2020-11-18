//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVMicaPackage, AVObservationController, MPMediaControls, NSObject, NSString, UIButton, UIColor, UIViewPropertyAnimator;
@protocol AVRoutePickerViewDelegate, OS_dispatch_queue;

@interface AVRoutePickerView : UIView
{
    NSObject<OS_dispatch_queue> *_getAirPlayStatusQueue;
    UIColor *_activeTintColor;
    UIButton *_routePickerButton;
    UIButton *_customButton;
    struct CGSize _oldSize;
    UIViewPropertyAnimator *_buttonHighlightAnimator;
    AVObservationController *_observationController;
    BOOL _airPlayActive;
    BOOL _prioritizesVideoDevices;
    AVMicaPackage *_routePickerButtonMicaPackage;
    MPMediaControls *_routePickingControls;
    id<AVRoutePickerViewDelegate> _delegate;
    long long _routePickerButtonStyle;
    NSString *_overrideRoutingContextUID;
}

@property (strong, nonatomic) UIColor *activeTintColor;
@property (weak, nonatomic) id<AVRoutePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSString *overrideRoutingContextUID; // @synthesize overrideRoutingContextUID=_overrideRoutingContextUID;
@property (nonatomic) BOOL prioritizesVideoDevices;
@property (nonatomic) long long routePickerButtonStyle; // @synthesize routePickerButtonStyle=_routePickerButtonStyle;

- (void).cxx_destruct;
- (void)_createOrUpdateRoutePickerButton;
- (id)_defaultActiveTintColor;
- (BOOL)_isAirPlayActive;
- (struct CGRect)_normalizedRectInWindow;
- (void)_registerNotifications;
- (void)_routePickerButtonTapped:(id)arg1;
- (void)_routePickerButtonTouchDown:(id)arg1;
- (void)_routePickerButtonTouchDragEnter:(id)arg1;
- (void)_routePickerButtonTouchUp:(id)arg1;
- (void)_setRoutePickerButtonAlpha:(double)arg1 animated:(BOOL)arg2;
- (void)_updateAirPlayActive;
- (id)customButton;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAirPlayActive;
- (void)layoutSubviews;
- (void)setAirPlayActive:(BOOL)arg1;
- (void)setCustomButton:(id)arg1;
- (void)tintColorDidChange;
- (void)updateButtonAppearance;

@end
