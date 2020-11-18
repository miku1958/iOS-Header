//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMapItem, NSAttributedString, NSDictionary, NSString, UIColor, UIFont;
@protocol MKInfoCardTheme;

@protocol MKRatingStringProvider <NSObject>
+ (NSAttributedString *)carPlayHeaderStringForMapItem:(MKMapItem *)arg1 titleAttributes:(NSDictionary *)arg2 providerAttributes:(NSDictionary *)arg3;
+ (NSAttributedString *)ratingAndReviewSummaryAttributedStringForMapItem:(MKMapItem *)arg1 textColor:(UIColor *)arg2 font:(UIFont *)arg3 theme:(id<MKInfoCardTheme>)arg4;
+ (UIColor *)ratingColorForMapItem:(MKMapItem *)arg1;
+ (NSAttributedString *)ratingSummaryAttributedStringForMapItem:(MKMapItem *)arg1 textColor:(UIColor *)arg2 font:(UIFont *)arg3 theme:(id<MKInfoCardTheme>)arg4;
+ (NSString *)ratingSymbolName;
@end
