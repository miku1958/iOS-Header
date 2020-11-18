//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupStorage : NSObject
{
    PQLConnection *_database;
    NSURL *_databaseURL;
    NSArray *_urlPropertiesToFetch;
    NSURL *_attachedDatabaseURL;
}

@property (strong, nonatomic) NSURL *attachedDatabaseURL; // @synthesize attachedDatabaseURL=_attachedDatabaseURL;
@property (strong, nonatomic) PQLConnection *database; // @synthesize database=_database;
@property (strong, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property (strong, nonatomic) NSArray *urlPropertiesToFetch; // @synthesize urlPropertiesToFetch=_urlPropertiesToFetch;

- (void).cxx_destruct;
- (BOOL)addRecord:(id)arg1;
- (BOOL)attachDatabase:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)backupManifestEnumerator:(id)arg1;
- (BOOL)clearStagedIDs:(id)arg1;
- (void)dealloc;
- (id)docIDForURL:(id)arg1;
- (BOOL)fixUpBackupDetector:(id)arg1;
- (BOOL)fixUpClientState:(id)arg1;
- (void)flushAndClose;
- (id)initWithDatabaseURL:(id)arg1;
- (BOOL)negateIDs:(id)arg1;
- (void)populateNewColumnsInDatabase:(id)arg1 forRecord:(id)arg2 basePath:(id)arg3;
- (void)populateNewColumnsWithBasePath:(id)arg1;
- (BOOL)setForeignKeys:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)setUpDatabaseWithError:(id *)arg1;
- (BOOL)updateAttachedDatabase;
- (BOOL)updateIDs:(id)arg1;

@end
