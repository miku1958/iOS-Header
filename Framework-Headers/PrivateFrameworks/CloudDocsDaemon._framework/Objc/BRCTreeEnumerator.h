//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCAppLibrary, BRCItemID, NSMutableIndexSet, brc_task_tracker;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface BRCTreeEnumerator : NSObject
{
    BRCAccountSession *_session;
    CDUnknownBlockType _handler;
    BRCItemID *_parentID;
    BRCAppLibrary *_appLibrary;
    unsigned long long _rowID;
    NSMutableIndexSet *_seen;
    NSMutableIndexSet *_toVisit;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_group> *_group;
    id _strongSelf;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;

- (void).cxx_destruct;
- (BOOL)__iterate:(unsigned long long)arg1;
- (void)_done;
- (void)_iterate:(unsigned long long)arg1;
- (void)_iterateWithoutParent:(unsigned long long)arg1;
- (void)_scheduleAsync;
- (BOOL)_visitNewParent:(unsigned long long)arg1;
- (void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 group:(id)arg2;
- (id)initWithSession:(id)arg1 tracker:(id)arg2;

@end
