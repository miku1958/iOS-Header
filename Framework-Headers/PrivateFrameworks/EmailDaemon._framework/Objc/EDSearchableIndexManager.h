//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDPersistenceDatabase, EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSString;

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDMessageChangeHookResponder>
{
    BOOL _needsReindex;
    BOOL _needsToScheduleRecurringActivity;
    EDPersistenceDatabase *_database;
}

@property (readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) EDSearchableIndex *index;
@property (nonatomic) BOOL needsReindex; // @synthesize needsReindex=_needsReindex;
@property (nonatomic) BOOL needsToScheduleRecurringActivity; // @synthesize needsToScheduleRecurringActivity=_needsToScheduleRecurringActivity;
@property (readonly, nonatomic) EDSearchableIndexPersistence *persistence;
@property (readonly, nonatomic) EDSearchableIndexScheduler *scheduler;
@property (readonly) Class superclass;

+ (id)log;
- (void).cxx_destruct;
- (void)_removeAllItemsFromIndexAndWait:(BOOL)arg1 options:(unsigned long long)arg2;
- (void)_removeItemsForPersistedMessages:(id)arg1;
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1;
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;
- (void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidUpdateData:(id)arg1 message:(id)arg2;
- (void)persistenceWillBeginUpdates;
- (void)removeAllItemsFromIndexAndWait:(BOOL)arg1 skipInvalidation:(BOOL)arg2;
- (void)scheduleRecurringActivity;
- (void)setNeedsReindex;
- (void)test_tearDown;

@end

