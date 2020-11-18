//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapSnapshot, MKMapSnapshotter, NSLock;
@protocol OS_dispatch_queue;

@interface PKPaymentTransactionLocationSnapshotter : NSObject
{
    MKMapSnapshotter *_snapshotter;
    MKMapSnapshot *_snapshot;
    NSLock *_snapshotCreationLock;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}

- (void).cxx_destruct;
- (BOOL)_locationIsValid:(id)arg1;
- (id)_snapshotLocationForTransaction:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 radius:(double)arg2 snapshotSize:(struct CGSize)arg3;
- (void)snapshotWithCompletion:(CDUnknownBlockType)arg1;

@end
