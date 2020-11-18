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
    NSString *_lastPlugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *lastPlugin; // @synthesize lastPlugin=_lastPlugin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changeVisibility:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceMigrationOnNextRebootWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleMessage:(id)arg1;
- (void)isMigrationNeeded:(CDUnknownBlockType)arg1;
- (void)migrateCheckingNecessity:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)orderedPluginIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

