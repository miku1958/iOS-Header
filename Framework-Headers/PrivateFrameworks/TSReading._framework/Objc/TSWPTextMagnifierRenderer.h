//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;
@protocol TSWPTextMagnifierRendererDelegate;

@interface TSWPTextMagnifierRenderer : UIView
{
    id<TSWPTextMagnifierRendererDelegate> _delegate;
    CALayer *_underlayLayer;
    CALayer *_canvasLayer;
    CALayer *_overlayLayer;
    int _autoscrollDirections;
}

@property (nonatomic) int autoscrollDirections; // @synthesize autoscrollDirections=_autoscrollDirections;
@property (nonatomic) id<TSWPTextMagnifierRendererDelegate> delegate; // @synthesize delegate=_delegate;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)canvasNeedsDisplay;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)p_createChildLayer;
- (void)setNeedsDisplay;
- (void)tearDown;

@end

