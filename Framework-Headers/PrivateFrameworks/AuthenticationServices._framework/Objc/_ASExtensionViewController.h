//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AuthenticationServices/_ASExtensionHostContextDelegate-Protocol.h>

@class NSExtension, NSExtensionContext, NSString, NSTimer;
@protocol _ASExtensionHostContext;

@interface _ASExtensionViewController : UIViewController <_ASExtensionHostContextDelegate>
{
    UIViewController *_remoteViewController;
    NSExtensionContext<_ASExtensionHostContext> *_nonUIHostContext;
    NSTimer *_nonUIRequestTimer;
    BOOL _allowRequestingUIFromNonUIRequest;
    BOOL _dismissOnBackground;
    NSExtension *_extension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissOnBackground; // @synthesize dismissOnBackground=_dismissOnBackground;
@property (readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSExtensionContext *nonUIHostContext; // @synthesize nonUIHostContext=_nonUIHostContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginNonUIRequest:(BOOL)arg1 connectionHandler:(CDUnknownBlockType)arg2;
- (void)_beginRequestWithConnectionHandler:(CDUnknownBlockType)arg1;
- (void)_extensionRequestDidFinish:(BOOL)arg1;
- (void)_invalidateNonUIRequestTimerIfNeeded;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_nonUIRequestTimedOut;
- (void)_requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setRemoteViewController:(id)arg1;
- (BOOL)_shouldUseNonUIRequestTimer;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)initWithExtension:(id)arg1;
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
