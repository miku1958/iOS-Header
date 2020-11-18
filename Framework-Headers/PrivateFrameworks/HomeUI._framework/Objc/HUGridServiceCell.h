//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>

@class HFItem, HUGridServiceCellLayoutOptions, HUGridServiceCellTextView, HUIconView, HUVisualEffectContainerView, NSString, UIActivityIndicatorView, UILabel, UIView;
@protocol NACancelable;

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol>
{
    BOOL _shouldColorDescription;
    BOOL _shouldShowLoadingState;
    BOOL _hasUpdatedUISinceLastReuse;
    BOOL _showingUpdatingState;
    BOOL _showingProgressIndicator;
    HFItem *_serviceItem;
    UIView *_accessoryView;
    HUIconView *_iconView;
    HUGridServiceCellTextView *_serviceTextView;
    UILabel *_coloredDescriptionLabel;
    id<NACancelable> _showUpdatingStateAfterDelayToken;
    id<NACancelable> _showProgressIndicatorAfterDelayToken;
    UIView *_overrideAccessoryView;
    UIActivityIndicatorView *_activityIndicator;
    HUVisualEffectContainerView *_exclamationView;
}

@property (strong, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (strong, nonatomic) UILabel *coloredDescriptionLabel; // @synthesize coloredDescriptionLabel=_coloredDescriptionLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (strong, nonatomic) HUVisualEffectContainerView *exclamationView; // @synthesize exclamationView=_exclamationView;
@property (nonatomic) BOOL hasUpdatedUISinceLastReuse; // @synthesize hasUpdatedUISinceLastReuse=_hasUpdatedUISinceLastReuse;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) HUGridServiceCellLayoutOptions *layoutOptions; // @dynamic layoutOptions;
@property (strong, nonatomic) UIView *overrideAccessoryView; // @synthesize overrideAccessoryView=_overrideAccessoryView;
@property (strong, nonatomic) HFItem *serviceItem; // @synthesize serviceItem=_serviceItem;
@property (strong, nonatomic) HUGridServiceCellTextView *serviceTextView; // @synthesize serviceTextView=_serviceTextView;
@property (nonatomic) BOOL shouldColorDescription; // @synthesize shouldColorDescription=_shouldColorDescription;
@property (nonatomic) BOOL shouldShowLoadingState; // @synthesize shouldShowLoadingState=_shouldShowLoadingState;
@property (nonatomic) BOOL showProgressIndicatorAfterDelay;
@property (strong, nonatomic) id<NACancelable> showProgressIndicatorAfterDelayToken; // @synthesize showProgressIndicatorAfterDelayToken=_showProgressIndicatorAfterDelayToken;
@property (nonatomic) BOOL showUpdatingStateAfterDelay;
@property (strong, nonatomic) id<NACancelable> showUpdatingStateAfterDelayToken; // @synthesize showUpdatingStateAfterDelayToken=_showUpdatingStateAfterDelayToken;
@property (nonatomic) BOOL showingProgressIndicator; // @synthesize showingProgressIndicator=_showingProgressIndicator;
@property (nonatomic) BOOL showingUpdatingState; // @synthesize showingUpdatingState=_showingUpdatingState;
@property (readonly) Class superclass;

+ (id)_iconTintColor;
+ (Class)layoutOptionsClass;
- (void).cxx_destruct;
- (void)_createExclamationViewIfNecessary;
- (void)_getDescription:(id *)arg1 nameTextColor:(id *)arg2 descriptionTextColor:(id *)arg3 forPrimaryState:(long long)arg4;
- (void)_setServiceItem:(id)arg1 updateUI:(BOOL)arg2;
- (void)_setupServiceCell;
- (void)_updateAccessoryView;
- (void)_updateIconWithPrimaryState:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateSecondaryContentDisplayStyle;
- (void)_updateTextWithPrimaryState:(long long)arg1;
- (void)_updateUIWithAnimation:(BOOL)arg1 overridePrimaryState:(long long)arg2;
- (void)contentEffectDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setItem:(id)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
