//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKBrowserItemPayload, CKDeviceOrientationManager, CKHandwritingWindow, CKScheduledUpdater, NSString, UIViewController;
@protocol CKHandwritingBrowserViewControllerProtocol, CKHandwritingPresentationControllerDelegate, CKHandwritingViewControllerSendDelegate;

__attribute__((visibility("hidden")))
@interface CKHandwritingPresentationController : NSObject
{
    BOOL _requestedVisibility;
    BOOL _actualVisibility;
    BOOL _requestedVisibilityShouldBeAnimated;
    BOOL _suppressAppearanceCallbacksBecauseOfFirstInitialization;
    BOOL _foregrounded;
    NSObject<CKHandwritingPresentationControllerDelegate> *_delegate;
    CKDeviceOrientationManager *_deviceOrientationManager;
    long long _initialInterfaceOrientation;
    CKHandwritingWindow *_handwritingWindow;
    UIViewController<CKHandwritingBrowserViewControllerProtocol> *_browserViewController;
    CKScheduledUpdater *_animationScheduledUpdater;
    NSObject<CKHandwritingViewControllerSendDelegate> *_cachedSendDelegate;
    CKBrowserItemPayload *_cachedPluginPayload;
}

@property (nonatomic) BOOL actualVisibility; // @synthesize actualVisibility=_actualVisibility;
@property (strong, nonatomic) CKScheduledUpdater *animationScheduledUpdater; // @synthesize animationScheduledUpdater=_animationScheduledUpdater;
@property (strong, nonatomic) UIViewController<CKHandwritingBrowserViewControllerProtocol> *browserViewController; // @synthesize browserViewController=_browserViewController;
@property (strong, nonatomic) CKBrowserItemPayload *cachedPluginPayload; // @synthesize cachedPluginPayload=_cachedPluginPayload;
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *cachedSendDelegate; // @synthesize cachedSendDelegate=_cachedSendDelegate;
@property (weak, nonatomic) NSObject<CKHandwritingPresentationControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) CKDeviceOrientationManager *deviceOrientationManager; // @synthesize deviceOrientationManager=_deviceOrientationManager;
@property (nonatomic) BOOL foregrounded; // @synthesize foregrounded=_foregrounded;
@property (strong, nonatomic) CKHandwritingWindow *handwritingWindow; // @synthesize handwritingWindow=_handwritingWindow;
@property (nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property (readonly) NSString *pluginBundleID;
@property (strong, nonatomic) CKBrowserItemPayload *pluginPayload;
@property (nonatomic) BOOL requestedVisibility; // @synthesize requestedVisibility=_requestedVisibility;
@property (nonatomic) BOOL requestedVisibilityShouldBeAnimated; // @synthesize requestedVisibilityShouldBeAnimated=_requestedVisibilityShouldBeAnimated;
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *sendDelegate;
@property (nonatomic) BOOL suppressAppearanceCallbacksBecauseOfFirstInitialization; // @synthesize suppressAppearanceCallbacksBecauseOfFirstInitialization=_suppressAppearanceCallbacksBecauseOfFirstInitialization;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;
- (void)_doInitialization;
- (void)_flushHandwritingWindowCacheIfNeeded;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_loadCachedPayloadIntoBrowser;
- (void)_updateVisibilityState;
- (void)dealloc;
- (id)init;
- (BOOL)isHandwritingLandscape;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;

@end

