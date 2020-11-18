//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSMutableArray, SUClientInterface, SUItem, SUStructuredPage;

@interface SUStructuredPageTableDataSource : SUTableDataSource
{
    SUItem *_activeLoadMoreItem;
    NSMutableArray *_cachedHeaderViews;
    SUClientInterface *_clientInterface;
    double _offerButtonWidth;
    SUStructuredPage *_structuredPage;
    long long _style;
}

@property (strong, nonatomic) SUItem *activeLoadMoreItem; // @synthesize activeLoadMoreItem=_activeLoadMoreItem;
@property (strong, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property (strong, nonatomic) SUStructuredPage *structuredPage; // @synthesize structuredPage=_structuredPage;
@property (nonatomic) long long style; // @synthesize style=_style;

- (void)_configureLoadMoreCell:(id)arg1 forItem:(id)arg2;
- (id)_itemOfferButtonForCell:(id)arg1 item:(id)arg2;
- (BOOL)_shouldShowItemOfferButtonForItem:(id)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (BOOL)canShowItemOfferButtonForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id *)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (double)cellHeightForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)dealloc;
- (BOOL)deleteIndexPath:(id)arg1;
- (id)headerViewForSection:(long long)arg1;
- (id)newHeaderViewForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)reloadCellContexts;
- (void)reloadData;
- (long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)sectionIndexTitles;
- (long long)tableViewStyle;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;

@end
