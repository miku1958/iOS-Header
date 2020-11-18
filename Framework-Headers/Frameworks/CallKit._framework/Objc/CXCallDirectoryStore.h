//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CXDatabase, NSString, NSURL;

@interface CXCallDirectoryStore : NSObject
{
    BOOL _temporary;
    CXDatabase *_database;
    long long _lastAddBlockingEntriesCount;
    NSString *_addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
    long long _lastRemoveBlockingEntriesCount;
    NSString *_removeBlockingEntriesSQL;
    long long _lastAddIdentificationEntriesCount;
    NSString *_addIdentificationEntriesInsertLabelsSQL;
    NSString *_addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
    long long _lastAddPhoneNumbersCount;
    NSString *_addPhoneNumbersSQL;
    long long _lastRemoveIdentificationEntriesCount;
    NSString *_removeIdentificationEntriesSQL;
}

@property (copy, nonatomic) NSString *addBlockingEntriesInsertPhoneNumberBlockingEntrySQL; // @synthesize addBlockingEntriesInsertPhoneNumberBlockingEntrySQL=_addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertLabelsSQL; // @synthesize addIdentificationEntriesInsertLabelsSQL=_addIdentificationEntriesInsertLabelsSQL;
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL; // @synthesize addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL=_addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
@property (copy, nonatomic) NSString *addPhoneNumbersSQL; // @synthesize addPhoneNumbersSQL=_addPhoneNumbersSQL;
@property (readonly, nonatomic, getter=isCorrupt) BOOL corrupt;
@property (strong, nonatomic) CXDatabase *database; // @synthesize database=_database;
@property (nonatomic) long long lastAddBlockingEntriesCount; // @synthesize lastAddBlockingEntriesCount=_lastAddBlockingEntriesCount;
@property (nonatomic) long long lastAddIdentificationEntriesCount; // @synthesize lastAddIdentificationEntriesCount=_lastAddIdentificationEntriesCount;
@property (nonatomic) long long lastAddPhoneNumbersCount; // @synthesize lastAddPhoneNumbersCount=_lastAddPhoneNumbersCount;
@property (nonatomic) long long lastRemoveBlockingEntriesCount; // @synthesize lastRemoveBlockingEntriesCount=_lastRemoveBlockingEntriesCount;
@property (nonatomic) long long lastRemoveIdentificationEntriesCount; // @synthesize lastRemoveIdentificationEntriesCount=_lastRemoveIdentificationEntriesCount;
@property (copy, nonatomic) NSString *removeBlockingEntriesSQL; // @synthesize removeBlockingEntriesSQL=_removeBlockingEntriesSQL;
@property (copy, nonatomic) NSString *removeIdentificationEntriesSQL; // @synthesize removeIdentificationEntriesSQL=_removeIdentificationEntriesSQL;
@property (readonly, nonatomic) long long schemaVersion;
@property (nonatomic, getter=isTemporary) BOOL temporary; // @synthesize temporary=_temporary;
@property (readonly, nonatomic) NSURL *url;

+ (id)databaseTemplateURL;
+ (id)databaseURLUsingTemporaryDirectory:(BOOL)arg1 error:(id *)arg2;
+ (BOOL)initializeDatabaseIfNecessaryAtURL:(id)arg1 usingTemplateAtURL:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (BOOL)_addBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (BOOL)_addIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (BOOL)_addPhoneNumbersWithEntryData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)_containsBlockingEntryWithSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;
- (long long)_findOrCreateIDForPhoneNumber:(long long)arg1 error:(id *)arg2;
- (id)_firstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;
- (id)_firstIdentificationEntryForSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;
- (BOOL)_parseFirstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)_parseIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)_removeBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (BOOL)_removeIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (BOOL)_removeUnreferencedLabelsWithError:(id *)arg1;
- (BOOL)_removeUnreferencedPhoneNumbersWithError:(id *)arg1;
- (id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg1 withPriorityOffset:(long long)arg2;
- (id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg1 defaultValue:(id)arg2 numberOfPairs:(unsigned long long)arg3;
- (id)_sqlStringListPlaceholderStringWithNumberOfEntries:(long long)arg1;
- (id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(long long)arg1 entryString:(id)arg2;
- (id)_storeIdentificationEntryWithExtensionBundleID:(id)arg1 localizedLabel:(id)arg2;
- (BOOL)addBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (BOOL)addBlockingEntryWithPhoneNumber:(long long)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (long long)addExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (long long)addExtensionWithIdentifier:(id)arg1 priority:(long long)arg2 error:(id *)arg3;
- (BOOL)addIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (BOOL)addIdentificationEntryWithPhoneNumber:(long long)arg1 labelID:(long long)arg2 extensionID:(long long)arg3 error:(id *)arg4;
- (long long)addLabel:(id)arg1 error:(id *)arg2;
- (BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id *)arg2;
- (BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumberInArray:(id)arg1 error:(id *)arg2;
- (BOOL)containsBlockingEntryWithPhoneNumber:(id)arg1 error:(id *)arg2;
- (BOOL)containsBlockingEntryWithPhoneNumberInArray:(id)arg1 error:(id *)arg2;
- (BOOL)containsExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)description;
- (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntriesForPhoneNumbers:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntryForPhoneNumber:(id)arg1 error:(id *)arg2;
- (long long)idForExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (long long)idForLabel:(id)arg1 error:(id *)arg2;
- (long long)idForPhoneNumber:(long long)arg1 error:(id *)arg2;
- (id)init;
- (id)initForReadingAndWritingWithError:(id *)arg1;
- (id)initForReadingWithError:(id *)arg1;
- (id)initReadOnly:(BOOL)arg1 temporary:(BOOL)arg2 error:(id *)arg3;
- (id)initWithTemplateURL:(id)arg1 readOnly:(BOOL)arg2 temporary:(BOOL)arg3 error:(id *)arg4;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)prioritizedExtensionIdentifiersWithError:(id *)arg1;
- (id)prioritizedExtensionsWithError:(id *)arg1;
- (BOOL)removeBlockingEntriesForExtensionWithID:(long long)arg1 error:(id *)arg2;
- (BOOL)removeBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (BOOL)removeExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)removeIdentificationEntriesForExtensionWithID:(long long)arg1 error:(id *)arg2;
- (BOOL)removeIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (BOOL)removeUnreferencedRecordsWithError:(id *)arg1;
- (long long)schemaVersionWithError:(id *)arg1;
- (BOOL)setPrioritizedExtensionIdentifiers:(id)arg1 error:(id *)arg2;
- (BOOL)setState:(long long)arg1 forExtensionWithID:(long long)arg2 error:(id *)arg3;
- (BOOL)setState:(long long)arg1 forExtensionWithIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)setStateForAllExtensions:(long long)arg1 error:(id *)arg2;
- (BOOL)setStateLastModifiedDate:(id)arg1 forExtensionWithID:(long long)arg2 error:(id *)arg3;
- (BOOL)vacuumWithError:(id *)arg1;

@end
