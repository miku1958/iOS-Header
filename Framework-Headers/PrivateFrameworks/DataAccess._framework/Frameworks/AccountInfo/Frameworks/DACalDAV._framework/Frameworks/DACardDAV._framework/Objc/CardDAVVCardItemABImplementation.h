//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACardDAV/CardDAVVCardItem.h>

@class NSData, NSMutableDictionary, NSNumber, NSString, NSURL;
@protocol DACardDAVRecord;

@interface CardDAVVCardItemABImplementation : CardDAVVCardItem
{
    unsigned int _abRecordType;
    NSData *_dataPayload;
    id<DACardDAVRecord> _cardDAVRecordItem;
    NSString *_syncKey;
    NSMutableDictionary *_UUIDToPersonCache;
    void *_abRecord;
    NSURL *_serverID;
    NSNumber *_clientID;
}

@property (nonatomic) void *abRecord; // @synthesize abRecord=_abRecord;
@property (nonatomic) unsigned int abRecordType; // @synthesize abRecordType=_abRecordType;

- (void).cxx_destruct;
- (id)UUIDToPersonCache;
- (id)cardDAVRecordItem;
- (id)clientID;
- (id)convertToDAContactSearchResultElement;
- (id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)arg1;
- (id)dataPayload;
- (void)dealloc;
- (BOOL)deleteFromContainer:(void *)arg1;
- (BOOL)deleteFromContainer:(void *)arg1 account:(id)arg2;
- (id)initWithABRecord:(void *)arg1 addressBook:(void *)arg2 outNeedsDBSave:(BOOL *)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (void)loadClientIDs;
- (BOOL)loadLocalItemWithAccount:(id)arg1;
- (BOOL)saveIfGroupWithLocalObject:(id)arg1 toContainer:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (BOOL)saveServerIDToExistingItem;
- (unsigned long long)saveWithLocalObject:(id)arg1 toContainer:(id)arg2 containerURL:(id)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL *)arg5 account:(id)arg6 shouldSaveGroups:(BOOL)arg7;
- (BOOL)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (id)serverID;
- (void)setCardDAVRecordItem:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setDataPayload:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (void)setServerID:(id)arg1;
- (void)setSyncKey:(id)arg1;
- (void)setUUIDToPersonCache:(id)arg1;
- (id)syncKey;

@end

