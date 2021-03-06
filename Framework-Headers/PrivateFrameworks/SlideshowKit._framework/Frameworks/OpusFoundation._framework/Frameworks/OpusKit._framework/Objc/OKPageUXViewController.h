//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKPageViewController.h>

#import <OpusKit/OKCollectionProxyDataSource-Protocol.h>
#import <OpusKit/OKPageViewControllerProxyExport-Protocol.h>
#import <OpusKit/OKWidgetViewDelegate-Protocol.h>
#import <OpusKit/UICollisionBehaviorDelegate-Protocol.h>
#import <OpusKit/UIDynamicAnimatorDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, OKPageView, UICollisionBehavior, UIDynamicAnimator, UIGravityBehavior;

@interface OKPageUXViewController : OKPageViewController <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate, OKCollectionProxyDataSource, OKWidgetViewDelegate, OKPageViewControllerProxyExport>
{
    NSMutableArray *_widgetViews;
    NSMutableArray *_newWidgetViews;
    NSMutableArray *_pageViewZones;
    struct CGSize _pageViewZoneSize;
    BOOL _parallaxEnabled;
    double _parallaxRatioX;
    double _parallaxRatioY;
    struct CGPoint _lastParallaxOffset;
    BOOL _dynamicsEnabled;
    UIDynamicAnimator *_dynamicsAnimator;
    UIGravityBehavior *_dynamicsGravityBehavior;
    BOOL _dynamicsGravityBehaviorMotionDriven;
    UICollisionBehavior *_dynamicsPageCollisionBehavior;
    NSMutableDictionary *_dynamicsWidgetCollisionBehaviors;
    NSMutableDictionary *_dynamicsPushBehaviors;
    OKPageView *_pageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) UIDynamicAnimator *dynamicsAnimator; // @synthesize dynamicsAnimator=_dynamicsAnimator;
@property (readonly, nonatomic) BOOL dynamicsEnabled; // @synthesize dynamicsEnabled=_dynamicsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint lastParallaxOffset; // @synthesize lastParallaxOffset=_lastParallaxOffset;
@property (readonly, strong, nonatomic) OKPageView *pageView; // @synthesize pageView=_pageView;
@property (readonly, nonatomic) BOOL parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property (nonatomic) double parallaxRatioX; // @synthesize parallaxRatioX=_parallaxRatioX;
@property (nonatomic) double parallaxRatioY; // @synthesize parallaxRatioY=_parallaxRatioY;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) NSArray *widgetViews; // @synthesize widgetViews=_widgetViews;

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
+ (Class)viewClass;
- (id)_preparseLayoutString:(id)arg1 targetView:(out id *)arg2 anchorView:(out id *)arg3;
- (id)_remoteWidgetsForWidgetView:(id)arg1 keyPath:(id)arg2;
- (void)addWidgetViewInPageViewZones:(id)arg1;
- (id)addWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (void)applySettings;
- (struct CGRect)calculateVisibleRectForWidget:(id)arg1;
- (struct CGRect)calculateVisibleRectForWidgetRect:(struct CGRect)arg1 withParallax:(double)arg2;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3;
- (void)commonInit;
- (struct CGPoint)convertPointWithMotionAndParallax:(struct CGPoint)arg1 andZPosition:(double)arg2;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (id)currentRemoteWidgets;
- (void)dealloc;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)dynamicAnimatorWillResume:(id)arg1;
- (BOOL)hasWidgetFocused;
- (void)instantPause;
- (void)instantResume;
- (void)layoutDidChange;
- (id)mediaURLs;
- (void)networkStatusDidChange:(long long)arg1;
- (id)newWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
- (id)pageViewForWidgetView:(id)arg1;
- (id)pageViewZonesInRect:(struct CGRect)arg1;
- (struct CGPoint)parallaxWithOffsetX:(double)arg1 offsetY:(double)arg2 zPosition:(double)arg3;
- (void)prepareAllWidgets;
- (BOOL)prepareForDisplay;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)prepareWidgetsInRect:(struct CGRect)arg1;
- (void)reloadDynamics;
- (void)reloadPageViewZones;
- (void)reloadPageViewZonesForSubwidgets:(id)arg1 withParallax:(double)arg2;
- (void)reloadPageViewZonesWithSize:(struct CGSize)arg1;
- (void)removeWidgetView:(id)arg1;
- (void)removeWidgetViewInPageViewZones:(id)arg1;
- (void)resetDynamics;
- (void)resolutionDidChange;
- (void)setSettingDynamicsCollisionConfinementEnabled:(BOOL)arg1;
- (void)setSettingDynamicsEnabled:(BOOL)arg1;
- (void)setSettingDynamicsGravityAngle:(float)arg1;
- (void)setSettingDynamicsGravityEnabled:(BOOL)arg1;
- (void)setSettingDynamicsGravityMagnitude:(float)arg1;
- (void)setSettingDynamicsGravityMotionDriven:(BOOL)arg1;
- (void)setSettingDynamicsPushBehaviors:(id)arg1;
- (void)setSettingParallaxEnabled:(BOOL)arg1;
- (void)setSettingParallaxRatioX:(double)arg1;
- (void)setSettingParallaxRatioY:(double)arg1;
- (BOOL)settingDynamicsCollisionConfinementEnabled;
- (BOOL)settingDynamicsGravityEnabled;
- (id)settingObjectForKey:(id)arg1;
- (void)updateDynamics;
- (void)updateLayoutSteps;
- (void)updateMotion;
- (void)updateMotionForWidgetView:(id)arg1;
- (void)updateParallax;
- (void)updateParallaxForWidgetView:(id)arg1;
- (void)updateParallaxWithOffsetX:(double)arg1 offsetY:(double)arg2;
- (void)updateWidgetViewInPageViewZones:(id)arg1;
- (void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3;
- (id)valueForUndefinedKey:(id)arg1;
- (void)viewDidLoad;
- (id)visibleWidgets;
- (void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3;
- (void)widgetViewCancelAllOperations:(id)arg1;
- (void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2;
- (id)widgetViewForName:(id)arg1 recursively:(BOOL)arg2;
- (id)widgetViewNames;
- (id)widgetViewResolution:(id)arg1;
- (void)widgetViewsInDisplayRect:(struct CGRect)arg1 displaySet:(id)arg2 andWarmupRect:(struct CGRect)arg3 warmupSet:(id)arg4;
- (id)widgetViewsInRect:(struct CGRect)arg1;

@end

