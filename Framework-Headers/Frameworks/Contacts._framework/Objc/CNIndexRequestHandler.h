//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CSSearchableIndexDelegate-Protocol.h>

@class CNContactStore, CSSearchableIndex, NSString;
@protocol OS_dispatch_queue;

@interface CNIndexRequestHandler : NSObject <CSSearchableIndexDelegate>
{
    void *_ab;
    CNContactStore *_store;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    CSSearchableIndex *_index;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property (readonly) Class superclass;

+ (id)defaultSearchableItemsDomain;
+ (id)descriptorForRequiredKeysForSearchableItem;
+ (void)initialize;
+ (id)searchableItemsDomain;
+ (void)setSearchableItemsDomain:(id)arg1;
- (void).cxx_destruct;
- (id)contactIdentifierFromPerson:(void *)arg1;
- (void)dealloc;
- (void)finishIndexingAllSearchableItemsIfNecessary;
- (id)init;
- (id)initWithAddressBook:(void *)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (id)searchableItemForContactIdentifier:(id)arg1;
- (id)searchableItemForPerson:(void *)arg1;

@end
