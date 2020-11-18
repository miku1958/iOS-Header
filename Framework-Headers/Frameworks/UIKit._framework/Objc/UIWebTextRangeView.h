//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIWebDragDotView;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIWebTextRangeView : UIView
{
    UIView<UITextInput> *m_container;
    NSArray *_rects;
    NSMutableArray *_rectViews;
    UIWebDragDotView *_startDot;
    UIWebDragDotView *_endDot;
    BOOL _magnifying;
}

@property (readonly, nonatomic) UIView<UITextInput> *container;
@property (copy, nonatomic) NSArray *rects; // @synthesize rects=_rects;

- (struct CGRect)boundingRect;
- (void)dealloc;
- (void)doneMagnifying;
- (struct CGPoint)endCorner;
- (struct CGRect)endEdge;
- (BOOL)endIsHorizontal;
- (void)geometryChanged;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)prepareForMagnification;
- (struct CGRect)rectAtIndex:(int)arg1;
- (id)rectViewAtIndex:(int)arg1;
- (void)removeFromSuperview;
- (struct CGPoint)startCorner;
- (struct CGRect)startEdge;
- (BOOL)startIsHorizontal;
- (void)updateDragDots;
- (void)updateRectViews;

@end
