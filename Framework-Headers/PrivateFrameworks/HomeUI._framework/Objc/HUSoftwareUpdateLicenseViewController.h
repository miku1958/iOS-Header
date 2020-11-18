//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <HomeUI/UIScrollViewDelegate-Protocol.h>
#import <HomeUI/UIWebViewDelegate-Protocol.h>

@class HMHTMLDocument, NAFuture, NSString, NSURL, UIButton, UIScrollView, UIWebView;

@interface HUSoftwareUpdateLicenseViewController : UIViewController <UIScrollViewDelegate, UIWebViewDelegate, MFMailComposeViewControllerDelegate, HUPreloadableViewController>
{
    NSURL *_URL;
    HMHTMLDocument *_document;
    CDUnknownBlockType _agreeHandler;
    CDUnknownBlockType _disagreeHandler;
    UIScrollView *_scrollView;
    UIButton *_emailButton;
    UIWebView *_webView;
    NAFuture *_loadFuture;
}

@property (readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (copy, nonatomic) CDUnknownBlockType agreeHandler; // @synthesize agreeHandler=_agreeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType disagreeHandler; // @synthesize disagreeHandler=_disagreeHandler;
@property (readonly, copy, nonatomic) HMHTMLDocument *document; // @synthesize document=_document;
@property (readonly, nonatomic) UIButton *emailButton; // @synthesize emailButton=_emailButton;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NAFuture *loadFuture; // @synthesize loadFuture=_loadFuture;
@property (readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (void)_agreeToTerms:(id)arg1;
- (void)_disagreeToTerms:(id)arg1;
- (void)_emailTermsAndConditions:(id)arg1;
- (id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (id)hu_preloadContent;
- (id)initWithDocument:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end

