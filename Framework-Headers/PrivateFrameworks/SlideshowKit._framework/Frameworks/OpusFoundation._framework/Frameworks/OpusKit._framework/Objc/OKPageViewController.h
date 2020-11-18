//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFUIViewController.h>

#import <OpusKit/OKActionResponder-Protocol.h>
#import <OpusKit/OKActionResponderPrivate-Protocol.h>
#import <OpusKit/OKCollectionProxyDataSource-Protocol.h>
#import <OpusKit/OKPresentationReadiness-Protocol.h>
#import <OpusKit/OKPresentationReadinessPrivate-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, OFUIView, OKNavigatorViewController, OKPresentationPage, OKPresentationViewController;

@interface OKPageViewController : OFUIViewController <OKSettingsSupport, OKActionResponderPrivate, OKCollectionProxyDataSource, OKPresentationReadinessPrivate, OKActionResponder, OKPresentationReadiness>
{
    BOOL _motionEnabled;
    double _perspective;
    BOOL _motionTiltXEnabled;
    BOOL _motionTiltYEnabled;
    BOOL _motionTiltZEnabled;
    struct CGSize _motionXMinMax;
    struct CGSize _motionYMinMax;
    struct CGSize _motionZMinMax;
    double _lastMotionRotationX;
    double _lastMotionRotationY;
    double _lastMotionRotationZ;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
    unsigned long long _prepareMode;
    BOOL _prepareWidgetsManually;
    OKPresentationPage *_page;
    NSArray *_layoutSteps;
    OKNavigatorViewController *_subNavigatorViewController;
    OKPresentationViewController *_presentationViewController;
    OKNavigatorViewController *_navigatorViewController;
    NSArray *_musicURLs;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSString *_willAppearActionScript;
    NSString *_appearingActionScript;
    NSString *_didAppearActionScript;
    NSString *_willDisappearActionScript;
    NSString *_disappearingActionScript;
    NSString *_didDisappearActionScript;
    NSString *_layoutChangedActionScript;
    NSMutableDictionary *_actionBindings;
    struct UIEdgeInsets _eventsInset;
    BOOL _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
}

@property (readonly) OFUIView *actionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct UIEdgeInsets eventsInset; // @synthesize eventsInset=_eventsInset;
@property (nonatomic) BOOL hasSettingsApplied; // @synthesize hasSettingsApplied=_hasSettingsApplied;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *layoutSteps; // @synthesize layoutSteps=_layoutSteps;
@property (readonly, nonatomic) BOOL motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property (readonly, strong, nonatomic) NSArray *musicURLs; // @synthesize musicURLs=_musicURLs;
@property (nonatomic) OKNavigatorViewController *navigatorViewController; // @synthesize navigatorViewController=_navigatorViewController;
@property (nonatomic) BOOL needsApplySettings; // @synthesize needsApplySettings=_needsApplySettings;
@property (readonly, strong, nonatomic) OKPresentationPage *page; // @synthesize page=_page;
@property (readonly, nonatomic) unsigned long long prepareMode; // @synthesize prepareMode=_prepareMode;
@property (nonatomic) BOOL prepareWidgetsManually; // @synthesize prepareWidgetsManually=_prepareWidgetsManually;
@property (nonatomic) OKPresentationViewController *presentationViewController;
@property (strong, nonatomic) OKNavigatorViewController *subNavigatorViewController; // @synthesize subNavigatorViewController=_subNavigatorViewController;
@property (readonly) Class superclass;

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
+ (Class)viewClass;
- (id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2;
- (id)actionBindings;
- (void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2;
- (id)allActionBindings;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (void)applyLayoutSettings;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (void)becomeReady;
- (BOOL)canPerformAction:(id)arg1;
- (void)cancelCouchPotatoPlayback;
- (void)commonInit;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (id)currentRemoteWidgets;
- (void)dealloc;
- (id)deepestDisplayedPageViewController;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)displayedPageViewControllers;
- (void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3 forWidgetView:(id)arg4;
- (BOOL)hasWidgetFocused;
- (id)initWithPage:(id)arg1;
- (void)instantPause;
- (void)instantResume;
- (BOOL)interactivityEnabled;
- (BOOL)isReady:(BOOL)arg1;
- (void)layoutDidChange;
- (struct CGSize)layoutFactor;
- (id)layoutSettingsKeys;
- (id)mediaURLs;
- (id)name;
- (void)networkStatusDidChange:(long long)arg1;
- (void)notifyWhenBecomesReady:(CDUnknownBlockType)arg1;
- (void)pageAppearingWithProgress:(float)arg1 animated:(BOOL)arg2;
- (void)pageDidAppear:(BOOL)arg1;
- (void)pageDidDisappear:(BOOL)arg1;
- (void)pageDisappearingWithProgress:(float)arg1 animated:(BOOL)arg2;
- (id)pageView;
- (void)pageWillAppear:(BOOL)arg1;
- (void)pageWillDisappear:(BOOL)arg1;
- (struct CGSize)parentLayoutFactor;
- (BOOL)performActionScript:(id)arg1 withAction:(id)arg2;
- (void)prepareAllWidgets;
- (BOOL)prepareForDisplay;
- (void)prepareForMode:(unsigned long long)arg1;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)prepareWidgetsInRect:(struct CGRect)arg1;
- (void)readinessDidChange:(BOOL)arg1;
- (double)readyProgress:(BOOL)arg1;
- (void)removeActionBinding:(id)arg1;
- (void)removeAllActionBindings;
- (void)removeAllReadyNotifications;
- (void)resignReady;
- (void)resolutionDidChange;
- (BOOL)sendAction:(id)arg1 toTarget:(id)arg2;
- (void)setNeedsApplySettings;
- (void)setNeedsPrepare;
- (void)setSettingActionBindings:(id)arg1;
- (void)setSettingAppearingActionScript:(id)arg1;
- (void)setSettingCanPerformActionScript:(id)arg1;
- (void)setSettingDidAppearActionScript:(id)arg1;
- (void)setSettingDidDisappearActionScript:(id)arg1;
- (void)setSettingDisappearingActionScript:(id)arg1;
- (void)setSettingEventsInset:(struct UIEdgeInsets)arg1;
- (void)setSettingLayoutChangedActionScript:(id)arg1;
- (void)setSettingLayoutSteps:(id)arg1;
- (void)setSettingMotionEnabled:(BOOL)arg1;
- (void)setSettingMotionTiltXEnabled:(BOOL)arg1;
- (void)setSettingMotionTiltYEnabled:(BOOL)arg1;
- (void)setSettingMotionTiltZEnabled:(BOOL)arg1;
- (void)setSettingMotionXMinMax:(struct CGSize)arg1;
- (void)setSettingMotionYMinMax:(struct CGSize)arg1;
- (void)setSettingMotionZMinMax:(struct CGSize)arg1;
- (void)setSettingMusic:(id)arg1;
- (void)setSettingPerspective:(double)arg1;
- (void)setSettingPrepareActionScript:(id)arg1;
- (void)setSettingWillAppearActionScript:(id)arg1;
- (void)setSettingWillDisappearActionScript:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (struct UIEdgeInsets)settingEventsInset;
- (id)settingObjectForKey:(id)arg1;
- (BOOL)supportsReadiness;
- (void)updateLayoutSteps;
- (void)updateMotion;
- (void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3;
- (id)valueForUndefinedKey:(id)arg1;
- (id)visibleWidgets;

@end

