//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFContentProtectionObserver-Protocol.h>
#import <Message/EFLoggable-Protocol.h>

@class NSConditionLock, NSMutableArray, NSString;
@protocol MFMailMessageLibraryMigratorDelegate, OS_dispatch_queue;

@interface MFMailMessageLibraryMigrator : NSObject <EFContentProtectionObserver, EFLoggable>
{
    BOOL _needsSpotlightReindex;
    BOOL _needsRebuildTriggers;
    BOOL _needsRebuildMessageInfoIndex;
    NSMutableArray *_postMigrationBlocks;
    id<MFMailMessageLibraryMigratorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    NSConditionLock *_migrationState;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // @synthesize contentProtectionQueue=_contentProtectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<MFMailMessageLibraryMigratorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSConditionLock *migrationState; // @synthesize migrationState=_migrationState;
@property (readonly) Class superclass;

+ (int)currentVersion;
+ (id)log;
- (void).cxx_destruct;
- (long long)_checkContentProtectionState;
- (BOOL)_checkForeignKeysWithConnection:(id)arg1;
- (long long)_runMigrationStepsFromVersion:(int)arg1 connection:(id)arg2 schema:(id)arg3;
- (void)addPostMigrationBlock:(CDUnknownBlockType)arg1;
- (long long)attachProtectedDatabaseWithConnection:(id)arg1;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)detachProtectedDatabaseWithConnection:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)migrateWithDatabaseConnection:(id)arg1 schema:(id)arg2;
- (BOOL)needsRebuildMessageInfoIndex;
- (BOOL)needsRebuildTriggers;
- (BOOL)needsSpotlightReindex;
- (void)noteNeedsRebuildTriggers;
- (void)noteNeedsSpotlightReindex;
- (void)noteRebuildMessageInfoIndex;
- (void)resetTTRPromptAndForceReindex;
- (void)runPostMigrationBlocksWithConnection:(id)arg1;

@end
