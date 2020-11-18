//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/VUILabelBaselineProtocol-Protocol.h>
#import <VideosUI/_UIFloatingContentViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, VUILabel, VUITextLayout, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface FocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, VUILabelBaselineProtocol>
{
    UIColor *_backgroundColor;
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
    BOOL _textTruncating;
    BOOL _moreLabelOnNewLine;
    BOOL _trackHorizontal;
    BOOL _alwaysShowBackground;
    BOOL _alwaysFocusable;
    BOOL _disableFocus;
    BOOL _needsTextSizeComputation;
    VUILabel *_computationLabel;
    UIColor *_descriptionTextColor;
    UIColor *_descriptionTextHighlightColor;
    long long _descriptionTextAlignment;
    UIColor *_highlightBackgroundColor;
    double _moreHighlightPadding;
    UIColor *_moreLabelTextColor;
    double _focusSizeIncrease;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _playHandler;
    UITextView *_descriptionTextView;
    _UIFloatingContentView *_floatingView;
    UIVisualEffectView *_backgroundView;
    UITapGestureRecognizer *_selectRecognizer;
    UITapGestureRecognizer *_playRecognizer;
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;
    VUITextLayout *_textLayout;
    UILabel *_moreLabel;
    struct UIEdgeInsets _padding;
}

@property (nonatomic, getter=isAlwaysFocusable) BOOL alwaysFocusable; // @synthesize alwaysFocusable=_alwaysFocusable;
@property (nonatomic) BOOL alwaysShowBackground; // @synthesize alwaysShowBackground=_alwaysShowBackground;
@property (strong, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) VUILabel *computationLabel; // @synthesize computationLabel=_computationLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSAttributedString *descriptionText;
@property (nonatomic) long long descriptionTextAlignment; // @synthesize descriptionTextAlignment=_descriptionTextAlignment;
@property (strong, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property (strong, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property (strong, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property (nonatomic) BOOL disableFocus; // @synthesize disableFocus=_disableFocus;
@property (strong, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property (nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property (strong, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property (nonatomic) BOOL moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property (readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // @synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer;
@property (strong, nonatomic) UIColor *moreLabelTextColor; // @synthesize moreLabelTextColor=_moreLabelTextColor;
@property (nonatomic) BOOL needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property (strong, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property (strong, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property (copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property (readonly) Class superclass;
@property (strong, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating; // @synthesize textTruncating=_textTruncating;
@property (nonatomic) BOOL trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;

+ (double)cornerRadius;
+ (id)textViewWithAttributedString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
- (void).cxx_destruct;
- (struct CGRect)_moreLabelExclusionPathFrame;
- (struct CGRect)_moreLabelFrame;
- (void)_playButtonAction:(id)arg1;
- (void)_recomputeTextSizeIfNeeded;
- (void)_selectButtonAction:(id)arg1;
- (void)_setNeedsTextSizeComputation;
- (void)_updateBackgroundColors;
- (void)_updateTextColor;
- (void)_updateTextColorsForFocusState:(BOOL)arg1;
- (void)_updateTextColorsIfNeeded;
- (double)baselineOffsetFromBottom;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (struct CGRect)boundingRectForAttributedString:(id)arg1 withWidth:(double)arg2 lines:(unsigned long long)arg3;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
