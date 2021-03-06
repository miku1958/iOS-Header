//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/BSInvalidatable-Protocol.h>
#import <CarPlaySupport/CPBannerDelegate-Protocol.h>
#import <CarPlaySupport/CPDashboardProviding-Protocol.h>
#import <CarPlaySupport/CPSNavigatorObserving-Protocol.h>
#import <CarPlaySupport/CPSSafeAreaDelegate-Protocol.h>
#import <CarPlaySupport/CPSTemplateViewControllerDelegate-Protocol.h>
#import <CarPlaySupport/CPTemplateProviding-Protocol.h>
#import <CarPlaySupport/NSXPCListenerDelegate-Protocol.h>
#import <CarPlaySupport/UINavigationControllerDelegate-Protocol.h>

@class CPSApplicationStateMonitor, CPSBannerSource, CPSDashboardEstimatesViewController, CPSDashboardGuidanceViewController, CPSNowPlayingViewController, CPSOverlayViewController, CPSTabBarViewController, CPSTemplateEnvironment, FBScene, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListener, SiriDirectActionSource, UIViewController, UIWindowScene;
@protocol CPDashboardClientInterface, CPTemplateServiceClientInterface;

@interface CPSTemplateInstance : NSObject <NSXPCListenerDelegate, UINavigationControllerDelegate, CPSTemplateViewControllerDelegate, CPSSafeAreaDelegate, CPBannerDelegate, CPDashboardProviding, CPSNavigatorObserving, CPTemplateProviding, BSInvalidatable>
{
    NSString *_sceneIdentifier;
    CPSOverlayViewController *_overlayViewController;
    FBScene *_scene;
    UIWindowScene *_windowSceneForTemplateApplicationScene;
    UIWindowScene *_windowSceneForMapWidgetScene;
    UIWindowScene *_windowSceneForGuidanceWidgetScene;
    FBScene *_mapWidgetScene;
    CPSDashboardGuidanceViewController *_dashboardGuidanceViewController;
    CPSDashboardEstimatesViewController *_dashboardEstimatesViewController;
    NSXPCListener *_interfaceControllerListener;
    NSXPCConnection *_interfaceControllerConnection;
    id<CPTemplateServiceClientInterface> _interfaceControllerRemoteObjectProxy;
    NSXPCListener *_dashboardControllerListener;
    NSXPCConnection *_dashboardControllerConnection;
    id<CPDashboardClientInterface> _dashboardControllerRemoteObjectProxy;
    NSMutableDictionary *_identifierToViewControllerDictionary;
    CPSBannerSource *_bannerSource;
    UIViewController *_rootViewController;
    CPSApplicationStateMonitor *_applicationStateMonitor;
    NSUUID *_actionSheetIdentifier;
    CPSTabBarViewController *_tabBarViewController;
    CPSNowPlayingViewController *_nowPlayingViewController;
    CPSTemplateEnvironment *_templateEnvironment;
    SiriDirectActionSource *_siriActivationSource;
    struct UIEdgeInsets _currentSafeAreaInsets;
}

@property (copy, nonatomic) NSUUID *actionSheetIdentifier; // @synthesize actionSheetIdentifier=_actionSheetIdentifier;
@property (strong, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property (strong, nonatomic) CPSBannerSource *bannerSource; // @synthesize bannerSource=_bannerSource;
@property (nonatomic) struct UIEdgeInsets currentSafeAreaInsets; // @synthesize currentSafeAreaInsets=_currentSafeAreaInsets;
@property (strong, nonatomic) NSXPCConnection *dashboardControllerConnection; // @synthesize dashboardControllerConnection=_dashboardControllerConnection;
@property (strong, nonatomic) NSXPCListener *dashboardControllerListener; // @synthesize dashboardControllerListener=_dashboardControllerListener;
@property (strong, nonatomic) id<CPDashboardClientInterface> dashboardControllerRemoteObjectProxy; // @synthesize dashboardControllerRemoteObjectProxy=_dashboardControllerRemoteObjectProxy;
@property (readonly, nonatomic) CPSDashboardEstimatesViewController *dashboardEstimatesViewController; // @synthesize dashboardEstimatesViewController=_dashboardEstimatesViewController;
@property (readonly, nonatomic) CPSDashboardGuidanceViewController *dashboardGuidanceViewController; // @synthesize dashboardGuidanceViewController=_dashboardGuidanceViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *identifierToViewControllerDictionary; // @synthesize identifierToViewControllerDictionary=_identifierToViewControllerDictionary;
@property (strong, nonatomic) NSXPCConnection *interfaceControllerConnection; // @synthesize interfaceControllerConnection=_interfaceControllerConnection;
@property (strong, nonatomic) NSXPCListener *interfaceControllerListener; // @synthesize interfaceControllerListener=_interfaceControllerListener;
@property (strong, nonatomic) id<CPTemplateServiceClientInterface> interfaceControllerRemoteObjectProxy; // @synthesize interfaceControllerRemoteObjectProxy=_interfaceControllerRemoteObjectProxy;
@property (weak, nonatomic) FBScene *mapWidgetScene; // @synthesize mapWidgetScene=_mapWidgetScene;
@property (strong, nonatomic) CPSNowPlayingViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
@property (strong, nonatomic) CPSOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property (strong, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property (weak, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property (readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property (strong, nonatomic) SiriDirectActionSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property (readonly) Class superclass;
@property (strong, nonatomic) CPSTabBarViewController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
@property (strong, nonatomic) CPSTemplateEnvironment *templateEnvironment; // @synthesize templateEnvironment=_templateEnvironment;
@property (weak, nonatomic) UIWindowScene *windowSceneForGuidanceWidgetScene; // @synthesize windowSceneForGuidanceWidgetScene=_windowSceneForGuidanceWidgetScene;
@property (weak, nonatomic) UIWindowScene *windowSceneForMapWidgetScene; // @synthesize windowSceneForMapWidgetScene=_windowSceneForMapWidgetScene;
@property (weak, nonatomic) UIWindowScene *windowSceneForTemplateApplicationScene; // @synthesize windowSceneForTemplateApplicationScene=_windowSceneForTemplateApplicationScene;

- (void).cxx_destruct;
- (void)_appViewConnectionInvalidationHandler;
- (void)_applicationDidThrottleAudioUpdates:(id)arg1;
- (void)_dashboardConnectionInvalidationHandler;
- (BOOL)_handleAppViewConnection:(id)arg1;
- (BOOL)_handleDashboardConnection:(id)arg1;
- (BOOL)_templateIsValidForCurrentEntitlement:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)clientRequestNowPlayingTemplateAnimated:(BOOL)arg1;
- (void)containsTemplate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)dashboardEndpoint;
- (void)dealloc;
- (void)didCreateNavigator:(id)arg1;
- (void)dismissTemplateAnimated:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)endpoint;
- (void)getPresentedTemplateWithReply:(CDUnknownBlockType)arg1;
- (void)getTemplatesWithReply:(CDUnknownBlockType)arg1;
- (void)getTopTemplateWithReply:(CDUnknownBlockType)arg1;
- (void)hostSetShortcutButtons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)popTemplateAnimated:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)popToRootTemplateAnimated:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)popToTemplate:(id)arg1 animated:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)presentActionSheetTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)presentAlertTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)presentVoiceTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)pushEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushGridTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushInformationTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushListTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushMapTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushNowPlayingTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushSearchTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestBannerProviderWithReply:(CDUnknownBlockType)arg1;
- (void)requestNavigationProviderForMapTemplate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setHostPrefersDarkUserInterfaceStyle:(BOOL)arg1;
- (void)setTabBarTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3 animated:(id)arg4;
- (void)templateViewController:(id)arg1 shouldActivateSiriWithDirectActionContext:(id)arg2;
- (void)templateViewControllerDidDismiss:(id)arg1;
- (void)templateViewControllerDidPop:(id)arg1;
- (void)updateInterestingInsets:(struct UIEdgeInsets)arg1;
- (void)updateTabBarTemplate:(id)arg1;
- (void)viewController:(id)arg1 didUpdateSafeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)whitelistClassesForBaseTemplateProvider:(id)arg1;

@end

