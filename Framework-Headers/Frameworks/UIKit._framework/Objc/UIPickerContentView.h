//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface UIPickerContentView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_checkView;
    struct {
        unsigned int checked:1;
        unsigned int highlighted:1;
    } _pickerContentViewFlags;
}

@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly, nonatomic) UILabel *titleLabel;

+ (double)_checkmarkOffset;
- (void).cxx_destruct;
- (BOOL)_isSelectable;
- (id)checkedColor;
- (BOOL)isHighlighted;
- (double)labelWidthForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;

@end
