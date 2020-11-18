//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface _TVLabel : UILabel
{
    long long _previousNumberOfLines;
    struct CGSize _cachedSizeThatFits;
    struct CGSize _previousTargetSize;
    struct UIEdgeInsets _padding;
    struct CGRect _cachedTextRectForBounds;
    struct CGRect _previousBounds;
}

@property (nonatomic) struct CGSize cachedSizeThatFits; // @synthesize cachedSizeThatFits=_cachedSizeThatFits;
@property (nonatomic) struct CGRect cachedTextRectForBounds; // @synthesize cachedTextRectForBounds=_cachedTextRectForBounds;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (nonatomic) struct CGRect previousBounds; // @synthesize previousBounds=_previousBounds;
@property (nonatomic) long long previousNumberOfLines; // @synthesize previousNumberOfLines=_previousNumberOfLines;
@property (nonatomic) struct CGSize previousTargetSize; // @synthesize previousTargetSize=_previousTargetSize;

- (void)_clearCachedValues;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;

@end
