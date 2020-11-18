//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

#import <MapKit/MKUserTrackingButtonTarget-Protocol.h>

@class MKMapView, NSString, UIButton, UIImage, UINavigationBar, UIToolbar, UIView, _MKUserTrackingButton, _MKUserTrackingButtonController;
@protocol MKUserTrackingView;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget>
{
    BOOL _hasCustomAssociatedView;
    UIButton *_customButton;
    _MKUserTrackingButtonController *_controller;
    _MKUserTrackingButton *_userTrackingButton;
    BOOL _isLegacy;
    BOOL _explicitlyEnabled;
    BOOL _internallyEnabled;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    UIToolbar *_toolbar;
    UINavigationBar *_navigationBar;
    UIView *_associatedView;
}

@property (strong, nonatomic) UIView *_associatedView; // @synthesize _associatedView;
@property (strong, nonatomic) UINavigationBar *_navigationBar; // @synthesize _navigationBar;
@property (nonatomic, setter=_setState:) long long _state;
@property (strong, nonatomic) UIToolbar *_toolbar; // @synthesize _toolbar;
@property (strong, nonatomic, setter=_setUserTrackingView:) id<MKUserTrackingView> _userTrackingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKMapView *mapView;
@property (nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) BOOL selectsWhenTracking;
@property (readonly) Class superclass;

+ (Class)_activityIndicatorClass;
- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (void)_goToNextMode:(id)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_imageForUserTrackingMode:(long long)arg1;
- (BOOL)_isHighlightedForState:(long long)arg1;
- (BOOL)_isInMiniBar;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1;
- (void)_repositionViews;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2;
- (void)_setInternallyEnabled:(BOOL)arg1;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2;
- (long long)_styleForState:(long long)arg1;
- (id)_trackingEmptyImage;
- (id)_trackingFollowImage;
- (id)_trackingFollowWithHeadingImage;
- (id)_trackingNoneImage;
- (void)_updateForState:(long long)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapView:(id)arg1;
- (BOOL)isEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setEnabled:(BOOL)arg1;

@end

