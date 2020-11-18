//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class TLKStackView, TLKVibrantLabel;

@interface TLKSelectableGridButton : UIButton
{
    unsigned long long _style;
    TLKVibrantLabel *_topLabel;
    TLKVibrantLabel *_bottomLabel;
    TLKStackView *_stackView;
}

@property (strong) TLKVibrantLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property (strong) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (strong) TLKVibrantLabel *topLabel; // @synthesize topLabel=_topLabel;

+ (id)selectableGridButton;
- (void).cxx_destruct;
- (id)_selectionColor;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

@end

