//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AXMFeatureTrackingManagerDelegate, OS_dispatch_queue;

@interface AXMFeatureTrackingManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_trackedFeatureContainers;
    id<AXMFeatureTrackingManagerDelegate> _delegate;
    double _maximumSizeThreshold;
    double _maximumDistanceThreshold;
}

@property (weak, nonatomic) id<AXMFeatureTrackingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double maximumDistanceThreshold; // @synthesize maximumDistanceThreshold=_maximumDistanceThreshold;
@property (nonatomic) double maximumSizeThreshold; // @synthesize maximumSizeThreshold=_maximumSizeThreshold;

- (void).cxx_destruct;
- (id)_queue_trackerContainerForFeature:(id)arg1;
- (id)initWithDelegate:(id)arg1 targetQueue:(id)arg2;
- (void)processResult:(id)arg1;
- (void)queue_processResult:(id)arg1;
- (id)queue_trackedFaces;
- (id)queue_trackedFeatures;
- (id)queue_trackedModelClassifiers;
- (id)queue_trackedRectangles;
- (id)queue_trackedText;
- (id)trackedFaces;
- (id)trackedFeatures;
- (id)trackedModelClassifiers;
- (id)trackedRectangles;
- (id)trackedText;

@end

