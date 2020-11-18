//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class OBPrivacyLinkButton, UIImageView, UITextView;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController
{
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;
- (void)loadView;
- (void)processBundlesForTitleInformation;
- (void)setLinkEnabled:(BOOL)arg1;

@end
