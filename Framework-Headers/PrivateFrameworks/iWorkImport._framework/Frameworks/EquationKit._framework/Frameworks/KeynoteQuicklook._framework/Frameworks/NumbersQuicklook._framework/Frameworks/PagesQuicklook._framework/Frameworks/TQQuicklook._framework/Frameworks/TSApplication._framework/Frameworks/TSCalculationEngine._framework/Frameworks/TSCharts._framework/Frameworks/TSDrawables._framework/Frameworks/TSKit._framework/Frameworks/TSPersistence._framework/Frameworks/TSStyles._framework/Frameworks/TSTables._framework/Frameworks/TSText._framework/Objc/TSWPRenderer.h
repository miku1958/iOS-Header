//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/TSWPRendering-Protocol.h>

@class NSString, TSUBezierPath;

@interface TSWPRenderer : NSObject <TSWPRendering>
{
    BOOL _flipShadows;
    struct CGContext *_context;
    double _viewScale;
    TSUBezierPath *_interiorClippingPath;
}

@property (readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL flipShadows; // @synthesize flipShadows=_flipShadows;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSUBezierPath *interiorClippingPath; // @synthesize interiorClippingPath=_interiorClippingPath;
@property (readonly) Class superclass;
@property (nonatomic) double viewScale; // @synthesize viewScale=_viewScale;

+ (id)correctionAndDictationMarkColor;
+ (struct __CTFont *)flippedInvisiblesFont;
+ (id)grammarMarkColor;
+ (void)initialize;
+ (struct __CTFont *)invisiblesFont;
+ (id)spellingMarkColor;
- (void).cxx_destruct;
- (struct CGSize)convertSizeToDeviceSpace:(struct CGSize)arg1;
- (void)dealloc;
- (void)didRenderFragments;
- (void)drawAdornmentRects:(id)arg1 forColumn:(id)arg2 foreground:(BOOL)arg3 drawingState:(const struct TSWPDrawingState *)arg4;
- (void)drawAdornmentsForFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned long long)arg5;
- (void)drawCharacterFillAdornmentRects:(id)arg1 forColumn:(id)arg2 excludeRange:(struct _NSRange)arg3 drawingState:(const struct TSWPDrawingState *)arg4;
- (void)drawCharacterStrokeAdornmentRects:(id)arg1 forColumn:(id)arg2 excludeRange:(struct _NSRange)arg3 drawingState:(const struct TSWPDrawingState *)arg4;
- (void)drawFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned long long)arg5;
- (struct CGRect)getClipBoundingBox;
- (id)initWithContext:(struct CGContext *)arg1;
- (BOOL)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)arg1 state:(const struct TSWPDrawingState *)arg2;
- (void)p_clipToInteriorClippingPath;
- (void)p_drawAdornmentGlyphs:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAdornmentLine:(id)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineFragment:(const struct TSWPLineFragment *)arg3 lineFragmentStart:(struct CGPoint)arg4 vertical:(BOOL)arg5;
- (void)p_drawAdornmentLineBackgroundRect:(id)arg1 lineDrawFlags:(unsigned long long)arg2 drawingState:(const struct TSWPDrawingState *)arg3 bounds:(struct CGRect)arg4;
- (void)p_drawAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAttachmentAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAttachmentGlyphAtPosition:(CDStruct_316206b0)arg1 fragment:(const struct TSWPLineFragment *)arg2;
- (void)p_drawAutocorrectionMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawDictationMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawHiddenDeletionsAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawInvisiblesAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawInvisiblesBreakLine:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawListLabelForFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned long long)arg3;
- (void)p_drawRun:(const struct __CTRun *)arg1 range:(CDStruct_912cb5d2)arg2 attributes:(id)arg3 canvasIsInteractive:(BOOL)arg4;
- (void)p_drawTextInRunsForLine:(struct TSWPLineRef)arg1 fragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3 listLabel:(BOOL)arg4 tateChuYoko:(BOOL)arg5 ruby:(BOOL)arg6 baseRange:(struct _NSRange)arg7 isFirstLineRef:(BOOL)arg8;
- (void)p_drawWordMarkingsForFragment:(const struct TSWPLineFragment *)arg1 color:(id)arg2 ranges:(id)arg3 suppressRange:(struct _NSRange)arg4 drawingState:(const struct TSWPDrawingState *)arg5;
- (void)p_setCTMAndTextPositionForFragment:(const struct TSWPLineFragment *)arg1 state:(const struct TSWPDrawingState *)arg2;
- (void)p_strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (BOOL)shouldClipFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned long long)arg3 updateRect:(struct CGRect)arg4 outClipRect:(struct CGRect *)arg5;
- (void)willRenderFragmentsWithDrawingState:(const struct TSWPDrawingState *)arg1;

@end

