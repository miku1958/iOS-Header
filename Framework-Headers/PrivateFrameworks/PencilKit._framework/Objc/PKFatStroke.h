//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKStroke.h>

@interface PKFatStroke : PKStroke
{
    vector_acef39cc _maskPaths;
    vector_63c28b85 _centerlineSlices;
}

+ (id)sliceWithEraser:(vector_acef39cc *)arg1 toClip:(id)arg2;
+ (id)sliceWithEraser:(vector_acef39cc *)arg1 toClip:(id)arg2 clipType:(int)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendPointsOfInterestForSelection:(vector_e1abc270 *)arg1;
- (struct CGRect)_calculateBounds;
- (void)calculateCenterlineSlices;
- (vector_63c28b85 *)centerlineSlices;
- (void)debugRender:(struct CGContext *)arg1;
- (void)generatePolyHull;
- (id)initWithArchive:(const struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(BOOL)arg5;
- (id)initWithStroke:(id)arg1;
- (id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(struct _PKStrokeID)arg3 ink:(id)arg4 transform:(struct CGAffineTransform)arg5 tRange:(CDStruct_88b945db)arg6;
- (BOOL)intersectsClosedStroke:(id)arg1;
- (BOOL)intersectsLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 minThreshold:(double)arg3;
- (vector_acef39cc *)maskPaths;
- (struct CGPath *)newPathRepresentation;
- (unsigned int)saveToArchive:(struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(BOOL)arg4 parent:(id)arg5 transient:(BOOL)arg6;
- (id)sliceWithEraser:(vector_acef39cc *)arg1;
- (id)sliceWithMask:(vector_acef39cc *)arg1;

@end
