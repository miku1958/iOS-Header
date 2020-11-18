//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUpUI/FLViewModel-Protocol.h>

@class FLFollowUpController, NSString;

@interface FLTopLevelViewModel : NSObject <FLViewModel>
{
    FLFollowUpController *_controller;
    int _notifyToken;
    CDUnknownBlockType _itemChangeObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)allPendingItems;
- (BOOL)allPendingItemsContains:(id)arg1;
- (void)dealloc;
- (id)extensionToItemMapFromItems:(id)arg1;
- (id)groups;
- (id)initWithIdentifier:(id)arg1;
- (void)mapItemsToGroups:(id)arg1;
- (void)refreshItems:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshItemsForItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setItemChangeHandler:(CDUnknownBlockType)arg1;

@end

