//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerProviderItemDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CNPhotoPickerProviderGroupDelegate, CNScheduler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderGroup : NSObject <CNPhotoPickerProviderItemDelegate>
{
    BOOL _allowAddItem;
    BOOL _showCircleMask;
    long long _groupType;
    id<CNPhotoPickerProviderGroupDelegate> _delegate;
    unsigned long long _itemsPerRow;
    NSArray *_providers;
    NSArray *_addItems;
    NSArray *_displayItems;
    NSArray *_addedItems;
    NSArray *_removedItems;
    NSMutableDictionary *_itemsGroupedByProvider;
    NSArray *_availablePaddingItems;
    NSArray *_paddingItems;
    id<CNScheduler> _workQueue;
    id<CNScheduler> _providerItemRenderingQueue;
    id<CNScheduler> _callbackQueue;
}

@property (strong, nonatomic) NSArray *addItems; // @synthesize addItems=_addItems;
@property (strong, nonatomic) NSArray *addedItems; // @synthesize addedItems=_addedItems;
@property (readonly, nonatomic) BOOL allowAddItem; // @synthesize allowAddItem=_allowAddItem;
@property (strong, nonatomic) NSArray *availablePaddingItems; // @synthesize availablePaddingItems=_availablePaddingItems;
@property (readonly, nonatomic) id<CNScheduler> callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNPhotoPickerProviderGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property (readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *itemsGroupedByProvider; // @synthesize itemsGroupedByProvider=_itemsGroupedByProvider;
@property (nonatomic) unsigned long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
@property (strong, nonatomic) NSArray *paddingItems; // @synthesize paddingItems=_paddingItems;
@property (readonly, nonatomic) id<CNScheduler> providerItemRenderingQueue; // @synthesize providerItemRenderingQueue=_providerItemRenderingQueue;
@property (strong, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property (strong, nonatomic) NSArray *removedItems; // @synthesize removedItems=_removedItems;
@property (readonly, nonatomic) BOOL showCircleMask; // @synthesize showCircleMask=_showCircleMask;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<CNScheduler> workQueue; // @synthesize workQueue=_workQueue;

+ (id)addItemsGroupWithProviders:(id)arg1 environment:(id)arg2;
+ (id)animojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3;
+ (id)emojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3;
+ (id)injectedItemsGroupWithEnvironment:(id)arg1;
+ (id)suggestionsGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3;
- (void).cxx_destruct;
- (long long)addProviderItem:(id)arg1;
- (BOOL)hasAddedProviderItems;
- (id)initWithProviders:(id)arg1 groupType:(long long)arg2 environment:(id)arg3 allowAddItem:(BOOL)arg4;
- (id)itemsForProviderIdentifier:(id)arg1;
- (void)loadProvidersItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(BOOL)arg4;
- (long long)numberOfItems;
- (void)prepareDisplayItems:(id)arg1;
- (id)providerItemAtIndex:(long long)arg1;
- (void)providerItemDidUpdate:(id)arg1;
- (void)reloadDisplayItemsNotifyDelegate:(BOOL)arg1;
- (void)removeAllAddedProviderItems;
- (long long)removeProviderItem:(id)arg1;
- (id)suggestionsProviderPrecedingFacesProvider;

@end

