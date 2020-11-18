//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARVideoFormat, ARWorldTrackingState, NSDictionary, NSString;

@interface ARWorldTrackingPoseData : NSObject <ARResultData, NSSecureCoding>
{
    double _timestamp;
    ARWorldTrackingState *_worldTrackingState;
    NSDictionary *_vioStateDetails;
    ARVideoFormat *_currentlyActiveVideoFormat;
    long long _worldMappingStatus;
    CDStruct_14d5dc5e _visionCameraTransform;
    CDStruct_14d5dc5e _cameraTransform;
}

@property (nonatomic) CDStruct_14d5dc5e cameraTransform; // @synthesize cameraTransform=_cameraTransform;
@property (strong, nonatomic) ARVideoFormat *currentlyActiveVideoFormat; // @synthesize currentlyActiveVideoFormat=_currentlyActiveVideoFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (copy, nonatomic) NSDictionary *vioStateDetails; // @synthesize vioStateDetails=_vioStateDetails;
@property (nonatomic) CDStruct_14d5dc5e visionCameraTransform; // @synthesize visionCameraTransform=_visionCameraTransform;
@property (nonatomic) long long worldMappingStatus; // @synthesize worldMappingStatus=_worldMappingStatus;
@property (copy, nonatomic) ARWorldTrackingState *worldTrackingState; // @synthesize worldTrackingState=_worldTrackingState;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;
- (BOOL)isEqual:(id)arg1;

@end
