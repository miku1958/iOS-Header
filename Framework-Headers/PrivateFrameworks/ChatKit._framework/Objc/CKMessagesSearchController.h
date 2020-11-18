//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKMessagesSearchController : CKMessageTypeSearchController
{
}

+ (Class)cellClass;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)supportsQuicklookForResult:(id)arg1;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)customLayoutSectionForEnvironment:(id)arg1;
- (id)fetchAttributes;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)queryAttributesForText:(id)arg1;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;

@end
