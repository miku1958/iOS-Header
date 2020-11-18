//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCItemTransmogrifier : NSObject
{
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_pendingRenamesTimer;
    NSMutableArray *_pendingRenames;
    NSOperationQueue *_queue;
    NSMutableDictionary *_pendingTransmogirifcations;
}

- (void).cxx_destruct;
- (void)_finishDirectoryToPackageTransmogrification:(id)arg1 relpath:(id)arg2;
- (double)_renameDelayForZone:(id)arg1;
- (double)_renameItem:(id)arg1;
- (void)_renameItems;
- (void)_scheduleRenameAfter:(double)arg1 onQueue:(id)arg2;
- (BOOL)addOperation:(id)arg1 forItem:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)queue;
- (void)removeOperationsForItem:(id)arg1;
- (void)scheduleBouncedDirectoryRename:(id)arg1;
- (void)scheduleDirectoryToPackageTransmogrification:(id)arg1 absolutePath:(id)arg2;

@end

