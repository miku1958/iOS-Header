//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WKWebView;
@protocol HUFeedbackConsentViewControllerDelegate;

@interface HUFeedbackConsentViewController : UIViewController
{
    BOOL _isFamilyAndFriendsConsent;
    WKWebView *_consentView;
    id<HUFeedbackConsentViewControllerDelegate> _consentDelegate;
}

@property (strong, nonatomic) id<HUFeedbackConsentViewControllerDelegate> consentDelegate; // @synthesize consentDelegate=_consentDelegate;
@property (strong, nonatomic) WKWebView *consentView; // @synthesize consentView=_consentView;
@property (nonatomic) BOOL isFamilyAndFriendsConsent; // @synthesize isFamilyAndFriendsConsent=_isFamilyAndFriendsConsent;

- (void).cxx_destruct;
- (id)consentFormFilePath;
- (void)dealloc;
- (void)didAcceptConsent;
- (void)didDeclineConsent;
- (id)htmlString;
- (id)initWithConsentDelegate:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end

