//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DMXPCConnection;

@interface DMConnection : NSObject
{
    DMXPCConnection *_connection;
}

+ (id)connection;
- (void).cxx_destruct;
- (void)cancelDeferredExit;
- (void)changeVisibility:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deferExit;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)arg1;
- (id)init;
- (BOOL)isMigrationNeeded;
- (long long)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3;
- (id)migrationPhaseDescription;
- (void)migrationPluginResults:(CDUnknownBlockType)arg1;
- (id)orderedPluginIdentifiers;
- (id)previousBuildVersion;
- (void)reportMigrationFailure;
- (void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2;
- (unsigned int)userDataDisposition;

@end

