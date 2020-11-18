//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSTCustomStrokeProviding-Protocol.h>

@class NSPointerArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding>
{
    int _maxOrder;
    NSPointerArray *_leftColumnStrokes;
    NSPointerArray *_rightColumnStrokes;
    NSPointerArray *_topRowStrokes;
    NSPointerArray *_bottomRowStrokes;
}

@property (strong, nonatomic) NSPointerArray *bottomRowStrokes; // @synthesize bottomRowStrokes=_bottomRowStrokes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSPointerArray *leftColumnStrokes; // @synthesize leftColumnStrokes=_leftColumnStrokes;
@property (nonatomic) int maxOrder; // @synthesize maxOrder=_maxOrder;
@property (strong, nonatomic) NSPointerArray *rightColumnStrokes; // @synthesize rightColumnStrokes=_rightColumnStrokes;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSPointerArray *topRowStrokes; // @synthesize topRowStrokes=_topRowStrokes;

- (void).cxx_destruct;
- (id)cellBorderAtCellID:(struct TSUCellCoord)arg1;
- (void)enumerateStrokesInRegion:(id)arg1 usingTopStrokeBlock:(CDUnknownBlockType)arg2 usingBottomStrokeBlock:(CDUnknownBlockType)arg3 usingLeftStrokeBlock:(CDUnknownBlockType)arg4 usingRightStrokeBlock:(CDUnknownBlockType)arg5;
- (void)flattenStrokeOrder;
- (id)initForUpgradeWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1;
- (void)insertColumns:(struct _NSRange)arg1;
- (void)insertRows:(struct _NSRange)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (id)p_flattenMajorStrokeLayer:(id)arg1 minorStrokeLayer:(id)arg2;
- (void)p_setBottomStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setLeftStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setRightStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setStroke:(id)arg1 order:(int)arg2 inStrokesArray:(id)arg3 atIndex:(unsigned int)arg4 atRange:(struct TSTSimpleRange)arg5;
- (void)p_setTopStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (struct TSUCellRect)p_strokeRect;
- (void)removeColumns:(struct _NSRange)arg1;
- (void)removeRows:(struct _NSRange)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setBordersWithCellMap:(id)arg1;
- (void)setCellBorder:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (id)strokeLayerForBottomOfRow:(unsigned int)arg1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForRightSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForTopOfRow:(unsigned int)arg1;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;

@end

