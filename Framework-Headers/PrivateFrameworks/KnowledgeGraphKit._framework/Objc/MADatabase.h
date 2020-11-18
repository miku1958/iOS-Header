//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/MAPersistentStoreProtocol-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSPersistentStoreCoordinator, NSPredicate, NSString, NSURL, NSUUID;

@interface MADatabase : NSObject <MAPersistentStoreProtocol>
{
    unsigned long long _batchCounter;
    unsigned long long _markerCounter;
    long long _options;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSMutableArray *_localLabelStrings;
    NSMutableDictionary *_localLabelsForStrings;
    NSPredicate *_predicateIdentifierTemplate;
    NSPredicate *_predicateIdentifiersTemplate;
    NSPredicate *_predicateIdentifierAndKeyTemplate;
    NSMutableDictionary *_identifiersByEntityNameToRemove;
    NSURL *_fileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doesCascadeEdgeDelete;
@property (readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (nonatomic) unsigned long long graphVersion;
@property (readonly, nonatomic) BOOL hasMarker;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (strong, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property (strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property (readonly) Class superclass;

+ (id)_markerFilePathForPersistentStoreFileURL:(id)arg1;
+ (BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1;
+ (void)deleteMarkerAtURL:(id)arg1;
+ (BOOL)destroyAtURL:(id)arg1 error:(id *)arg2;
+ (BOOL)hasMarker:(id)arg1;
+ (BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)persistentStoreCoordinatorOptions;
+ (id)persistentStoreFileExtension;
+ (BOOL)setMarkerAtURL:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_addProperty:(id)arg1 toProperties:(id)arg2;
- (void)_cleanupElementIdentifiers;
- (id)_cleanupIdentifiers:(id)arg1 forEntity:(id)arg2;
- (unsigned int)_labelForString:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_loadLabelStrings;
- (void)_loadPropertiesForEntityName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_markerFilePath;
- (id)_modelGraph;
- (void)_resetCoreDataStack;
- (void)_save:(CDUnknownBlockType)arg1 force:(BOOL)arg2;
- (void)_saveLabelStrings;
- (BOOL)_saveSynchonously:(id *)arg1;
- (void)_setLocalLabelStrings:(id)arg1;
- (BOOL)_setValue:(id)arg1 onProperty:(id)arg2;
- (id)_stringForLabel:(unsigned int)arg1;
- (void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2;
- (void)addNode:(id)arg1 requiresTesting:(BOOL)arg2;
- (void)closePersistentStore;
- (void)dealloc;
- (void)deleteMarker;
- (void)enterBatch;
- (void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelEdgesPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelEdgesWithPredicate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelNodesForDomains:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelNodesForLabels:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelNodesPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelNodesWithPredicate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)hasElementIdentifiersToRemove;
- (id)init;
- (id)initWithFileURL:(id)arg1 options:(long long)arg2;
- (void)invalidateMemoryCaches;
- (void)invalidatePersistentStores;
- (void)leaveBatch;
- (BOOL)migrateToURL:(id)arg1 error:(id *)arg2;
- (void)removeModelEdgeForIdentifier:(unsigned long long)arg1;
- (void)removeModelEdgePropertiesForIdentifier:(long long)arg1;
- (void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
- (void)removeModelEdgesForIdentifiers:(id)arg1;
- (void)removeModelEdgesPropertiesForIdentifiers:(id)arg1;
- (void)removeModelNodeForIdentifier:(unsigned long long)arg1;
- (void)removeModelNodePropertiesForIdentifier:(long long)arg1;
- (void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
- (void)removeModelNodesForIdentifiers:(id)arg1;
- (void)removeModelNodesPropertiesForIdentifiers:(id)arg1;
- (void)removePreviousPersistenceStore;
- (void)save:(CDUnknownBlockType)arg1;
- (void)setMarker;
- (void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
- (void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
- (void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
- (void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
- (id)valueForModelProperty:(id)arg1;

@end
