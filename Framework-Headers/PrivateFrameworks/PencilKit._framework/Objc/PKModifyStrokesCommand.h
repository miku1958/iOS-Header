//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKModifyStrokesCommand : PKUndoCommand
{
    BOOL _hide;
    NSArray *_strokes;
    struct CGAffineTransform _strokeTransform;
}

@property (readonly, nonatomic) BOOL hide; // @synthesize hide=_hide;
@property (readonly, nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property (readonly, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
@property (readonly, nonatomic) NSArray *visibleStrokes;

+ (id)commandForErasingAllStrokesInDrawing:(id)arg1;
+ (id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2;
+ (id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform)arg3;
+ (id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform)arg3;
- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)description;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(BOOL)arg4 strokeTransform:(struct CGAffineTransform)arg5;
- (id)inverted;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

