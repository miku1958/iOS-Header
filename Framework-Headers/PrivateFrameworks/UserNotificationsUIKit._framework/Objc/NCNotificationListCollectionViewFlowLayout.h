//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface NCNotificationListCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    BOOL _isChangingBounds;
    BOOL _showingNotificationsHistory;
    double _forcedContentSizeHeight;
    NSMutableArray *_insertedIndexPaths;
    NSMutableArray *_removedIndexPaths;
    NSMutableArray *_replacedIndexPaths;
}

@property (readonly, nonatomic) struct CGSize effectiveContentSize;
@property (nonatomic) double forcedContentSizeHeight; // @synthesize forcedContentSizeHeight=_forcedContentSizeHeight;
@property (strong, nonatomic) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
@property (strong, nonatomic) NSMutableArray *removedIndexPaths; // @synthesize removedIndexPaths=_removedIndexPaths;
@property (strong, nonatomic) NSMutableArray *replacedIndexPaths; // @synthesize replacedIndexPaths=_replacedIndexPaths;
@property (nonatomic, getter=isShowingNotificationsHistory) BOOL showingNotificationsHistory; // @synthesize showingNotificationsHistory=_showingNotificationsHistory;

- (void).cxx_destruct;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGSize)collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;

@end

