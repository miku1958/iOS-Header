//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCameraMetricsSnapshotLogEvent, NSError;

@interface HMDCameraSnapshotMetrics : NSObject
{
    HMDCameraMetricsSnapshotLogEvent *_cameraSnapshotMetricsLogEvent;
    NSError *_error;
}

@property (readonly, nonatomic) HMDCameraMetricsSnapshotLogEvent *cameraSnapshotMetricsLogEvent; // @synthesize cameraSnapshotMetricsLogEvent=_cameraSnapshotMetricsLogEvent;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 snapshotForNotification:(BOOL)arg4;

@end

