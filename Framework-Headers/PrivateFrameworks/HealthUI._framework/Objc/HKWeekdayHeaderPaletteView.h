//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface HKWeekdayHeaderPaletteView : UIView
{
    NSMutableArray *_weekdayLabels;
}

+ (double)preferredHeight;
+ (id)weekdayFont;
- (void).cxx_destruct;
- (void)_updateFont;
- (double)_xOriginForMonthViewWithIndex:(long long)arg1 itemWidth:(double)arg2 leftMargin:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shouldSupportRTL:(BOOL)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

