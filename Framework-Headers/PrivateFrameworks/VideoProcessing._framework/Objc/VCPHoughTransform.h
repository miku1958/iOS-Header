//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPHoughTransform : NSObject
{
    float *_edgeMap;
    int _mapWidth;
    int _mapHeight;
    int *_accumulator;
    int _accWidth;
    int _accHeight;
    int _accHalfHeight;
    float _angleStep;
    BOOL _verbose;
}

- (int)DetectLinesWithThreshold:(int)arg1 output:(id)arg2;
- (void)Transform;
- (void)dealloc;
- (id)initWithEdgeMap:(float *)arg1 mapWidth:(int)arg2 mapHeight:(int)arg3 angleStep:(float)arg4;

@end

