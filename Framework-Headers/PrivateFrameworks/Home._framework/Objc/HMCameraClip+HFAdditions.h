//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraClip.h>

#import <Home/HFCameraRecordingEvent-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface HMCameraClip (HFAdditions) <HFCameraRecordingEvent>

@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *hf_sortedSignificantEvents;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;

- (unsigned long long)containerType;
- (void)dealloc;
- (id)hf_allEventsContainingPeopleInClip;
- (id)hf_dateInterval;
- (double)hf_duration;
- (id)hf_endDate;
- (id)hf_faceCropNameAtOffset:(double)arg1;
- (id)hf_faceCropNamesAtOffset:(double)arg1;
- (id)hf_familiarFaceEventAtOffset:(double)arg1;
- (BOOL)hf_isPlayable;
- (void)hf_sortSignificantEvents;
@end

