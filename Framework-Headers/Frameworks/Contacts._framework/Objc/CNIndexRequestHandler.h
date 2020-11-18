//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSIndexExtensionRequestHandler.h>

@class CNContactStore, CSSearchableIndex, NSObject;
@protocol OS_dispatch_queue;

@interface CNIndexRequestHandler : CSIndexExtensionRequestHandler
{
    void *_ab;
    CNContactStore *_store;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    CSSearchableIndex *_index;
}

@property (readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;

+ (id)defaultSearchableItemsDomain;
+ (id)descriptorForRequiredKeysForSearchableItem;
+ (void)initialize;
+ (id)searchableItemsDomain;
+ (void)setSearchableItemsDomain:(id)arg1;
- (void).cxx_destruct;
- (id)contactIdentifierFromPerson:(void *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAddressBook:(void *)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (id)searchableItemForContactIdentifier:(id)arg1;
- (id)searchableItemForPerson:(void *)arg1;

@end
