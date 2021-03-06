//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface NWCDailyForecastRangeView : UIView
{
    UILabel *_highLabel;
    UILabel *_interpunctLabel;
    UILabel *_lowLabel;
}

@property (readonly, nonatomic) UILabel *highLabel; // @synthesize highLabel=_highLabel;
@property (readonly, nonatomic) UILabel *interpunctLabel; // @synthesize interpunctLabel=_interpunctLabel;
@property (readonly, nonatomic) UILabel *lowLabel; // @synthesize lowLabel=_lowLabel;

- (void).cxx_destruct;
- (void)_applyConstraints:(CDStruct_d83abbfb)arg1;
- (id)_rangeLabelWithFontSize:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

