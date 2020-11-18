//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray, NSMutableArray, NSMutableDictionary;

@interface CNFavorites : NSObject
{
    NSMutableArray *_entries;
    BOOL _dirty;
    BOOL _postCount;
    BOOL _needsReload;
    BOOL _autoUpdating;
    CNContactStore *_store;
    NSMutableDictionary *_uidToEntry;
}

@property (readonly, nonatomic) BOOL autoUpdating; // @synthesize autoUpdating=_autoUpdating;
@property (nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
@property (readonly, nonatomic) NSArray *entries;
@property (readonly, getter=isFull) BOOL full;
@property (nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property (nonatomic) BOOL postCount; // @synthesize postCount=_postCount;
@property (strong, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property (strong, nonatomic) NSMutableDictionary *uidToEntry; // @synthesize uidToEntry=_uidToEntry;

+ (id)favoritesPath;
+ (void)flushSingleton;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addEntryToMap:(id)arg1;
- (void)_delayedLookup;
- (void)_entriesChangedExternally;
- (id)_entryDictionaries;
- (void)_entryIdentityChanged:(id)arg1;
- (BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (void)_scheduleSave;
- (BOOL)_writeFavoritesToFile:(id)arg1;
- (void)addEntry:(id)arg1;
- (BOOL)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;
- (void)clearState;
- (BOOL)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)entriesForContact:(id)arg1;
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;
- (id)entriesForContacts:(id)arg1;
- (id)entriesWithRecaching:(BOOL)arg1;
- (BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)init;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 autoUpdating:(BOOL)arg2;
- (void)loadEntriesIfNecessaryAndRecache:(BOOL)arg1;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)recacheIdentitiesSoon;
- (void)removeAllEntries;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)save;
- (void)saveImmediately;
- (id)synchronousRemoteObjectProxyForContactsXPCService;

@end

