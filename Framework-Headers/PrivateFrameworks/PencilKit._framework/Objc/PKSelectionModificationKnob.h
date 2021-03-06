//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface PKSelectionModificationKnob : CALayer
{
    CALayer *_knobLayer;
    CALayer *_knobTailLayer;
    BOOL _isBrushSelecting;
    BOOL _isRTL;
    long long _knobLocation;
    struct CGColor *_knobColor;
}

@property (nonatomic) struct CGColor *knobColor; // @synthesize knobColor=_knobColor;
@property (nonatomic) long long knobLocation; // @synthesize knobLocation=_knobLocation;

- (void).cxx_destruct;
- (BOOL)_isTailFacingDown;
- (double)_knobTailWidth;
- (struct CGRect)_rectForKnob;
- (struct CGRect)_rectForTail;
- (void)_updateKnobAppearance;
- (id)accessibilityIdentifier;
- (BOOL)containsPoint:(struct CGPoint)arg1 inputType:(long long)arg2;
- (void)dealloc;
- (void)didBeginBrushSelection;
- (void)didEndBrushSelection;
- (double)distanceFromKnobCenterToPoint:(struct CGPoint)arg1;
- (id)initWithLocation:(long long)arg1 color:(struct CGColor *)arg2 isRTL:(BOOL)arg3;
- (BOOL)isAccessibilityElement;
- (void)layoutSublayers;

@end

