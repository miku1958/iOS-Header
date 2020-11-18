//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, UIMorphingLabelGlyphSet, _UIViewAnimationAttributes;

@interface UIMorphingLabel : UIView
{
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    UIView *_colorView;
    unsigned long long _alignmentSrc[100];
    unsigned long long _alignmentDst[100];
    BOOL _alignmentIsEqual[100];
    unsigned long long _alignmentSize;
    double _alignmentDelays[100];
    _UIViewAnimationAttributes *_textAnimationAttributes;
    _UIViewAnimationAttributes *_textColorAnimationAttributes;
    double _lastUpdateTime;
    double _slowdown;
    double _rippleFactor;
    double _scaleFactor;
    BOOL _isDoingFastAnimation;
    BOOL _textDidChange;
    BOOL _textColorDidChange;
    BOOL _suppressLayoutSubviews;
    BOOL _enableAnimation;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    double _initialScale;
    double _glyphScaleAnimationSpeed;
    double _rippleDuration;
    struct CGRect _visibleRect;
}

@property (nonatomic) BOOL enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (nonatomic) double glyphScaleAnimationSpeed; // @synthesize glyphScaleAnimationSpeed=_glyphScaleAnimationSpeed;
@property (nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property (nonatomic) double rippleDuration; // @synthesize rippleDuration=_rippleDuration;
@property (nonatomic) BOOL suppressLayoutSubviews; // @synthesize suppressLayoutSubviews=_suppressLayoutSubviews;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;

- (BOOL)_isRTL;
- (double)_rippleDurationForEndInsertion:(BOOL)arg1;
- (double)alphaForFrame:(struct CGRect)arg1;
- (void)animateAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateGlyph:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3 delay:(double)arg4;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint)arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3;
- (void)animateGlyphs;
- (void)animateGlyphsInRange:(struct _NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(double)arg3 delay:(double)arg4;
- (void)animateHideGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateShowGlyph:(id)arg1 alpha:(double)arg2 alphaDuration:(double)arg3 delay:(double)arg4;
- (void)animateShowGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateTextColor;
- (id)attributedString;
- (id)attributedStringForText:(id)arg1;
- (void)baseInit;
- (void)calculateGlyphAlignment;
- (unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)arg1 fromGlyphsInRange:(struct _NSRange)arg2 toGlyphsInRange:(struct _NSRange)arg3;
- (BOOL)canFitText:(id)arg1;
- (double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (double)currentMediaTime;
- (void)dealloc;
- (struct _NSRange)dstRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)flushAmount;
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(BOOL)arg2;
- (void)hideGlyph:(id)arg1;
- (void)initAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)requiredWidthForText:(id)arg1;
- (struct _NSRange)srcRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (id)uniqueStringWithPrefix:(id)arg1;

@end

