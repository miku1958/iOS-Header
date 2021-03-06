//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUGridStatusCellLayoutOptions, NSArray, NSAttributedString, UIColor;

@interface HUGridStatusCellTextView : UIView
{
    NSAttributedString *_title;
    NSAttributedString *_shortTitle;
    UIColor *_textColor;
    HUGridStatusCellLayoutOptions *_layoutOptions;
    NSArray *_textLines;
}

@property (strong, nonatomic) HUGridStatusCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (readonly, nonatomic) NSAttributedString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (strong, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property (readonly, nonatomic) NSAttributedString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)_commonTextAttributesWithLineBreakMode:(long long)arg1;
- (id)_effectiveTextColor;
- (void)_parseTitleLines;
- (void)drawRect:(struct CGRect)arg1;
- (id)font;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1 shortTitle:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

