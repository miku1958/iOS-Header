//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDSnapshotFile, HMFTimer, NSString;

@interface HMDSnapshotCacheEntry : HMFObject
{
    HMDSnapshotFile *_snapshotFile;
    NSString *_proactiveSessionID;
    HMFTimer *_timer;
    CDUnknownBlockType _snapshotRequestCompletion;
}

@property (readonly, nonatomic) NSString *proactiveSessionID; // @synthesize proactiveSessionID=_proactiveSessionID;
@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property (copy, nonatomic) CDUnknownBlockType snapshotRequestCompletion; // @synthesize snapshotRequestCompletion=_snapshotRequestCompletion;
@property (readonly, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProactiveSessionID:(id)arg1 snapshotFile:(id)arg2 timer:(id)arg3;

@end
