//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraSignificantEvent.h>

@class NSUUID;

@interface HMCameraClipSignificantEvent : HMCameraSignificantEvent
{
    double _timeOffsetWithinClip;
    NSUUID *_clipUUID;
}

@property (readonly, copy) NSUUID *clipUUID; // @synthesize clipUUID=_clipUUID;
@property (readonly) double timeOffsetWithinClip; // @synthesize timeOffsetWithinClip=_timeOffsetWithinClip;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 cameraProfileUUID:(id)arg5 faceClassification:(id)arg6 timeOffsetWithinClip:(double)arg7 clipUUID:(id)arg8;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassification:(id)arg5 timeOffsetWithinClip:(double)arg6 clipUUID:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end

