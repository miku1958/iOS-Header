//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UICollectionView, UICollectionViewDiffableDataSource;

@interface ICRDDataSource : NSObject
{
    BOOL _isAddingOrRemovingPassword;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_collectionViewDiffableDataSource;
    NSArray *_sectionControllers;
    CDUnknownBlockType _willExpandItemHandler;
    CDUnknownBlockType _willCollapseItemHandler;
    id _firstRelevantItemIdentifier;
}

@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource; // @synthesize collectionViewDiffableDataSource=_collectionViewDiffableDataSource;
@property (readonly, nonatomic) id firstRelevantItemIdentifier; // @synthesize firstRelevantItemIdentifier=_firstRelevantItemIdentifier;
@property (nonatomic) BOOL isAddingOrRemovingPassword; // @synthesize isAddingOrRemovingPassword=_isAddingOrRemovingPassword;
@property (strong, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property (copy, nonatomic) CDUnknownBlockType willCollapseItemHandler; // @synthesize willCollapseItemHandler=_willCollapseItemHandler;
@property (copy, nonatomic) CDUnknownBlockType willExpandItemHandler; // @synthesize willExpandItemHandler=_willExpandItemHandler;

- (void).cxx_destruct;
- (id)associatedCellsForManagedObjectIDs:(id)arg1;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (void)noteDidAddOrRemovePassword:(id)arg1;
- (void)noteWillAddOrRemovePassword:(id)arg1;
- (void)reindexDataAnimated:(BOOL)arg1;
- (void)reindexDataAnimated:(BOOL)arg1 dataIndexedBlock:(CDUnknownBlockType)arg2 dataRenderedBlock:(CDUnknownBlockType)arg3;
- (void)reloadDataAnimated:(BOOL)arg1;
- (void)reloadDataAnimated:(BOOL)arg1 dataIndexedBlock:(CDUnknownBlockType)arg2 dataRenderedBlock:(CDUnknownBlockType)arg3;
- (void)willEnterForeground:(id)arg1;

@end

