//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _SKUICounterTimeFieldView : UIView
{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    unsigned long long _visibilityField;
}

@property (readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property (nonatomic) unsigned long long visibilityField; // @synthesize visibilityField=_visibilityField;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

