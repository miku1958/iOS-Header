//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, NSURL;
@protocol OS_dispatch_queue;

@interface SBRecentAppLayoutsPersister : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSURL *_persistenceURL;
    NSTimer *_persistTimer;
    BOOL _initializedNewStoreOnDisk;
    NSArray *_recents;
}

@property (readonly, nonatomic) BOOL initializedNewStoreOnDisk;
@property (strong, nonatomic) NSArray *recents; // @synthesize recents=_recents;

- (void).cxx_destruct;
- (void)_enqueueDiskWrite;
- (void)_loadRecents;
- (void)_persistTimerExpired:(id)arg1;
- (void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1;
- (id)_scheduledPersistTimer;
- (id)initWithPersistenceURL:(id)arg1;
- (void)syncToDiskSoonIfDirty;
- (void)syncToDiskSynchronously;

@end

