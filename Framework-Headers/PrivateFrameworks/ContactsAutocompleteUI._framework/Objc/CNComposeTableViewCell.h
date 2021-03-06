//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

#import <ContactsAutocompleteUI/NUIContainerViewDelegate-Protocol.h>

@class CNComposeRecipient, NSString, NUIContainerStackView, UIColor, UILabel;

@interface CNComposeTableViewCell : NUITableViewContainerCell <NUIContainerViewDelegate>
{
    CNComposeRecipient *_recipient;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIColor *_labelColor;
    double _trailingButtonMidlineInsetFromLayoutMargin;
    double _trailingButtonWidth;
    NUIContainerStackView *_labelViewStack;
}

@property (readonly, nonatomic) BOOL canCollapseRecipient;
@property (readonly, nonatomic) BOOL canExpandRecipient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property (strong, nonatomic) NUIContainerStackView *labelViewStack; // @synthesize labelViewStack=_labelViewStack;
@property (strong, nonatomic) CNComposeRecipient *recipient; // @synthesize recipient=_recipient;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAvatarView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin; // @synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin;
@property (readonly, nonatomic) double trailingButtonWidth; // @synthesize trailingButtonWidth=_trailingButtonWidth;

+ (double)additionalSeparatorInset;
+ (id)axCappedFontWithTextStyle:(id)arg1 bold:(BOOL)arg2;
+ (id)axCappedSymbolConfigurationIsBold:(BOOL)arg1;
+ (Class)containerViewClass;
+ (id)identifier;
+ (void)requireIntrinsicSizeForView:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelWithTextStyle:(id)arg1;
- (void)labelsChangedWidth:(double)arg1;
- (void)layoutMarginsDidChange;
- (double)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets)arg1;
- (id)titleTextStyle;

@end

