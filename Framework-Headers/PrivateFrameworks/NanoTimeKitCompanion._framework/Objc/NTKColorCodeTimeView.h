//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSCalendar, NSDate;

@interface NTKColorCodeTimeView : UIView
{
    NSArray *_colorViews;
    NSArray *_digitToColor;
    NSCalendar *_cal;
    NSDate *_date;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end

