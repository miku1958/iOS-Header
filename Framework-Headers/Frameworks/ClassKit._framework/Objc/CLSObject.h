//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassKit/CLSGraphVertex-Protocol.h>
#import <ClassKit/CLSRelationable-Protocol.h>
#import <ClassKit/NSLocking-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@class CLSDataStore, NSDate, NSMutableDictionary, NSString;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding>
{
    BOOL _deleted;
    BOOL _modified;
    BOOL _enforceImmutability;
    CLSDataStore *_dataStore;
    NSString *_parentObjectID;
    NSString *_appIdentifier;
    NSMutableDictionary *_childrenByID;
    CLSObject *_parent;
    struct os_unfair_recursive_lock_s _lock;
    BOOL _needsRepair;
    BOOL _temporary;
    unsigned int _generation;
    NSDate *_dateCreated;
    NSDate *_dateLastModified;
    NSString *_objectID;
    NSDate *_dateExpires;
}

@property (copy, nonatomic) NSString *appIdentifier;
@property (weak, nonatomic) CLSDataStore *dataStore;
@property (strong, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (strong, nonatomic) NSDate *dateExpires; // @synthesize dateExpires=_dateExpires;
@property (strong, nonatomic) NSDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isImmutabilityEnforced) BOOL enforceImmutability;
@property unsigned int generation; // @synthesize generation=_generation;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isModified) BOOL modified;
@property (copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property (weak, nonatomic) CLSObject *parent;
@property (copy, nonatomic) NSString *parentObjectID;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTemporary) BOOL temporary; // @synthesize temporary=_temporary;
@property (readonly, nonatomic) id vertexID;

+ (id)dateFormatter;
+ (id)relations;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addChild:(id)arg1;
- (void)_addChild:(id)arg1 lock:(BOOL)arg2;
- (id)_init;
- (void)addChild:(id)arg1;
- (void)addChild:(id)arg1 changedPropertyName:(id)arg2;
- (id)ancestorOfClass:(Class)arg1;
- (id)childrenOfClass:(Class)arg1;
- (id)childrenPassingTest:(CDUnknownBlockType)arg1;
- (id)dictionaryRepresentation;
- (void)didSaveObject;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateChildren:(CDUnknownBlockType)arg1;
- (void)enumerateTree:(CDUnknownBlockType)arg1;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeletedObjectID:(id)arg1;
- (void)lock;
- (void)mergeWithObject:(id)arg1;
- (BOOL)needsRepair;
- (void)removeChild:(id)arg1;
- (void)removeChild:(id)arg1 changedPropertyName:(id)arg2;
- (void)setNeedsRepair:(BOOL)arg1;
- (void)unlock;
- (BOOL)validateObject:(id *)arg1;
- (void)willSaveObject;

@end

