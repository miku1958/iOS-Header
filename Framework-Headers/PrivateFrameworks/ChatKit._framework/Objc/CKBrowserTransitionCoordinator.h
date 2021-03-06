//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKFullScreenAppViewControllerDelegate-Protocol.h>

@class CKConversation, CKFullScreenAppViewController, NSString, UINavigationController, UIViewController, UIWindow;
@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate;

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate>
{
    BOOL _expanded;
    BOOL _underTest;
    id<CKBrowserTransitionCoordinatorDelegate> _delegate;
    long long _currentConsumer;
    CKFullScreenAppViewController *_fullscreenViewController;
    UIViewController *_presentingViewController;
    CKConversation *_conversation;
    id<CKBrowserViewControllerSendDelegate> _sendDelegate;
    UIViewController<CKBrowserViewControllerProtocol> *_currentBrowser;
    UIWindow *_appWindow;
    UIWindow *_previousKeyWindow;
    UIWindow *_preModalKeyWindow;
    long long _lastTransitionReason;
    UIWindow *_modalAppWindow;
    UINavigationController *_presentedModalBrowserNavigationController;
    UIViewController<CKBrowserViewControllerProtocol> *_currentModalBrowser;
    struct CGRect _cachedCompactFrame;
}

@property (strong, nonatomic) UIWindow *appWindow; // @synthesize appWindow=_appWindow;
@property (nonatomic) struct CGRect cachedCompactFrame; // @synthesize cachedCompactFrame=_cachedCompactFrame;
@property (strong, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (strong, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser; // @synthesize currentBrowser=_currentBrowser;
@property (nonatomic) long long currentConsumer; // @synthesize currentConsumer=_currentConsumer;
@property (strong, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentModalBrowser; // @synthesize currentModalBrowser=_currentModalBrowser;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKBrowserTransitionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (strong, nonatomic) CKFullScreenAppViewController *fullscreenViewController; // @synthesize fullscreenViewController=_fullscreenViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastTransitionReason; // @synthesize lastTransitionReason=_lastTransitionReason;
@property (strong, nonatomic) UIWindow *modalAppWindow; // @synthesize modalAppWindow=_modalAppWindow;
@property (weak, nonatomic) UIWindow *preModalKeyWindow; // @synthesize preModalKeyWindow=_preModalKeyWindow;
@property (strong, nonatomic) UINavigationController *presentedModalBrowserNavigationController; // @synthesize presentedModalBrowserNavigationController=_presentedModalBrowserNavigationController;
@property (readonly, nonatomic, getter=isPresentingFullScreenModal) BOOL presentingFullScreenModal;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (weak, nonatomic) UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
@property (weak, nonatomic) id<CKBrowserViewControllerSendDelegate> sendDelegate; // @synthesize sendDelegate=_sendDelegate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL underTest; // @synthesize underTest=_underTest;
@property (readonly, nonatomic) BOOL wasCurrentBrowserExpanded;

- (void).cxx_destruct;
- (id)appIconOverride;
- (id)appTitleOverride;
- (void)dismissCurrentFullScreenModalAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentFullscreenBrowserAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3;
- (double)fullscreenAppViewControllerCollapsedContentHeight:(id)arg1;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (BOOL)fullscreenAppViewControllerShouldDismissOnDragSuccess:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (BOOL)isHostingRemoteKeyboardView;
- (id)modalPresentationViewController;
- (void)presentPluginFullScreenModal:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPluginFullScreenModal:(id)arg1 datasource:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)arg1;
- (id)requestOwnershipOfBrowserForConsumer:(long long)arg1;
- (void)setExpanded:(BOOL)arg1 withReason:(long long)arg2;
- (BOOL)shouldAlwaysShowAppTitle;
- (BOOL)shouldPresentModalFromPresentingViewController;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)transitionViewController;
- (BOOL)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2;
- (BOOL)usePresentationWindowDuringTransition;

@end

