//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSManagedObjectID, NSString, PHPhotoLibrary;

@interface PHObject : NSObject <NSCopying>
{
    BOOL _deleted;
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _propertyHint;
}

@property (readonly, getter=isDeleted) BOOL deleted; // @synthesize deleted=_deleted;
@property (readonly) id identifier;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property (readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property unsigned long long propertyHint; // @synthesize propertyHint=_propertyHint;
@property (readonly, getter=isTransient) BOOL transient;
@property (readonly) NSString *uuid; // @synthesize uuid=_uuid;

+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2;
+ (void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)identifierCodeFromLocalIdentifier:(id)arg1;
+ (id)identifierPropertiesToFetch;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsFaceCropGeneration;
+ (BOOL)managedObjectSupportsFaceVisibility;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsPersonFilters;
+ (BOOL)managedObjectSupportsRejectedState;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)_shortObjectIDURI;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)hasLoadedPropertySet:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

