//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class HKSelectedRangeLabel, UIColor;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIStackView
{
    HKSelectedRangeLabel *_keyLabel;
    HKSelectedRangeLabel *_valueLabel;
    UIColor *_textColor;
}

@property (readonly, nonatomic) HKSelectedRangeLabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (readonly, nonatomic) HKSelectedRangeLabel *valueLabel; // @synthesize valueLabel=_valueLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
