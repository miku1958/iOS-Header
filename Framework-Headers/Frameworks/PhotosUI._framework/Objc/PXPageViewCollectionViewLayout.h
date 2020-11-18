//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface PXPageViewCollectionViewLayout : UICollectionViewFlowLayout
{
    BOOL _pagingEnabled;
}

@property (nonatomic) BOOL pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;

- (double)_pageWidth;
- (unsigned long long)pageForContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

