//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIMetricsViewController-Protocol.h>
#import <StoreKitUI/SKUIProductPageChildViewController-Protocol.h>
#import <StoreKitUI/SKUISwooshViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUIColorScheme, SKUIMetricsController, SKUIProductPageHeaderViewController, SKUIResourceLoader, SSVPlatformRequestOperation, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

@interface SKUISwooshArrayViewController : UIViewController <SKUIMetricsViewController, SKUISwooshViewControllerDelegate, UIScrollViewDelegate, SKUIProductPageChildViewController>
{
    BOOL _askPermission;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id<SKUIProductPageChildViewControllerDelegate> _delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SSVPlatformRequestOperation *_platformOperation;
    UIScrollView *_scrollView;
    NSMutableArray *_swooshArtworkLoaders;
    NSArray *_swooshComponents;
    NSMutableArray *_viewControllers;
}

@property (nonatomic) BOOL askPermission; // @synthesize askPermission=_askPermission;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (strong, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property (strong, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *swooshComponents; // @synthesize swooshComponents=_swooshComponents;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (void)_addMissingItemsWithResponse:(id)arg1 error:(id)arg2;
- (id)_artworkLoader;
- (id)_clickEventForSeeAllForViewController:(id)arg1;
- (id)_clickEventWithItem:(id)arg1;
- (void)_layoutSwooshViews;
- (void)_loadMissingItemsIfNecessary;
- (void)_reloadChildViewControllers;
- (id)_scrollView;
- (id)activeMetricsController;
- (void)dealloc;
- (id)initWithSwooshComponents:(id)arg1;
- (BOOL)isSkLoaded;
- (void)loadMissingItemData;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

