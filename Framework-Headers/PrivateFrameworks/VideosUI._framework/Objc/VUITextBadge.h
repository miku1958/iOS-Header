//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface VUITextBadge : UIView
{
    int _textBlendMode;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    double _strokeSize;
    double _cornerRadius;
    UIImage *_backgroundImage;
    unsigned long long _badgeStyle;
    UIColor *_tintColor;
    double _fontSize;
    struct UIEdgeInsets _badgeInsets;
}

@property (copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property (strong, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property (nonatomic) struct UIEdgeInsets badgeInsets; // @synthesize badgeInsets=_badgeInsets;
@property (nonatomic) unsigned long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property (nonatomic) double strokeSize; // @synthesize strokeSize=_strokeSize;
@property (nonatomic) int textBlendMode; // @synthesize textBlendMode=_textBlendMode;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)attributedTextFromString:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3;
- (void).cxx_destruct;
- (struct CGSize)_textSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithAttributedString:(id)arg1 tintColor:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
