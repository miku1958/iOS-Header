//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSArray, NSIndexSet, NSString, PLManagedObject, PLObjectSnapshot;

@interface PLContainerChangeNotification : PLChangeNotification
{
    id _object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    BOOL _didCalculateDiffs;
    BOOL _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSIndexSet *_changedIndexes;
    BOOL _countDidChange;
}

@property (readonly, strong, nonatomic) NSArray *_changedObjects;
@property (readonly, strong, nonatomic) NSString *_contentRelationshipName;
@property (nonatomic, setter=_setDidCalculateDiffs:) BOOL _didCalculateDiffs;
@property (readonly, strong, nonatomic) NSString *_diffDescription;
@property (readonly, strong, nonatomic) PLManagedObject *_managedObject;
@property (readonly, strong, nonatomic) NSIndexSet *changedIndexes;
@property (readonly, strong, nonatomic) NSIndexSet *changedIndexesRelativeToSnapshot;
@property (readonly, strong, nonatomic) NSArray *changedObjects;
@property (readonly, nonatomic) BOOL countDidChange;
@property (readonly, strong, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, strong, nonatomic) NSArray *deletedObjects;
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, strong, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, strong, nonatomic) NSArray *insertedObjects;
@property (readonly, strong, nonatomic) struct __CFArray *movedFromIndexes; // @synthesize movedFromIndexes=_movedFromIndexes;
@property (readonly, strong, nonatomic) NSIndexSet *movedIndexes; // @synthesize movedIndexes=_movedIndexes;
@property (readonly, nonatomic) BOOL shouldReload;
@property (readonly, strong, nonatomic) PLObjectSnapshot *snapshot;

- (void)_calculateDiffs;
- (void)_calculateDiffsIfNecessary;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_init;
- (id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3;
- (void)dealloc;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)name;
- (id)object;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;

@end

