//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicNavigationController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>
#import <FuseUI/MusicJSWelcomeNativeViewControllerDelegate-Protocol.h>

@class MusicClientContext, MusicWelcomePlaceholderView, NSMutableArray, NSString, SKUIClientContext;
@protocol MusicWelcomeNavigationControllerDisappearanceObserver;

@interface MusicWelcomeNavigationController : MusicNavigationController <MusicJSWelcomeNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming>
{
    NSMutableArray *_queuedNativeViewEvents;
    BOOL _registeredWithModalNavigationStackRegistry;
    MusicWelcomePlaceholderView *_welcomePlaceholderView;
    MusicClientContext *_clientContext;
    id<MusicWelcomeNavigationControllerDisappearanceObserver> _disappearanceObserver;
    long long _presentationReason;
}

@property (strong, nonatomic) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<MusicWelcomeNavigationControllerDisappearanceObserver> disappearanceObserver; // @synthesize disappearanceObserver=_disappearanceObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long presentationReason; // @synthesize presentationReason=_presentationReason;
@property (readonly) Class superclass;

+ (BOOL)automaticallyInstallAccountBarButtonItem;
+ (BOOL)automaticallyInstallSearchBarButtonItem;
- (void).cxx_destruct;
- (void)_dispatchNativeViewEventOfType:(long long)arg1;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withInfo:(id)arg2;
- (void)_handleClientDidLoadNotification:(id)arg1;
- (id)_loadEventExtraInfo;
- (void)_setRegisteredWithModalNavigationStackRegistry:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)jsDidCloseWelcomeNativeViewController:(id)arg1 withOptions:(id)arg2;
- (void)jsWelcomeNativeViewController:(id)arg1 setWelcomeDocument:(id)arg2 options:(id)arg3;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

