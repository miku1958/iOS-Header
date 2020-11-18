//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SafariServices/MPVolumeDisplaying-Protocol.h>
#import <SafariServices/SFRemoteViewControllerProtocol-Protocol.h>

@class NSString, UIWindowScene;
@protocol SFBrowserRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFBrowserRemoteViewController : _UIRemoteViewController <MPVolumeDisplaying, SFRemoteViewControllerProtocol>
{
    BOOL _isInFullScreen;
    id<SFBrowserRemoteViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFBrowserRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)_sf_sceneDidEnterBackground:(id)arg1;
- (void)_sf_sceneWillEnterForeground:(id)arg1;
- (void)didChangeFullScreen:(BOOL)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2;
- (void)didDecideShouldShowLinkPreviews:(BOOL)arg1;
- (void)didFinishInitialLoad:(BOOL)arg1;
- (void)didLoadWebView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willOpenCurrentPageInBrowser;
- (void)willOpenURLInHostApplication:(id)arg1;

@end
