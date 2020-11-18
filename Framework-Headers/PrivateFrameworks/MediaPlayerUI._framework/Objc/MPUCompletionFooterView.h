//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <MediaPlayerUI/SKUIItemOfferButtonDelegate-Protocol.h>

@class MPStoreCompletionOffering, MPUItemOfferButton, NSString, UILabel, UISegmentedControl, UITapGestureRecognizer, UIView;
@protocol MPUCompletionFooterViewDelegate;

@interface MPUCompletionFooterView : UITableViewHeaderFooterView <SKUIItemOfferButtonDelegate>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _showsVariants;
    BOOL _purchasing;
    long long _style;
    id<MPUCompletionFooterViewDelegate> _delegate;
    NSString *_title;
    NSString *_completeTitleFormat;
    NSString *_completeSubtitleFormat;
    NSString *_completeMyCollectionTitle;
    NSString *_completionTotalFormat;
    MPStoreCompletionOffering *_completionOffering;
    long long _preferredVariant;
    MPUItemOfferButton *_itemOfferButton;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UISegmentedControl *_variantSegmentedControl;
    struct UIEdgeInsets _contentInsets;
}

@property (strong, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property (copy, nonatomic) NSString *completeMyCollectionTitle; // @synthesize completeMyCollectionTitle=_completeMyCollectionTitle;
@property (copy, nonatomic) NSString *completeSubtitleFormat; // @synthesize completeSubtitleFormat=_completeSubtitleFormat;
@property (copy, nonatomic) NSString *completeTitleFormat; // @synthesize completeTitleFormat=_completeTitleFormat;
@property (strong, nonatomic) MPStoreCompletionOffering *completionOffering; // @synthesize completionOffering=_completionOffering;
@property (copy, nonatomic) NSString *completionTotalFormat; // @synthesize completionTotalFormat=_completionTotalFormat;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPUCompletionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPUItemOfferButton *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property (nonatomic) long long preferredVariant; // @synthesize preferredVariant=_preferredVariant;
@property (nonatomic, getter=isPurchasing) BOOL purchasing; // @synthesize purchasing=_purchasing;
@property (nonatomic) BOOL showsVariants; // @synthesize showsVariants=_showsVariants;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property (strong, nonatomic) UISegmentedControl *variantSegmentedControl; // @synthesize variantSegmentedControl=_variantSegmentedControl;

+ (double)defaultHeight;
- (void).cxx_destruct;
- (void)_buttonCancelConfirmationAction:(id)arg1;
- (void)_buttonPurchaseAction:(id)arg1;
- (void)_buttonShowConfirmationAction:(id)arg1;
- (void)_changedVariants:(id)arg1;
- (void)_configureViewsForCompletionOffering;
- (id)_createItemOfferButton;
- (void)_handleTapGesture:(id)arg1;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSeparatorsWithInset:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;

@end

