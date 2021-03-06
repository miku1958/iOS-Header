//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView
{
}

@property (strong, nonatomic) TLKGridRowView *contentView; // @dynamic contentView;

+ (struct UIEdgeInsets)defaultLayoutMargins;
+ (BOOL)hasOnlyImages:(id)arg1;
+ (BOOL)isAHeader:(id)arg1;
+ (double)largestImageSizeForSection:(id)arg1;
+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (id)leadingTextView;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;
- (struct UIEdgeInsets)verticalBaselineInsetsForHeader:(BOOL)arg1 isCompactTable:(BOOL)arg2;
- (struct UIEdgeInsets)verticalBaselineInsetsForRowsWithCompactTable:(BOOL)arg1;

@end

