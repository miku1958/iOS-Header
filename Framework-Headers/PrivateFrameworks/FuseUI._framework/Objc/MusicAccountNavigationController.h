//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicNavigationController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicJSAccountNativeViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>

@class MusicClientContext, NSString, SKUIClientContext;

@interface MusicAccountNavigationController : MusicNavigationController <MusicJSAccountNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming>
{
    BOOL _registeredWithModalNavigationStackRegistry;
    MusicClientContext *_clientContext;
}

@property (strong, nonatomic) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)automaticallyInstallAccountBarButtonItem;
+ (BOOL)automaticallyInstallSearchBarButtonItem;
- (void).cxx_destruct;
- (void)_setRegisteredWithModalNavigationStackRegistry:(BOOL)arg1;
- (void)jsAccountNativeViewController:(id)arg1 setAccountDocument:(id)arg2 options:(id)arg3;
- (void)jsDidCloseAccountNativeViewController:(id)arg1;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

