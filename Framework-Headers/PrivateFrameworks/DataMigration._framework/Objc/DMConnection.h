//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataMigration/DMXPCConnection.h>

#import <DataMigration/DMMigratorServiceProtocol-Protocol.h>

@class NSString;

@interface DMConnection : DMXPCConnection <DMMigratorServiceProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)changeVisibility:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceMigrationOnNextRebootWithCompletion:(CDUnknownBlockType)arg1;
- (void)isMigrationNeeded:(CDUnknownBlockType)arg1;
- (void)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)orderedPluginIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)previousBuildVersion:(CDUnknownBlockType)arg1;
- (void)reportMigrationFailure;
- (void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userDataDisposition:(CDUnknownBlockType)arg1;

@end
