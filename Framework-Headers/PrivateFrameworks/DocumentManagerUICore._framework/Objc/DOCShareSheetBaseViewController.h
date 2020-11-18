//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentManagerUICore/DOCShareFPItemLoaderDelegate-Protocol.h>
#import <DocumentManagerUICore/FPItemCollectionDelegate-Protocol.h>
#import <DocumentManagerUICore/UIShareUIAccessoryPresenting-Protocol.h>

@class DOCFileProviderMonitor, DOCShareHeaderView, NSDictionary, NSMutableArray, NSString;
@protocol DOCShareFPItemLoader, UIShareUIAccessoryHosting;

@interface DOCShareSheetBaseViewController : UIViewController <DOCShareFPItemLoaderDelegate, FPItemCollectionDelegate, UIShareUIAccessoryPresenting>
{
    id<UIShareUIAccessoryHosting> _host;
    id<DOCShareFPItemLoader> _itemLoader;
    DOCFileProviderMonitor *_fileProviderMonitor;
    NSMutableArray *_items;
    NSDictionary *_itemCollections;
    DOCShareHeaderView *_header;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DOCFileProviderMonitor *fileProviderMonitor; // @synthesize fileProviderMonitor=_fileProviderMonitor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) DOCShareHeaderView *header; // @synthesize header=_header;
@property (readonly, weak, nonatomic) id<UIShareUIAccessoryHosting> host; // @synthesize host=_host;
@property (strong, nonatomic) NSDictionary *itemCollections; // @synthesize itemCollections=_itemCollections;
@property (readonly, nonatomic) id<DOCShareFPItemLoader> itemLoader; // @synthesize itemLoader=_itemLoader;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) BOOL shouldShowAddTagButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calculatePreferredSize;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (id)combineProviderNames:(id)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)dealloc;
- (void)didFailToLoadItems;
- (void)didLoadItems:(id)arg1;
- (id)initWithHost:(id)arg1 itemLoader:(id)arg2 fileProviderMonitor:(id)arg3;
- (id)overrideTraitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHeader;

@end

