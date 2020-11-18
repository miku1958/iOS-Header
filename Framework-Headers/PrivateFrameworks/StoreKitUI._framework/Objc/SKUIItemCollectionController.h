//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIResourceLoader, SKUIScreenshotDataConsumer, SKUIStyledImageDataConsumer, UIImage;
@protocol SKUIItemCollectionDelegate;

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver>
{
    NSMutableDictionary *_itemIDsToArtworkRequestIDs;
    UIImage *_placeholderImage;
    NSMutableDictionary *_itemIDsToScreenshotRequestIDs;
    BOOL _delegateProvidesScreenshots;
    UIImage *_landscapeScreenshotPlaceholderImage;
    UIImage *_portraitScreenshotPlaceholderImage;
    id<SKUIItemCollectionDelegate> _delegate;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    SKUIItemArtworkContext *_artworkContext;
    SKUIStyledImageDataConsumer *_iconDataConsumer;
    SKUIScreenshotDataConsumer *_landscapeScreenshotDataConsumer;
    SKUIScreenshotDataConsumer *_portraitScreenshotDataConsumer;
    NSArray *_items;
    long long _numberOfItemsPerPage;
    double _numberOfPagesToCacheAhead;
}

@property (strong, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
@property (strong, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIItemCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer; // @synthesize iconDataConsumer=_iconDataConsumer;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer; // @synthesize landscapeScreenshotDataConsumer=_landscapeScreenshotDataConsumer;
@property (nonatomic) long long numberOfItemsPerPage; // @synthesize numberOfItemsPerPage=_numberOfItemsPerPage;
@property (nonatomic) double numberOfPagesToCacheAhead; // @synthesize numberOfPagesToCacheAhead=_numberOfPagesToCacheAhead;
@property (strong, nonatomic) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer; // @synthesize portraitScreenshotDataConsumer=_portraitScreenshotDataConsumer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkLoader;
- (void)_enumerateVisibleCellLayoutsWithBlock:(CDUnknownBlockType)arg1;
- (id)_iconArtworkRequestWithItem:(id)arg1;
- (id)_initSKUIItemCollectionController;
- (BOOL)_loadArtworkForItem:(id)arg1 reason:(long long)arg2;
- (void)_memoryWarningNotification:(id)arg1;
- (id)_placeholderImageForItem:(id)arg1;
- (id)_placeholderImageForScreenshot:(id)arg1;
- (void)_reloadForItemStateChange:(id)arg1;
- (void)_reloadForRestrictionsChange;
- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(BOOL)arg3;
- (id)_screenshotArtworkRequestWithItem:(id)arg1;
- (id)_screenshotForItem:(id)arg1;
- (struct _NSRange)_visibleItemRange;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)cancelArtworkLoadForItemIndex:(long long)arg1;
- (void)configureCellLayout:(id)arg1 forIndex:(long long)arg2;
- (void)dealloc;
- (void)didEndDisplayingItemAtIndex:(long long)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (id)init;
- (id)initWithClientContext:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (id)performActionForItemAtIndex:(long long)arg1;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint)arg1 direction:(double)arg2;
- (void)removeAllCachedResources;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

@end
