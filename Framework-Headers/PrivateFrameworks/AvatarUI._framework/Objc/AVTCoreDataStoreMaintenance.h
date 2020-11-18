//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreDataStoreMaintenance-Protocol.h>

@protocol AVTEventCoalescer, AVTUILogger, OS_dispatch_queue;

@interface AVTCoreDataStoreMaintenance : NSObject <AVTCoreDataStoreMaintenance>
{
    id<AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<AVTEventCoalescer> _eventCoalescer;
    CDUnknownBlockType _mocFactory;
}

@property (readonly, nonatomic) id<AVTEventCoalescer> eventCoalescer; // @synthesize eventCoalescer=_eventCoalescer;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly, copy, nonatomic) CDUnknownBlockType mocFactory; // @synthesize mocFactory=_mocFactory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (id)duplicatedIdentifiersInManagedObjectContext:(id)arg1 error:(id *)arg2;
- (id)fetchDuplicatedRecordsForIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (BOOL)fixDuplicateRecordIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (id)initWithEnvironment:(id)arg1 managedObjectContextFactory:(CDUnknownBlockType)arg2;
- (id)initWithWorkQueue:(id)arg1 managedObjectContextFactory:(CDUnknownBlockType)arg2 eventCoalescer:(id)arg3 logger:(id)arg4;
- (BOOL)mitigateDuplicatesWithManagedObjectContext:(id)arg1 error:(id *)arg2;
- (void)runMaintenanceTasks;
- (void)storeDidChange;

@end

