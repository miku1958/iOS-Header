//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSUUID, TSPComponent, TSPObjectContext, TSPUnknownContent, TSUUUIDPath;
@protocol TSPObjectDelegate;

__attribute__((visibility("hidden")))
@interface TSPObject : NSObject
{
    _Atomic long long _identifier;
    _Atomic long long _modifyObjectToken;
    NSUUID *_UUID;
    long long _unarchiverIdentifier;
    TSPUnknownContent *_unknownContent;
    TSPComponent *_component;
    id<TSPObjectDelegate> _delegate;
}

@property (readonly, nonatomic) unsigned long long allowedObjectTargetTypes;
@property (readonly, nonatomic) BOOL allowsImplicitComponentOwnership;
@property (readonly, nonatomic) TSPObject *componentRootObject;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) unsigned int delayedArchivingPriority;
@property (readonly, nonatomic) BOOL isCommandObject;
@property (readonly, nonatomic) BOOL isComponentRoot;
@property (readonly, nonatomic) BOOL needsArchiving;
@property (copy, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) TSUUUIDPath *objectUUIDPath;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) BOOL shouldDelayArchiving;
@property (readonly, nonatomic) BOOL storeOutsideObjectArchive;
@property (weak, nonatomic) TSPComponent *tsp_component; // @synthesize tsp_component=_component;
@property (weak, nonatomic) id<TSPObjectDelegate> tsp_delegate; // @synthesize tsp_delegate=_delegate;
@property (readonly, nonatomic) NSString *tsp_description;
@property (nonatomic) long long tsp_identifier;
@property (readonly, nonatomic) BOOL tsp_isInDocument;
@property (readonly, nonatomic) BOOL tsp_isPersisted;
@property (nonatomic) long long tsp_modifyObjectToken;
@property (readonly, nonatomic) long long tsp_unarchiverIdentifier; // @synthesize tsp_unarchiverIdentifier=_unarchiverIdentifier;
@property (readonly, nonatomic) TSPUnknownContent *tsp_unknownContent; // @synthesize tsp_unknownContent=_unknownContent;

+ (Class)classForUnarchiver:(id)arg1;
+ (BOOL)needsObjectUUID;
+ (void)performUpgradeUsingBlock:(CDUnknownBlockType)arg1;
+ (id)tsp_deserializeFromData:(id)arg1 options:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)tsp_deserializeFromURL:(id)arg1 options:(id)arg2 context:(id)arg3 isCrossDocumentPaste:(BOOL)arg4 isCrossAppPaste:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
+ (BOOL)tsp_isTransientObjectIdentifier:(long long)arg1;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (void)didFinishUnarchiving;
- (void)didInitFromSOS;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (BOOL)documentIsRTL;
- (id)documentRoot;
- (id)init;
- (id)initBaseObjectFromUnarchiver:(id)arg1;
- (id)initBaseObjectWithContext:(id)arg1;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectLocale;
- (id)owningDocument;
- (void)performBlockIgnoringModifications:(CDUnknownBlockType)arg1;
- (void)resetObjectUUIDWithoutUpdatingObjectUUIDMap;
- (void)saveToArchiver:(id)arg1;
- (void)setObjectUUID:(id)arg1 updatingObjectUUIDMap:(BOOL)arg2;
- (void)tsp_commonInitBaseObjectWithContext:(id)arg1;
- (void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id *)arg3 error:(id *)arg4;
- (id)tsp_deepCopyWithOptions:(id)arg1;
- (void)tsp_deepCopyWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)tsp_descriptionWithDepth:(unsigned long long)arg1;
- (id)tsp_objectInfoWithDepth:(unsigned long long)arg1;
- (id)tsp_referencedData;
- (id)tsp_referencedObjectUUIDs;
- (id)tsp_referencedObjects;
- (id)tsp_serializeToDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)tsp_serializeToDataWithOptions:(id)arg1 dataReferences:(id *)arg2 error:(id *)arg3;
- (id)tsp_serializeToURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tsp_writeObjectNSDataRepresentation:(id)arg1 andData:(id)arg2 toURL:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)validatedLoadFromUnarchiver:(id)arg1;
- (void)wasAddedToDocumentDuringImportWithContext:(id)arg1;
- (void)wasAddedToDocumentDuringUnarchiveWithContext:(id)arg1;
- (void)wasAddedToDocumentWithContext:(id)arg1;
- (void)wasAddedToDocumentWithContext:(id)arg1 options:(unsigned long long)arg2;
- (void)willBeRemovedFromDocumentWithContext:(id)arg1;
- (void)willModify;
- (void)willModifyForUpgrade;
- (void)willModifyToComponentRootObject:(id)arg1;

@end

