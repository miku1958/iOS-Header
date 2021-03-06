//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteSegment, GEOComposedRouteStep;

@interface GEOComposedRouteSection : NSObject
{
    unsigned int _startPointIndex;
    unsigned int _pointCount;
    CDStruct_869f9c67 *_points;
    int _transportType;
    GEOComposedRouteSegment *_composedRouteSegment;
    GEOComposedRouteStep *_composedRouteStep;
    unsigned long long _composedRouteSegmentIndex;
    CDStruct_953f3dc7 _bounds;
    CDStruct_02837cd9 _overlayBounds;
    unsigned long long _finalStepIndex;
    double _startDistance;
    double _lengthScaleFactor;
}

@property (readonly, nonatomic) CDStruct_953f3dc7 bounds; // @synthesize bounds=_bounds;
@property (readonly, weak, nonatomic) GEOComposedRouteSegment *composedRouteSegment; // @synthesize composedRouteSegment=_composedRouteSegment;
@property (readonly, nonatomic) unsigned long long composedRouteSegmentIndex; // @synthesize composedRouteSegmentIndex=_composedRouteSegmentIndex;
@property (readonly, weak, nonatomic) GEOComposedRouteStep *composedRouteStep; // @synthesize composedRouteStep=_composedRouteStep;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned long long finalStepIndex; // @synthesize finalStepIndex=_finalStepIndex;
@property (nonatomic) double lengthScaleFactor; // @synthesize lengthScaleFactor=_lengthScaleFactor;
@property (readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property (readonly, nonatomic) CDStruct_869f9c67 *points; // @synthesize points=_points;
@property (readonly, nonatomic) double startDistance; // @synthesize startDistance=_startDistance;
@property (readonly, nonatomic) unsigned int startPointIndex; // @synthesize startPointIndex=_startPointIndex;
@property (readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;

- (void).cxx_destruct;
- (BOOL)_MapsCarPlay_isEqual:(id)arg1;
- (void)_initialStepInSteps:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned int)arg5 coordinateCount:(unsigned int)arg6 bounds:(CDStruct_953f3dc7)arg7 transportType:(int)arg8 finalStepIndex:(unsigned long long)arg9 startDistance:(double)arg10 lengthScaleFactor:(double)arg11;
- (id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned int)arg5 coordinateCount:(unsigned int)arg6 transportType:(int)arg7 finalStepIndex:(unsigned long long)arg8 fallbackStartCoordinate:(CDStruct_c3b9c2ee)arg9 fallbackEndCoordinate:(CDStruct_c3b9c2ee)arg10 startDistance:(double)arg11 lengthScaleFactor:(double)arg12;
- (BOOL)isTransfer;
- (id)stringForCoordinates;
- (id)stringForPoints;

@end

