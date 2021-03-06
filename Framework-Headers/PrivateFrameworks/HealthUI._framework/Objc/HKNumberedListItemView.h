//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface HKNumberedListItemView : UIView
{
    UILabel *_numberLabel;
    unsigned long long _number;
    UIView *_numberLabelBackground;
}

@property (nonatomic) unsigned long long number; // @synthesize number=_number;
@property (strong, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property (strong, nonatomic) UIView *numberLabelBackground; // @synthesize numberLabelBackground=_numberLabelBackground;

+ (id)createNumberedViewWithInteger:(unsigned long long)arg1;
+ (struct CGSize)listItemSize;
+ (id)numberFont;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)initWithInteger:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;

@end

