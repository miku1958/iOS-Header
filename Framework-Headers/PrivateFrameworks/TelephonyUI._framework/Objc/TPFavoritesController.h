//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUI/TUCallProviderManagerDelegate-Protocol.h>

@class CNContactStore, CNFavorites, NSArray, NSCache, NSString, TUCallProviderManager;
@protocol OS_dispatch_queue;

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate>
{
    TUCallProviderManager *_callProviderManager;
    NSCache *_contactCache;
    CNContactStore *_contactStore;
    NSArray *_favoritesEntries;
    CNFavorites *_favoritesManager;
    NSCache *_transportNameCache;
    unsigned long long _prefetchCount;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property (readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property (readonly, nonatomic) NSCache *contactCache; // @synthesize contactCache=_contactCache;
@property (readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *favoritesEntries; // @synthesize favoritesEntries=_favoritesEntries;
@property (readonly, nonatomic) CNFavorites *favoritesManager; // @synthesize favoritesManager=_favoritesManager;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSCache *transportNameCache; // @synthesize transportNameCache=_transportNameCache;

- (void).cxx_destruct;
- (unsigned long long)absoluteIndexForIndex:(unsigned long long)arg1;
- (id)addEntry:(id)arg1;
- (BOOL)canAddEntry;
- (id)contactCacheKeyForFavoritesEntry:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (void)dealloc;
- (id)fetchContactForFavoritesEntry:(id)arg1;
- (id)fetchContactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)fetchFavoritesEntries;
- (id)fetchTransportNameForFavoritesEntry:(id)arg1;
- (void)handleContactsFavoritesDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1 prefetchCount:(unsigned long long)arg2;
- (void)moveEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)removeEntriesAtIndexes:(id)arg1;
- (id)transportNameCacheKeyForFavoritesEntry:(id)arg1;
- (id)transportNameForFavoritesEntry:(id)arg1;

@end

