//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, _SKUIItemBrowseCellContentView;

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout
{
    _SKUIItemBrowseCellContentView *_cellContentView;
    struct CGSize _imageBoundingSize;
    BOOL _largeSpacing;
    long long _numberOfUserRatings;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    double _userRating;
}

@property (copy, nonatomic) NSString *category;
@property (nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property (copy, nonatomic) NSString *indexNumberString;
@property (nonatomic, getter=isLargeSpacing) BOOL largeSpacing; // @synthesize largeSpacing=_largeSpacing;
@property (nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double userRating; // @synthesize userRating=_userRating;

- (void).cxx_destruct;
- (id)_decimalNumberFormatter;
- (void)_initSKUIItemBrowseCellLayout;
- (void)_reloadUserRatingViews;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (void)layoutForItemOfferChange;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setIconImage:(id)arg1;

@end
