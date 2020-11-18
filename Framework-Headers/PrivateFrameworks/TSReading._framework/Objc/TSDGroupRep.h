//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContainerRep.h>

#import <TSReading/TSDMagicMoveMatching-Protocol.h>

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
{
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
- (id)allRepsContainedInGroup;
- (struct CGRect)clipRect;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)intersectsUnscaledRect:(struct CGRect)arg1;
- (BOOL)isDraggable;
- (Class)layerClass;
- (void)processChangedProperty:(int)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (struct CGColor *)selectionHighlightColor;
- (void)setNeedsDisplay;
- (BOOL)shouldShowCommentHighlight;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)wantsToHandleTapsWhenLocked;

@end
