//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCameraSessionID, HMDSnapshotFile, HMFTimer;

@interface HMDSnapshotCacheEntry : NSObject
{
    HMDSnapshotFile *_snapshotFile;
    HMDCameraSessionID *_sessionID;
    HMFTimer *_timer;
}

@property (readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property (readonly, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSessionID:(id)arg1 snapshotFile:(id)arg2 timer:(id)arg3;

@end

