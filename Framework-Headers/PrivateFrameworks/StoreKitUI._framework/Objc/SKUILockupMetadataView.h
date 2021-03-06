//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIBadgeLabel, SKUIClientContext, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupMetadataView : UIView
{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    SKUIClientContext *_clientContext;
    SKUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_itemCountLabel;
    UILabel *_itemOfferLabel;
    long long _numberOfUserRatings;
    UILabel *_releaseDateLabel;
    UIColor *_textColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    unsigned long long _visibleFields;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryString;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (copy, nonatomic) NSString *editorialBadgeString;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *itemOfferString;
@property (nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property (readonly, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_textColor;
@property (copy, nonatomic) NSString *releaseDateString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating; // @synthesize userRating=_userRating;
@property (nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;

+ (double)maximumHeightWithVisibleFields:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_decimalNumberFormatter;
- (id)_newDefaultLabel;
- (void)_reloadUserRatingViews;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

