//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WebApp/_SFWebAppViewControllerDelegate-Protocol.h>

@class LoadingViewController, NSString, NSTimer, UIWebClip, _SFWebAppViewController, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate>
{
    _SFWebAppViewController *_contentViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    BOOL _hasShownLoadingViewController;
    BOOL _hasCustomScheme;
    LoadingViewController *_loadingViewController;
    long long _orientation;
    NSTimer *_hideSnapshotTimer;
    UIWebClip *_webClip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;

- (void).cxx_destruct;
- (void)_cancelHideSnapshotTimer;
- (void)_connectToService;
- (void)_removeRemoteView;
- (void)_setUpContentViewController:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)dealloc;
- (void)hideLoadingView;
- (id)initWithWebClip:(id)arg1;
- (void)openURLWithCustomSchemeIfNeeded;
- (void)timeLimitForLoadCompletionExpired;
- (void)viewDidAppear:(BOOL)arg1;
- (void)webAppViewController:(id)arg1 didChangeLoadingState:(BOOL)arg2;
- (void)webAppViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(id)arg1;

@end

