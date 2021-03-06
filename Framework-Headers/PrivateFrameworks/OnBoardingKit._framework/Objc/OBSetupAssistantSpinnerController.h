//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBBaseWelcomeController.h>

#import <OnBoardingKit/OBSetupAssistantSupport-Protocol.h>

@class NSString, OBPrivacyLinkController, UIActivityIndicatorView, UILabel, UIScrollView, UIView;

@interface OBSetupAssistantSpinnerController : OBBaseWelcomeController <OBSetupAssistantSupport>
{
    BOOL _activityIndicatorHidden;
    OBPrivacyLinkController *_privacyLinkController;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    UIScrollView *_scrollView;
    UIView *_scrollContentView;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (nonatomic, getter=isActivityIndicatorHidden) BOOL activityIndicatorHidden; // @synthesize activityIndicatorHidden=_activityIndicatorHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property (strong, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_activityIndicatorViewStyle;
- (BOOL)_shouldUseScrollView;
- (id)_textStyle;
- (void)_updateLayout;
- (void)_updateTextColor;
- (id)initWithSpinnerText:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

