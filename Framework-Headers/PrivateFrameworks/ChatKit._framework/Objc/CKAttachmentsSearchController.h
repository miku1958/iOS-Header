//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessageTypeSearchController.h>

#import <ChatKit/QLPreviewControllerConformingDelegate-Protocol.h>
#import <ChatKit/QLPreviewControllerDelegate-Protocol.h>

@class NSString;

@interface CKAttachmentsSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (BOOL)supportsMacSelection;
+ (BOOL)supportsQuicklookForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (void)fractionalWidth:(double *)arg1 count:(unsigned long long *)arg2 forLayoutWidth:(unsigned long long)arg3;
- (BOOL)handleSelectionForResult:(id)arg1;
- (double)interGroupSpacing;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;

@end

