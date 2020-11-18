//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIScrollView, UIView;

@interface FAExplainAppleIDViewController : UIViewController
{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_goToSettingsButton;
    BOOL _shouldShowInviteeInstructions;
}

@property (nonatomic) BOOL shouldShowInviteeInstructions; // @synthesize shouldShowInviteeInstructions=_shouldShowInviteeInstructions;

- (void).cxx_destruct;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (void)_updateFonts;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
