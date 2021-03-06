//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray;

@interface GKAchievementDataSource : GKCollectionDataSource
{
    GKGameRecord *_gameRecord;
    NSArray *_achievements;
    NSArray *_localAchievements;
    struct UIEdgeInsets _collectionLayoutInsets;
}

@property (strong, nonatomic) NSArray *achievements; // @synthesize achievements=_achievements;
@property (nonatomic) struct UIEdgeInsets collectionLayoutInsets; // @synthesize collectionLayoutInsets=_collectionLayoutInsets;
@property (strong, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property (strong, nonatomic) NSArray *localAchievements; // @synthesize localAchievements=_localAchievements;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)heightMultipliersForSizeCategories;
- (id)initWithGameRecord:(id)arg1;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)arg1;

@end

