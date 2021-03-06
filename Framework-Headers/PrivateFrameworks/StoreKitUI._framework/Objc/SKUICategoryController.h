//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICategoryTableViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, NSURL, SKUICategory, SKUICategoryArtworkLoader, SKUICategoryTableViewController, SKUIClientContext, SKUISegmentedControl, SSVLoadURLOperation, UIBarButtonItem, UIPopoverController, UISegmentedControl, UIViewController;
@protocol SKUICategoryControllerDelegate;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate>
{
    SKUICategoryArtworkLoader *_artworkLoader;
    UIBarButtonItem *_button;
    SKUIClientContext *_clientContext;
    UIViewController *_contentsController;
    NSURL *_defaultURL;
    id<SKUICategoryControllerDelegate> _delegate;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UIPopoverController *_popover;
    SKUICategory *_rootCategory;
    NSURL *_selectedURL;
    SKUISegmentedControl *_segmentedControl;
    long long _segmentedControlLength;
    NSArray *_segmentedControlSegments;
    SKUICategoryTableViewController *_tableViewController;
}

@property (strong, nonatomic) SKUICategory *category; // @synthesize category=_rootCategory;
@property (readonly, nonatomic) UIBarButtonItem *categoryButton;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSURL *defaultURL; // @synthesize defaultURL=_defaultURL;
@property (weak, nonatomic) id<SKUICategoryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isLoading;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly, nonatomic) UISegmentedControl *segmentedControl;
@property (nonatomic) long long segmentedControlLength; // @synthesize segmentedControlLength=_segmentedControlLength;
@property (strong, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkLoader;
- (id)_metricsLocationsWithIndex:(long long)arg1;
- (void)_precacheArtworkForCategory:(id)arg1;
- (void)_recordClickEventWithCategory:(id)arg1 index:(long long)arg2;
- (void)_reloadSegmentedControl;
- (void)_reloadSelectedSegment;
- (id)_rootMetricsLocations;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (id)_tableViewControllerWithCategory:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (void)dealloc;
- (void)dismiss;
- (id)initWithContentsController:(id)arg1;
- (void)loadFromURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)metricsPageContextForCategoryTableView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)segmentedControlAction:(id)arg1;

@end

