//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACDDatabase;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACDDatabaseBackupActivity : NSObject
{
    BOOL _xpcActivityPending;
    NSObject<OS_xpc_object> *_activityExecutionCriteria;
    NSObject<OS_dispatch_queue> *_queue;
    ACDDatabase *_database;
}

@property (readonly, nonatomic) ACDDatabase *database; // @synthesize database=_database;

+ (id)new;
- (void).cxx_destruct;
- (void)_registerActivityIfNeededSchedulingBackup:(BOOL)arg1;
- (void)_registerActivitySchedulingBackup:(BOOL)arg1;
- (id)activityCriteria;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)registerActivityIfNeeded;
- (void)scheduleBackup;
- (void)scheduleBackupIfNonexistent;

@end

