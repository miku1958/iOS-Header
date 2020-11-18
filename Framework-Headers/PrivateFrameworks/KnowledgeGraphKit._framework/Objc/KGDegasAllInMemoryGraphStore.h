//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/KGMemoryGraphStore.h>

@class KGDatabase, NSURL;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore
{
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (id)_markerFilePathForPersistentStoreFileURL:(id)arg1;
+ (BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (void)deleteMarkerForDiskRepresentationAtURL:(id)arg1;
+ (BOOL)destroyAtURL:(id)arg1 error:(id *)arg2;
+ (BOOL)hasMarkerForDiskRepresentationAtURL:(id)arg1;
+ (BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)persistentStoreFileExtension;
+ (BOOL)setMarkerForDiskRepresentationAtURL:(id)arg1;
- (void).cxx_destruct;
- (id)_markerFilePath;
- (unsigned long long)addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id *)arg6;
- (unsigned long long)addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id *)arg4;
- (void)beginTransaction;
- (void)close;
- (void)commitTransaction;
- (BOOL)copyToURL:(id)arg1 error:(id *)arg2;
- (void)deleteMarker;
- (void)enumerateModelEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelNodesWithBlock:(CDUnknownBlockType)arg1;
- (id)graphIdentifier;
- (unsigned long long)graphVersion;
- (BOOL)hasMarker;
- (id)initWithURL:(id)arg1;
- (BOOL)openWithMode:(unsigned long long)arg1 error:(id *)arg2;
- (void)setGraphVersion:(unsigned long long)arg1;
- (void)setMarker;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id *)arg3;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id *)arg3;
- (BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id *)arg3;
- (BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id *)arg3;
- (id)url;

@end
