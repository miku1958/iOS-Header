//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataMigration/NSObject-Protocol.h>

@class NSString;

@protocol DMMigratorServiceProtocol <NSObject>
- (void)changeVisibility:(BOOL)arg1 completion:(void (^)(BOOL))arg2;
- (void)forceMigrationOnNextRebootWithCompletion:(void (^)(void))arg1;
- (void)isMigrationNeeded:(void (^)(BOOL))arg1;
- (void)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (void)orderedPluginIdentifiersWithCompletion:(void (^)(NSArray *))arg1;
- (void)previousBuildVersion:(void (^)(NSString *))arg1;
- (void)reportMigrationFailure;
- (void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)userDataDisposition:(void (^)(unsigned int))arg1;
@end

