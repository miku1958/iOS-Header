//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContactsUserDefaults.h>

@class CNiOSABContactsUserDefaultsABWrapper, NSCache, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults
{
    NSMutableDictionary *_observerCountPerKey;
    NSCache *_valueCache;
    CNiOSABContactsUserDefaultsABWrapper *_abWrapper;
}

@property (readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper; // @synthesize abWrapper=_abWrapper;
@property (strong, nonatomic) NSMutableDictionary *observerCountPerKey; // @synthesize observerCountPerKey=_observerCountPerKey;
@property (strong, nonatomic) NSCache *valueCache; // @synthesize valueCache=_valueCache;

- (void).cxx_destruct;
- (void)_registerObserverForKey:(id)arg1;
- (void)_unregisterObserverForKey:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)countryCode;
- (void)dealloc;
- (long long)displayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (void)flushCache;
- (id)init;
- (id)initWithABWrapper:(id)arg1;
- (BOOL)isShortNameFormatEnabled;
- (long long)newContactDisplayNameOrder;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setDisplayNameOrder:(long long)arg1;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (void)setShortNameFormat:(long long)arg1;
- (void)setShortNameFormatEnabled:(BOOL)arg1;
- (void)setShortNameFormatPrefersNicknames:(BOOL)arg1;
- (long long)shortNameFormat;
- (BOOL)shortNameFormatPrefersNicknames;
- (long long)sortOrder;

@end

