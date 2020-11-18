//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSArray, NSString, NSURL, PKLinkedAppUserRatingView, PKLinkedApplication, UIActivityIndicatorView, UIButton, UIColor, UIImageView, UILabel;

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver>
{
    UIImageView *_iconView;
    UILabel *_appName;
    UIButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
    PKLinkedApplication *_linkedApplication;
    UIColor *_mainLabelColor;
    UIColor *_subTextLabelColor;
}

@property (copy, nonatomic) NSURL *appLaunchURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
@property (nonatomic) UIColor *mainLabelColor; // @synthesize mainLabelColor=_mainLabelColor;
@property (copy, nonatomic) NSArray *storeIDs;
@property (nonatomic) UIColor *subTextLabelColor; // @synthesize subTextLabelColor=_subTextLabelColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_cleanupViews;
- (void)_layoutLoadingView;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)reloadApplicationStateIfNecessary;
- (void)setApplicationIcon:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setPrice:(id)arg1;

@end
