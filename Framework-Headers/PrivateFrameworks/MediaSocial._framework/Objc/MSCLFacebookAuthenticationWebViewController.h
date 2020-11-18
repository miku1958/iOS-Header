//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaSocial/UIWebViewDelegate-Protocol.h>

@class NSArray, NSString, UIActivityIndicatorView, UIWebView;

@interface MSCLFacebookAuthenticationWebViewController : UIViewController <UIWebViewDelegate>
{
    BOOL _didInterruptRedirect;
    NSString *_token;
    BOOL _authenticating;
    NSString *_clientID;
    NSArray *_writePermissions;
    CDUnknownBlockType _authenticationCompletionBlock;
    UIWebView *_webView;
    UIActivityIndicatorView *_activityIndicator;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (readonly, nonatomic, getter=isAuthenticating) BOOL authenticating; // @synthesize authenticating=_authenticating;
@property (copy, nonatomic) CDUnknownBlockType authenticationCompletionBlock; // @synthesize authenticationCompletionBlock=_authenticationCompletionBlock;
@property (readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property (readonly, copy, nonatomic) NSArray *writePermissions; // @synthesize writePermissions=_writePermissions;

+ (id)authenticationURLWithClientID:(id)arg1 permissions:(id)arg2;
- (void).cxx_destruct;
- (void)cancelAuthenticationProcess;
- (void)endAuthenticationProcessWithError:(id)arg1;
- (id)initWithClientID:(id)arg1 writePermissions:(id)arg2;
- (void)startAuthenticationProcess;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end

