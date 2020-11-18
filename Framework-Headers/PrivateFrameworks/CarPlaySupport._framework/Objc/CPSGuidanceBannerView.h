//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSBannerView.h>

@class CPSAbridgableLabel, SBUIStarkBannerViewButton, UIImageView;

@interface CPSGuidanceBannerView : CPSBannerView
{
    SBUIStarkBannerViewButton *_actionButton;
    UIImageView *_applicationIconImageView;
    UIImageView *_guidanceImageView;
    CPSAbridgableLabel *_guidanceTextLabel;
    CPSAbridgableLabel *_guidanceDetailTextLabel;
    long long _currentInterfaceStyle;
}

@property (strong, nonatomic) SBUIStarkBannerViewButton *actionButton; // @synthesize actionButton=_actionButton;
@property (strong, nonatomic) UIImageView *applicationIconImageView; // @synthesize applicationIconImageView=_applicationIconImageView;
@property (nonatomic) long long currentInterfaceStyle; // @synthesize currentInterfaceStyle=_currentInterfaceStyle;
@property (strong, nonatomic) CPSAbridgableLabel *guidanceDetailTextLabel; // @synthesize guidanceDetailTextLabel=_guidanceDetailTextLabel;
@property (strong, nonatomic) UIImageView *guidanceImageView; // @synthesize guidanceImageView=_guidanceImageView;
@property (strong, nonatomic) CPSAbridgableLabel *guidanceTextLabel; // @synthesize guidanceTextLabel=_guidanceTextLabel;

- (void).cxx_destruct;
- (void)_setGuidanceImageViewForImageSet:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBannerWithBannerItem:(id)arg1;

@end

