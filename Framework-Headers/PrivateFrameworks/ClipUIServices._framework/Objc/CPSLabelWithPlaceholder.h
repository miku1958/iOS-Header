//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CPSLabelWithPlaceholder : UILabel
{
    UIView *_placeholderView;
    NSString *_text;
    UIColor *_placeholderColor;
    double _placeholderWidth;
}

@property (strong, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property (nonatomic) double placeholderWidth; // @synthesize placeholderWidth=_placeholderWidth;

- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGSize)_desiredPlaceholderSize;
- (void)_placeholderInputsDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

