//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimeZone, UIColor, UIFont, UILabel;

@interface MTUIDateLabel : UIView
{
    NSTimeZone *_timeZone;
    NSDate *_date;
    UILabel *_dateLabel;
    NSString *_dateLabelText;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_timeDesignatorFont;
}

@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property (copy, nonatomic) NSString *dateLabelText; // @synthesize dateLabelText=_dateLabelText;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (strong, nonatomic) UIFont *timeDesignatorFont; // @synthesize timeDesignatorFont=_timeDesignatorFont;
@property (strong, nonatomic) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_fontInfoForBaselineSpacing;
- (BOOL)_hasFontInfoForVerticalBaselineSpacing;
- (void)_updateDateString;
- (void)_updateLabel;
- (void)_updateTextString;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

