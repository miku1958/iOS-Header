//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHFetchResult.h>

@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary;

@interface PHManualFetchResult : PHFetchResult
{
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_objects;
    NSString *_identifier;
}

@property (readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSArray *objects; // @synthesize objects=_objects;

+ (id)emptyFetchResultWithPhotoLibrary:(id)arg1;
- (void).cxx_destruct;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (id)copyWithOptions:(id)arg1;
- (id)description;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchSortDescriptors;
- (id)fetchUpdatedObjects;
- (id)fetchedObjectIDs;
- (id)fetchedObjectIDsSet;
- (id)fetchedObjects;
- (void)getMediaTypeCounts;
- (unsigned long long)hash;
- (id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6;
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6;
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6 photosCount:(unsigned long long)arg7 videosCount:(unsigned long long)arg8 audiosCount:(unsigned long long)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFullyBackedByObjectIDs;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)photoLibrary;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
