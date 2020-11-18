//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSAttributedString, NSMutableIndexSet, UIColor;
@protocol SGTappableTextViewDelegate;

@interface SGTappableTextView : UITextView
{
    UIColor *_activeRangeNormalColor;
    UIColor *_activeRangeHighlightedColor;
    NSAttributedString *_clientText;
    NSMutableIndexSet *_activeRanges;
    struct _NSRange _trackingRange;
    BOOL _trackingRangeHighlighted;
    BOOL _needsLabelUpdate;
    long long _currentStyle;
    id<SGTappableTextViewDelegate> _tappableDelegate;
}

@property (strong, nonatomic) UIColor *activeRangeHighlightedColor;
@property (strong, nonatomic) UIColor *activeRangeNormalColor;
@property (readonly, nonatomic) struct CGRect activeRangesRect;
@property (readonly, nonatomic) BOOL hasActiveRanges;
@property (weak, nonatomic) id<SGTappableTextViewDelegate> tappableDelegate; // @synthesize tappableDelegate=_tappableDelegate;

- (void).cxx_destruct;
- (unsigned long long)_characterIndexAtPoint:(struct CGPoint)arg1;
- (void)_commonInit;
- (void)_highlightTrackingRange:(BOOL)arg1;
- (struct _NSRange)_rangeAtPoint:(struct CGPoint)arg1;
- (void)_setNeedUpdateLabel;
- (id)_textColor;
- (void)_updateAttributedTextColor;
- (void)_updateCurrentAppearance;
- (void)_updateLabelIfNeeded;
- (void)addActiveRange:(struct _NSRange)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (void)removeActiveRange:(struct _NSRange)arg1;
- (void)removeAllActiveRanges;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTrackingRange:(struct _NSRange)arg1;
- (id)text;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct _NSRange)trackingRange;

@end
