//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIKBCandidateCollectionView : UICollectionView
{
}

@property (readonly, nonatomic) NSIndexPath *selectedItemIndexPath;

- (BOOL)_selectAndScrollToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (void)configureAsCandidatesBar;
- (BOOL)delaysContentTouches;

@end

