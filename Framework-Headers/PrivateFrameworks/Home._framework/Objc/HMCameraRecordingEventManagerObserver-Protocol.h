//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMCameraRecordingEventManager, NSSet;

@protocol HMCameraRecordingEventManagerObserver
- (void)recordingEventManager:(HMCameraRecordingEventManager *)arg1 didRemoveRecordingEventsWithUUIDs:(NSSet *)arg2;
- (void)recordingEventManager:(HMCameraRecordingEventManager *)arg1 didUpdateRecordingEvents:(NSSet *)arg2;
@end
