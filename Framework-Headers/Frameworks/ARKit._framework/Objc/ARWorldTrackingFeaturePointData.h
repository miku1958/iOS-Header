//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARPointCloud;

@interface ARWorldTrackingFeaturePointData : NSObject
{
    double _timestamp;
    ARPointCloud *_featurePoints;
}

@property (strong, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;

@end

