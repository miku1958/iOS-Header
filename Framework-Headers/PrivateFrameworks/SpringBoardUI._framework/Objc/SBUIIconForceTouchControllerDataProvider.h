//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFParallaxSettings, SBUIForceTouchGestureRecognizer, SBUIIconForceTouchController, UIView, UIViewController;
@protocol SBUIIconForceTouchControllerDataSource;

@interface SBUIIconForceTouchControllerDataProvider : NSObject
{
    struct {
        unsigned int iconForceTouchController_iconImageInsetsForGestureRecognizer:1;
        unsigned int iconForceTouchController_iconImageCornerRadiusForGestureRecognizer:1;
        unsigned int iconForceTouchController_wrapperViewCornerRadiusForGestureRecognizer:1;
        unsigned int iconForceTouchController_parallaxSettingsForGestureRecognizer:1;
        unsigned int iconForceTouchController_zoomDownViewForGestureRecognizer:1;
        unsigned int iconForceTouchController_zoomDownCenterForGestureRecognizer:1;
    } _dataSourceRespondsTo;
    id<SBUIIconForceTouchControllerDataSource> _dataSource;
    SBUIIconForceTouchController *_controller;
    SBUIForceTouchGestureRecognizer *_gestureRecognizer;
}

@property (readonly, weak, nonatomic) SBUIIconForceTouchController *controller; // @synthesize controller=_controller;
@property (readonly, nonatomic) id<SBUIIconForceTouchControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, weak, nonatomic) SBUIForceTouchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly, nonatomic) double iconImageCornerRadius;
@property (readonly, nonatomic) struct UIEdgeInsets iconImageInsets;
@property (readonly, nonatomic) struct CGRect iconViewFrame;
@property (readonly, nonatomic) long long layoutStyle;
@property (readonly, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (readonly, nonatomic) UIViewController *primaryViewController;
@property (readonly, nonatomic) UIViewController *secondaryViewController;
@property (readonly, nonatomic) double wrapperViewCornerRadius;
@property (readonly, nonatomic) struct CGPoint zoomDownCenter;
@property (readonly, nonatomic) UIView *zoomDownView;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)arg1 controller:(id)arg2 gestureRecognizer:(id)arg3;
- (id)newIconViewCopy;

@end
