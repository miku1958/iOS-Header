//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>

@class NSOperationQueue, NSString, NSURL, SGSqlEntityStore;

@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver>
{
    NSURL *_vCardsDirectoryURL;
    NSOperationQueue *_spotlightWriteQueue;
    SGSqlEntityStore *_store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) SGSqlEntityStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

+ (id)entityIdentifiersFromCNIdentifiers:(id)arg1;
+ (id)searchableIndex;
- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmOrRejectContact:(id)arg1;
- (id)coreSpotlightAttributeSetForContact:(id)arg1;
- (id)init;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (void)rejectContact:(id)arg1;
- (void)removeAllPseudoContactsInIdSet:(id)arg1;
- (void)removeAllStoredPseudoContacts;
- (id)searchableItemsForContactsForInternalIdentifiers:(id)arg1;
- (void)sendContactToSpotlight:(id)arg1;
- (void)storeClosing;

@end

