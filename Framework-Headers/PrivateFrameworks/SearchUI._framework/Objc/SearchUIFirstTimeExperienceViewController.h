//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SearchUI/UITextViewDelegate-Protocol.h>

@class NSString;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate>
{
    id<SearchUIFirstTimeExperienceDelegate> _delegate;
    unsigned long long _supportedDomains;
    NSString *_explanationText;
    NSString *_learnMoreText;
    NSString *_continueButtonTitle;
    NSString *_bundleIdentifier;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSString *continueButtonTitle; // @synthesize continueButtonTitle=_continueButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SearchUIFirstTimeExperienceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *explanationText; // @synthesize explanationText=_explanationText;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *learnMoreText; // @synthesize learnMoreText=_learnMoreText;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedDomains; // @synthesize supportedDomains=_supportedDomains;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)continueButtonPressed;
- (id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5;
- (id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (void)makeViews;
- (void)showPrivacyView;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;

@end

