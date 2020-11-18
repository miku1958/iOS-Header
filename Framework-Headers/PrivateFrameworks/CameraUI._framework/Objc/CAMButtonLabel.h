//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMButtonLabel : UIView
{
    BOOL _wantsLegibilityShadow;
    NSString *_text;
    UILabel *__label;
    struct CGSize _contentSize;
}

@property (readonly, strong, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property (readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL wantsLegibilityShadow; // @synthesize wantsLegibilityShadow=_wantsLegibilityShadow;

- (void).cxx_destruct;
- (void)_updateAttributedText;
- (void)_updateInternalContentSize;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlightedTextColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateToContentSize:(id)arg1;

@end

