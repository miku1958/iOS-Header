//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUITableRowCardSectionView.h>

@interface SearchUITableHeaderCardSectionView : SearchUITableRowCardSectionView
{
    BOOL _isCompactTable;
    BOOL _headerIsVibrant;
    long long _firstTrailingIndex;
}

@property long long firstTrailingIndex; // @synthesize firstTrailingIndex=_firstTrailingIndex;
@property BOOL headerIsVibrant; // @synthesize headerIsVibrant=_headerIsVibrant;
@property BOOL isCompactTable; // @synthesize isCompactTable=_isCompactTable;

- (double)fontSize;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2;
- (double)labelBottomBaselineSpacing;
- (double)labelTopBaselineSpacing;
- (BOOL)labelsAreVibrant;
- (long long)numberOfColumns;
- (void)setupWithTableRowCardSectionViews:(id)arg1;

@end

