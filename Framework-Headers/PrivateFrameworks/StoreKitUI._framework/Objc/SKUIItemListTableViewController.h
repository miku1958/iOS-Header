//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <StoreKitUI/SKUIItemCollectionDelegate-Protocol.h>

@class NSMutableIndexSet, NSOperationQueue, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIItemList, SKUIResourceLoader, SKUIStyledImageDataConsumer, SKUIUber, SSVLoadURLOperation;
@protocol SKUIItemListTableDelegate;

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate>
{
    SKUIClientContext *_clientContext;
    id<SKUIItemListTableDelegate> _delegate;
    BOOL _delegateWantsCanRemove;
    BOOL _delegateWantsDidRemove;
    BOOL _delegateWantsWillDisplay;
    BOOL _didLoadMore;
    NSMutableIndexSet *_hiddenIconIndexSet;
    struct CGSize _imageBoundingSize;
    SKUIItemArtworkContext *_artworkContext;
    SKUIItemCollectionController *_itemCollectionController;
    SKUIItemList *_itemList;
    SSVLoadURLOperation *_loadMoreOperation;
    BOOL _loadsMoreItems;
    NSOperationQueue *_operationQueue;
    double _rowHeight;
    long long _selectionStyle;
    long long _separatorStyle;
    BOOL _suspended;
    SKUIUber *_uber;
    BOOL _requestedLoadMore;
}

@property (strong, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
@property (strong, nonatomic) SKUIResourceLoader *artworkLoader;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIItemListTableDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property (strong, nonatomic) SKUIItemList *itemList; // @synthesize itemList=_itemList;
@property (nonatomic) BOOL loadsMoreItems; // @synthesize loadsMoreItems=_loadsMoreItems;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property (nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property (nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property (strong, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property (readonly, nonatomic) NSString *visibleMetricsImpressions;

- (void).cxx_destruct;
- (void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2;
- (id)_itemCollectionController;
- (id)_itemListCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_loadRemainingItemsWithPriority:(long long)arg1;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2;
- (void)itemTableView:(id)arg1 didRemoveCell:(id)arg2;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setItemArtworkContext:(id)arg1;
- (void)setItemCellClass:(Class)arg1;
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)unhideIcons;
- (void)viewDidAppear:(BOOL)arg1;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;

@end
