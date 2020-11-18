//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import <SafariServices/_SFDialogViewPresenting-Protocol.h>
#import <SafariServices/_SFKillWebContentProcessUIActivityDelegate-Protocol.h>

@class NSString, NSTimer, UIImageView, UIView, _SFDialogView;
@protocol _SFWebViewDelegate;

@interface _SFWebView : WKWebView <_SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate>
{
    _SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    long long _navigationGesturePolicy;
    id<_SFWebViewDelegate> _delegate;
    UIView *_clippingView;
    struct UIEdgeInsets _hitTestInsets;
}

@property (weak, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *evOrganizationName;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
@property (nonatomic) long long navigationGesturePolicy; // @synthesize navigationGesturePolicy=_navigationGesturePolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (id)_enclosingViewForExposedRectComputation;
- (struct __SecTrust *)_serverTrust;
- (void)_setObscuredInsets:(struct UIEdgeInsets)arg1;
- (void)_updateNavigationGesturesAllowed;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;
- (void)safariKillWebContentProcessUIActivityKillWebProcess:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (int)webProcessIDForDialogController:(id)arg1;

@end

