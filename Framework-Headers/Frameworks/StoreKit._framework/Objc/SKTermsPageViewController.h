//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/UINavigationBarDelegate-Protocol.h>

@class NSString, UINavigationBar, UIToolbar, UIWebView;
@protocol SKTermsPageViewControllerDelegate;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate>
{
    UINavigationBar *_navbar;
    NSString *_terms;
    UIToolbar *_toolbar;
    UIWebView *_webview;
    id<SKTermsPageViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SKTermsPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_buttonAccept:(id)arg1;
- (void)_buttonDecline:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissViewControllerAnimated:(BOOL)arg1;
- (void)_dismissViewControllerAnimated:(BOOL)arg1 withAcceptance:(BOOL)arg2;
- (void)_loadSubviews;
- (id)_markupTermsWithHTML:(id)arg1;
- (void)dealloc;
- (unsigned long long)edgesForExtendedLayout;
- (id)init;
- (id)initWithTerms:(id)arg1;
- (void)loadView;
- (long long)positionForBar:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
