//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackingStoreLocal, HMDHomeManager, HMFVersion, NSMapTable, NSOperationQueue, NSString;

@interface HMDBackingStoreSingleton : HMFObject <HMFLogging>
{
    NSMapTable *_objectLookup;
    NSMapTable *_classToNameTransform;
    NSMapTable *_nameToClassTransform;
    NSMapTable *_objectPropertyHashLookup;
    HMFVersion *_dataVersion;
    HMDHomeManager *_homeManager;
    HMDBackingStoreLocal *_local;
    NSOperationQueue *_queue;
}

@property (readonly, nonatomic) NSMapTable *classToNameTransform; // @synthesize classToNameTransform=_classToNameTransform;
@property (strong, nonatomic) HMFVersion *dataVersion; // @synthesize dataVersion=_dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property (readonly, nonatomic) NSMapTable *nameToClassTransform; // @synthesize nameToClassTransform=_nameToClassTransform;
@property (readonly, nonatomic) NSMapTable *objectLookup; // @synthesize objectLookup=_objectLookup;
@property (readonly, nonatomic) NSMapTable *objectPropertyHashLookup; // @synthesize objectPropertyHashLookup=_objectPropertyHashLookup;
@property (readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (void)resetClassMappings;
+ (void)resetSchemaHash;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)sharedInstance;
+ (void)start;
- (void).cxx_destruct;
- (id)flushBackingStore;
- (id)init;
- (id)logIdentifier;
- (id)resetBackingStore;
- (id)schemaHashForObject:(id)arg1;
- (void)setHomeManager:(id)arg1;

@end
