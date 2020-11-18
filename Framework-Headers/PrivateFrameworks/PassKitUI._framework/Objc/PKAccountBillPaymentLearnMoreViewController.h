//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKViewController.h>

#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class NSArray, NSString, PKAccount, UILabel, UIScrollView, UITextView;

@interface PKAccountBillPaymentLearnMoreViewController : PKViewController <UITextViewDelegate>
{
    PKAccount *_account;
    UIScrollView *_scrollView;
    NSString *_titleText;
    NSString *_subtitleText;
    NSArray *_suggestionDescriptions;
    NSArray *_footnotes;
    NSString *_customerAgreementText;
    NSString *_customerAgreementLinkText;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSArray *_suggestionDescriptionLabels;
    NSArray *_footnoteLabels;
    UITextView *_customerAgreementTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customerAgreementAttributedString;
- (void)doneButtonTapped;
- (id)initWithAccount:(id)arg1;
- (void)loadView;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)viewDidLayoutSubviews;

@end

