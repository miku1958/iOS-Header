//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray;

@protocol GEOComposedRoutePortion <NSObject>

@property (readonly, nonatomic) unsigned int distance;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned long long endStepIndex;
@property (readonly, nonatomic) double expectedTime;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct _NSRange pointRange;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned long long startStepIndex;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (readonly, nonatomic) struct _NSRange stepRange;
@property (readonly, nonatomic) NSArray *steps;

@end
