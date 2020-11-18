//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class UIColor;

@interface PXCMMSpec : PXFeatureSpec
{
    unsigned long long _activityType;
    struct UIColor *_reviewBackgroundColor;
    long long _reviewGridContentMode;
    double _reviewHeaderTopInset;
    double _reviewHeaderCornerRadius;
    double _reviewBannerHeight;
    double _reviewSendBackFooterHeight;
    double _reviewFooterBottomInset;
    double _reviewSectionHeaderHeight;
    UIColor *_composeRecipientViewBackgroundColor;
    double _composeTableViewCellHeight;
    double _composeTableViewCellInset;
    double _composeCornerRadius;
    double _composePrivacyMessageInset;
    double _composeHeaderVerticalPadding;
    double _bubbleStatusIconCornerRadius;
    struct CGSize _reviewGridInterItemSpacing;
    struct CGSize _reviewGridItemSize;
    struct CGSize _composeTableViewCellImageViewSize;
    struct UIEdgeInsets _reviewContentInsets;
    struct UIEdgeInsets _reviewSafeAreaInsets;
    struct UIEdgeInsets _reviewGridContentInsets;
    struct UIEdgeInsets _composeHeaderLabelMargins;
    struct UIEdgeInsets _composeFooterInsets;
    struct UIEdgeInsets _composeFooterMargins;
}

@property (readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property (readonly, nonatomic) UIColor *bubbleBackgroundColor;
@property (readonly, nonatomic) double bubbleStatusIconCornerRadius; // @synthesize bubbleStatusIconCornerRadius=_bubbleStatusIconCornerRadius;
@property (readonly, nonatomic) double composeCornerRadius; // @synthesize composeCornerRadius=_composeCornerRadius;
@property (readonly, nonatomic) struct UIEdgeInsets composeFooterInsets; // @synthesize composeFooterInsets=_composeFooterInsets;
@property (readonly, nonatomic) struct UIEdgeInsets composeFooterMargins; // @synthesize composeFooterMargins=_composeFooterMargins;
@property (readonly, nonatomic) struct UIEdgeInsets composeHeaderLabelMargins; // @synthesize composeHeaderLabelMargins=_composeHeaderLabelMargins;
@property (readonly, nonatomic) double composeHeaderVerticalPadding; // @synthesize composeHeaderVerticalPadding=_composeHeaderVerticalPadding;
@property (readonly, nonatomic) double composePrivacyMessageInset; // @synthesize composePrivacyMessageInset=_composePrivacyMessageInset;
@property (readonly, nonatomic) UIColor *composeRecipientViewBackgroundColor; // @synthesize composeRecipientViewBackgroundColor=_composeRecipientViewBackgroundColor;
@property (readonly, nonatomic) double composeTableViewCellHeight; // @synthesize composeTableViewCellHeight=_composeTableViewCellHeight;
@property (readonly, nonatomic) struct CGSize composeTableViewCellImageViewSize; // @synthesize composeTableViewCellImageViewSize=_composeTableViewCellImageViewSize;
@property (readonly, nonatomic) double composeTableViewCellInset; // @synthesize composeTableViewCellInset=_composeTableViewCellInset;
@property (readonly, nonatomic) UIColor *reviewBackgroundColor; // @synthesize reviewBackgroundColor=_reviewBackgroundColor;
@property (readonly, nonatomic) double reviewBannerHeight; // @synthesize reviewBannerHeight=_reviewBannerHeight;
@property (readonly, nonatomic) struct UIEdgeInsets reviewContentInsets; // @synthesize reviewContentInsets=_reviewContentInsets;
@property (readonly, nonatomic) double reviewFooterBottomInset; // @synthesize reviewFooterBottomInset=_reviewFooterBottomInset;
@property (readonly, nonatomic) struct UIEdgeInsets reviewGridContentInsets; // @synthesize reviewGridContentInsets=_reviewGridContentInsets;
@property (readonly, nonatomic) long long reviewGridContentMode; // @synthesize reviewGridContentMode=_reviewGridContentMode;
@property (readonly, nonatomic) struct CGSize reviewGridInterItemSpacing; // @synthesize reviewGridInterItemSpacing=_reviewGridInterItemSpacing;
@property (readonly, nonatomic) struct CGSize reviewGridItemSize; // @synthesize reviewGridItemSize=_reviewGridItemSize;
@property (readonly, nonatomic) double reviewHeaderCornerRadius; // @synthesize reviewHeaderCornerRadius=_reviewHeaderCornerRadius;
@property (readonly, nonatomic) double reviewHeaderTopInset; // @synthesize reviewHeaderTopInset=_reviewHeaderTopInset;
@property (readonly, nonatomic) struct UIEdgeInsets reviewSafeAreaInsets; // @synthesize reviewSafeAreaInsets=_reviewSafeAreaInsets;
@property (readonly, nonatomic) double reviewSectionHeaderHeight; // @synthesize reviewSectionHeaderHeight=_reviewSectionHeaderHeight;
@property (readonly, nonatomic) double reviewSendBackFooterHeight; // @synthesize reviewSendBackFooterHeight=_reviewSendBackFooterHeight;

+ (double)maxBubbleWidthForDisplayScale:(double)arg1;
- (void).cxx_destruct;
- (double)_composeTableViewCellHeight;
- (double)_reviewSectionHeaderHeightForContentSize:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3;

@end

