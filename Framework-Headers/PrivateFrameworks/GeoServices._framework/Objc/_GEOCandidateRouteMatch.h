//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOCandidateRouteMatch : NSObject
{
    BOOL _isGoodMatch;
    double _score;
    struct PolylineCoordinate _routeCoordinate;
    CDStruct_2c43369c _locationCoordinate;
    unsigned long long _stepIndex;
    double _distanceFromRoute;
    double _maxDistance;
    double _distanceMatchScore;
    double _distanceWeight;
    double _courseDelta;
    double _maxCourseDelta;
    double _courseMatchScore;
    double _courseWeight;
}

@property (nonatomic) double courseDelta; // @synthesize courseDelta=_courseDelta;
@property (nonatomic) double courseMatchScore; // @synthesize courseMatchScore=_courseMatchScore;
@property (nonatomic) double courseWeight; // @synthesize courseWeight=_courseWeight;
@property (nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property (nonatomic) double distanceMatchScore; // @synthesize distanceMatchScore=_distanceMatchScore;
@property (nonatomic) double distanceWeight; // @synthesize distanceWeight=_distanceWeight;
@property (nonatomic) BOOL isGoodMatch; // @synthesize isGoodMatch=_isGoodMatch;
@property (nonatomic) CDStruct_c3b9c2ee locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property (nonatomic) double maxCourseDelta; // @synthesize maxCourseDelta=_maxCourseDelta;
@property (nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property (nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
@property (nonatomic) double score; // @synthesize score=_score;
@property (nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (id)initWithRoute:(id)arg1;

@end

