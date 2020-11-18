//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKSelectionRendering-Protocol.h>

@class CAShapeLayer, NSString, PKStrokeSelection, UIBezierPath;
@protocol PKSelectionRenderingDelegate;

@interface PKSelectionHighlightRenderer : NSObject <PKSelectionRendering>
{
    CAShapeLayer *_highlightLayer;
    PKStrokeSelection *_strokeSelection;
    id<PKSelectionRenderingDelegate> _renderingDelegate;
    UIBezierPath *_lassoPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIBezierPath *lassoPath; // @synthesize lassoPath=_lassoPath;
@property (weak, nonatomic) id<PKSelectionRenderingDelegate> renderingDelegate; // @synthesize renderingDelegate=_renderingDelegate;
@property (strong, nonatomic) PKStrokeSelection *strokeSelection; // @synthesize strokeSelection=_strokeSelection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (id)_bezierPathForStrokes:(id)arg1;
- (void)_didBeginDraggingSelection;
- (void)_didEndDraggingSelection;
- (id)_highlightColor;
- (void)_renderLiveSelectionPath:(const struct CGPath *)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(struct CGPoint)arg4;
- (void)_setupHighlightIfNecessary;
- (void)_setupSelectionAdornment;
- (id)adornmentLayer;
- (struct CGPoint)editMenuLocation;
- (id)initForLiveSelectionWithRenderingDelegate:(id)arg1;
- (id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2;

@end
