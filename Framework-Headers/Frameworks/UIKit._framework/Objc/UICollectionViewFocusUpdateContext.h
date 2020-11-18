//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIFocusUpdateContext.h>

@class NSIndexPath, UICollectionView;

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext
{
    BOOL _didSetPreviouslyFocusedIndexPath;
    BOOL _didSetNextFocusedIndexPath;
    NSIndexPath *_previouslyFocusedIndexPath;
    NSIndexPath *_nextFocusedIndexPath;
    UICollectionView *_collectionView;
}

@property (readonly, weak, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, nonatomic) NSIndexPath *nextFocusedIndexPath; // @synthesize nextFocusedIndexPath=_nextFocusedIndexPath;
@property (readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // @synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath;

+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2;
+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;
- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;

@end

