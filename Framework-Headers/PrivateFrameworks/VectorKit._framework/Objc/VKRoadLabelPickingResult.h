//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VKLabelFeatureMarker;

__attribute__((visibility("hidden")))
@interface VKRoadLabelPickingResult : NSObject
{
    VKLabelFeatureMarker *_labelFeatureMarker;
}

@property (readonly, nonatomic) float closestApproach;
@property (readonly, nonatomic) struct CGVector direction;
@property (readonly, nonatomic) VKLabelFeatureMarker *labelFeatureMarker; // @synthesize labelFeatureMarker=_labelFeatureMarker;
@property (readonly, nonatomic) NSString *name;

- (void)dealloc;
- (id)description;
- (id)initWithLabelFeatureMarkerPtr:(const shared_ptr_27db7edb *)arg1;

@end

