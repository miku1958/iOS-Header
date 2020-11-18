//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CLSOPTICSClusterDescriptor : NSObject
{
    NSNumber *_startIndex;
    NSNumber *_endIndex;
    struct _NSRange _indexRange;
    NSNumber *_clusterSize;
    NSNumber *_rootLevel;
    NSNumber *_minCoreDistanceIndex;
    NSNumber *_minCoreDistance;
    NSNumber *_coreDistance;
}

@property (readonly, strong, nonatomic) NSNumber *clusterSize; // @synthesize clusterSize=_clusterSize;
@property (readonly, strong, nonatomic) NSNumber *endIndex; // @synthesize endIndex=_endIndex;
@property (readonly, nonatomic) struct _NSRange indexRange;
@property (readonly, strong, nonatomic) NSNumber *minCoreDistance; // @synthesize minCoreDistance=_coreDistance;
@property (readonly, strong, nonatomic) NSNumber *minCoreDistanceIndex; // @synthesize minCoreDistanceIndex=_minCoreDistanceIndex;
@property (readonly, strong, nonatomic) NSNumber *rootLevel; // @synthesize rootLevel=_rootLevel;
@property (readonly, strong, nonatomic) NSNumber *startIndex; // @synthesize startIndex=_startIndex;

+ (id)clusterDescriptor:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;
- (void).cxx_destruct;
- (id)initWithParameters:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;

@end

