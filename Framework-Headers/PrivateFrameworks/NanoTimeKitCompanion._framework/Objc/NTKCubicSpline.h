//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface NTKCubicSpline : NSObject
{
    CDStruct_669ca518 *_processedPoints;
    CDStruct_669ca518 *_controlPoints;
    CDStruct_669ca518 *_workspace;
    CDStruct_9edbfaa9 *_splineMatrix;
    BOOL _closed;
    int _length;
    int _startIndex;
    MISSING_TYPE *_a;
    MISSING_TYPE *_b;
    MISSING_TYPE *_c;
    MISSING_TYPE *_d;
}

- (void)_processClosedSpline;
- (void)_processOpenSpline;
- (void)_processSpline;
- (CDStruct_669ca518 *)controlPointsBuffer;
- (void)dealloc;
- (void)getControlPoints:(MISSING_TYPE ***)arg1 processedPoints:(MISSING_TYPE ***)arg2;
- (id)initWithNumberOfControlPoints:(int)arg1 isClosed:(BOOL)arg2;
- (MISSING_TYPE *)interpolateAt:(float)arg1;
- (MISSING_TYPE *)interpolateAt:(float)arg1 derivative:(MISSING_TYPE **)arg2;
- (void)interpolateWithSteps:(int)arg1 interpolation:(CDUnknownBlockType)arg2;
- (BOOL)isClosed;
- (int)length;
- (void)process;

@end

