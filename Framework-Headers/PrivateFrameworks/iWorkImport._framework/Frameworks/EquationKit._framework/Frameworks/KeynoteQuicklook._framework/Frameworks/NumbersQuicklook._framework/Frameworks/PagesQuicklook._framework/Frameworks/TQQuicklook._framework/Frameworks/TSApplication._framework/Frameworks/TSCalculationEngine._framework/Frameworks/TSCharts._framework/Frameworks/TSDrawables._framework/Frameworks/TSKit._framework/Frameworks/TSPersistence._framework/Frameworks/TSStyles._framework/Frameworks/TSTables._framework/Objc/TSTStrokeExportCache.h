//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDStroke, TSTStrokeLayerMergedStack;

@interface TSTStrokeExportCache : NSObject
{
    TSTStrokeLayerMergedStack *_mergedStrokes;
    TSDStroke *_stroke;
    struct TSTSimpleRange _range;
}

@property (strong, nonatomic) TSTStrokeLayerMergedStack *mergedStrokes; // @synthesize mergedStrokes=_mergedStrokes;
@property (nonatomic) struct TSTSimpleRange range; // @synthesize range=_range;
@property (strong, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;

- (void)dealloc;
- (id)initWithMergedStack:(id)arg1;
- (id)strokeAtIndex:(unsigned int)arg1;

@end

