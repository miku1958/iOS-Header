//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView
{
    BOOL _reducedWidth;
    BOOL _inlineRectIsVertical;
    int _position;
    NSString *_inlineText;
    double _maxX;
    double _extendedStateAdditionalHeight;
    struct CGSize _preferredSize;
    struct CGRect _inlineRect;
    struct CGRect _previousCollapsedFrame;
}

@property (nonatomic) double extendedStateAdditionalHeight; // @synthesize extendedStateAdditionalHeight=_extendedStateAdditionalHeight;
@property (nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property (nonatomic) BOOL inlineRectIsVertical; // @synthesize inlineRectIsVertical=_inlineRectIsVertical;
@property (copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property (nonatomic) double maxX; // @synthesize maxX=_maxX;
@property (nonatomic) int position; // @synthesize position=_position;
@property (nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property (nonatomic) struct CGRect previousCollapsedFrame; // @synthesize previousCollapsedFrame=_previousCollapsedFrame;
@property (readonly, nonatomic, getter=isReducedWidth) BOOL reducedWidth; // @synthesize reducedWidth=_reducedWidth;

- (void).cxx_destruct;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3;
- (struct CGRect)adjustedFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(double)arg2;
- (struct CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect)arg2;
- (struct CGRect)convertFromInputDelegateRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAcceptableFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3 layout:(BOOL)arg4;
- (BOOL)shouldExtendUpwards;

@end

