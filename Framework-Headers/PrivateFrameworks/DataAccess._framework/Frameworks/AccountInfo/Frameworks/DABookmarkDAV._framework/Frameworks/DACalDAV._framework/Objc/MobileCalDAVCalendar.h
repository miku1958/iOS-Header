//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DACalDAV/CalDAVCalendar-Protocol.h>

@class CalDiagCalendarCollectionSync, MobileCalDAVPrincipal, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimeZone, NSURL;
@protocol CalDAVPrincipal;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar>
{
    MobileCalDAVPrincipal *_principal;
    void *_calCalendar;
    NSString *_calendarURLString;
    BOOL _isScheduleOutbox;
    BOOL _isEnabled;
    BOOL _isAffectingAvailability;
    BOOL _wasModifiedLocally;
    BOOL _needsResync;
    BOOL _didResync;
    BOOL _isDirty;
    BOOL _needsPublishUpdate;
    int _mostRecentSequenceNumber;
    int _mostRecentShareeChangeIndex;
    int _mostRecentEventActionChangeIndex;
    NSString *_guid;
    unsigned long long _numDownloadedElements;
    unsigned long long _numUploadedElements;
    CalDiagCalendarCollectionSync *_calendarCollectionSyncDiagnostics;
    NSMutableDictionary *_deletedCalendarItems;
    NSArray *_syncActions;
    NSArray *_shareeActions;
    NSArray *_itemsToReportAsJunk;
    NSDictionary *_hrefsToModDeleteActions;
    NSDictionary *_uuidsToAddActions;
    NSMutableDictionary *_uniqueIdentifierToRecordIDMap;
    NSMutableDictionary *_URLToRecordIDMap;
    NSMutableDictionary *_URLToEtagMap;
}

@property (strong, nonatomic) NSMutableDictionary *URLToEtagMap; // @synthesize URLToEtagMap=_URLToEtagMap;
@property (strong, nonatomic) NSMutableDictionary *URLToRecordIDMap; // @synthesize URLToRecordIDMap=_URLToRecordIDMap;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSSet *allItemURLs;
@property (strong, nonatomic) NSDictionary *bulkRequests;
@property (readonly, nonatomic) void *calCalendar;
@property (strong, nonatomic) CalDiagCalendarCollectionSync *calendarCollectionSyncDiagnostics; // @synthesize calendarCollectionSyncDiagnostics=_calendarCollectionSyncDiagnostics;
@property (strong, nonatomic) NSURL *calendarURL;
@property (strong, nonatomic) NSString *calendarURLString; // @synthesize calendarURLString=_calendarURLString;
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (strong, nonatomic) NSString *color;
@property (strong, nonatomic) NSString *ctag;
@property (readonly, nonatomic) MobileCalDAVPrincipal *daPrincipal;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSMutableDictionary *deletedCalendarItems; // @synthesize deletedCalendarItems=_deletedCalendarItems;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didResync; // @synthesize didResync=_didResync;
@property (readonly, nonatomic) NSString *displayColor;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *hrefsToModDeleteActions; // @synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions;
@property (nonatomic) BOOL isAffectingAvailability; // @synthesize isAffectingAvailability=_isAffectingAvailability;
@property (nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property (nonatomic) BOOL isEventContainer;
@property (nonatomic) BOOL isFamilyCalendar;
@property (readonly, nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isManagedByServer;
@property (nonatomic) BOOL isMarkedImmutableSharees;
@property (nonatomic) BOOL isMarkedUndeletable;
@property (nonatomic) BOOL isNotification;
@property (nonatomic) BOOL isPoll;
@property (nonatomic) BOOL isPublished;
@property (nonatomic) BOOL isRenameable;
@property (nonatomic) BOOL isScheduleInbox;
@property (nonatomic) BOOL isScheduleOutbox; // @synthesize isScheduleOutbox=_isScheduleOutbox;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL isTaskContainer;
@property (strong, nonatomic) NSArray *itemsToReportAsJunk; // @synthesize itemsToReportAsJunk=_itemsToReportAsJunk;
@property (nonatomic) int mostRecentEventActionChangeIndex; // @synthesize mostRecentEventActionChangeIndex=_mostRecentEventActionChangeIndex;
@property (nonatomic) int mostRecentSequenceNumber; // @synthesize mostRecentSequenceNumber=_mostRecentSequenceNumber;
@property (nonatomic) int mostRecentShareeChangeIndex; // @synthesize mostRecentShareeChangeIndex=_mostRecentShareeChangeIndex;
@property (nonatomic) BOOL needsPublishUpdate; // @synthesize needsPublishUpdate=_needsPublishUpdate;
@property (nonatomic) BOOL needsResync; // @synthesize needsResync=_needsResync;
@property (strong, nonatomic) NSString *notes;
@property (nonatomic) unsigned long long numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property (nonatomic) unsigned long long numUploadedElements; // @synthesize numUploadedElements=_numUploadedElements;
@property (nonatomic) int order;
@property (strong, nonatomic) NSURL *owner;
@property (strong, nonatomic) NSString *ownerDisplayName;
@property (readonly, nonatomic) NSString *ownerEmailAddress;
@property (readonly, nonatomic) NSString *ownerPhoneNumber;
@property (strong, nonatomic) NSURL *prePublishURL;
@property (strong, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (weak, nonatomic) id<CalDAVPrincipal> principal;
@property (strong, nonatomic) NSURL *publishURL;
@property (strong, nonatomic) NSString *pushKey;
@property (strong, nonatomic) NSArray *shareeActions; // @synthesize shareeActions=_shareeActions;
@property (strong, nonatomic) NSSet *sharees;
@property (nonatomic) int sharingStatus;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *symbolicColorName;
@property (strong, nonatomic) NSArray *syncActions; // @synthesize syncActions=_syncActions;
@property (strong, nonatomic) NSString *syncToken;
@property (strong, nonatomic) NSTimeZone *timeZone;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSMutableDictionary *uniqueIdentifierToRecordIDMap; // @synthesize uniqueIdentifierToRecordIDMap=_uniqueIdentifierToRecordIDMap;
@property (strong, nonatomic) NSDictionary *uuidsToAddActions; // @synthesize uuidsToAddActions=_uuidsToAddActions;
@property (nonatomic) BOOL wasModifiedLocally; // @synthesize wasModifiedLocally=_wasModifiedLocally;

+ (int)addedCalendars:(id *)arg1 inPrincipal:(id)arg2;
+ (void)cacheCalendarUID:(int)arg1 forCalendarURLString:(id)arg2;
+ (int)cachedCalendarUIDForURLString:(id)arg1;
+ (id)calURLToUIDCache;
+ (id)calendarWithCalCalendar:(void *)arg1 principal:(id)arg2;
+ (BOOL)clearCalendarChangesToIndex:(int)arg1 inPrincipal:(id)arg2 forChangeTrackingClient:(id)arg3;
+ (void)clearCalendarUIDCache;
+ (int)deletedCalendars:(id *)arg1 inPrincipal:(id)arg2;
+ (int)modifiedCalendars:(id *)arg1 inPrincipal:(id)arg2;
+ (void)removeUIDCacheEntryForCalendarURLString:(id)arg1;
- (void).cxx_destruct;
- (int)_addAddedItemsOfType:(int)arg1 toArray:(id)arg2;
- (void)_addCalendarItemWithRowID:(int)arg1 toArrayIfNeeded:(id)arg2 withChangeRowid:(int)arg3 changeType:(id)arg4;
- (void)_addShareeWithRowID:(id)arg1 toDictionaryIfNeeded:(id)arg2;
- (id)_calExternalRep;
- (void)_clearChangesAtIndices:(id)arg1 forType:(int)arg2;
- (void)_clearChangesFromItem:(id)arg1;
- (void)_collectShareeActions;
- (void *)_copyCalItemWithExternalID:(id)arg1;
- (void *)_copyCalItemWithUniqueIdentifier:(id)arg1 inCalendar:(void *)arg2 orStore:(void *)arg3;
- (id)_copyDeletedEventActions;
- (id)_createActionsForItems:(id)arg1 withAction:(int)arg2 alreadySentItems:(id)arg3 createServerIDs:(BOOL)arg4 shouldSave:(BOOL *)arg5;
- (void)_dropCalStoreContext;
- (void)_forceRefreshNextSync;
- (int)_gatherDeletedChanges:(CDUnknownFunctionPointerType)arg1 inDictionary:(id)arg2;
- (int)_gatherModifiedEventsInArray:(id)arg1;
- (int)_gatherModifiedItemsFromCalChangesCall:(CDUnknownFunctionPointerType)arg1 forType:(id)arg2 inArray:(id)arg3;
- (int)_gatherModifiedTasksInArray:(id)arg1;
- (BOOL)_isItemJunk:(void *)arg1;
- (id)_itemPropertyDictForItemAtIndex:(long long)arg1 withChangedIDs:(struct __CFArray *)arg2 withChangedRowids:(struct __CFArray *)arg3 withExternalIDs:(struct __CFArray *)arg4 uniqueIdentifiers:(struct __CFArray *)arg5 significantAttributeChanges:(struct __CFArray *)arg6 oldCalendarIDs:(struct __CFArray *)arg7 entityType:(int)arg8;
- (id)_preferredAddress;
- (BOOL)_removeCalendarItemWithURL:(id)arg1;
- (id)_resourceURLsForJunkItemsInModifiedItems:(id)arg1 alreadySentItems:(id)arg2;
- (void)_setSupportsEvents:(BOOL)arg1 supportsTodos:(BOOL)arg2;
- (BOOL)_updateCalendarOwnerInfo;
- (Class)appSpecificCalendarItemClass;
- (id)calendarUserAddresses;
- (void)clearEventChanges;
- (void)clearShareeActions;
- (id)copyAddedItems;
- (id)copyAllItems;
- (id)copyDeletedItems;
- (id)copyModifiedItems;
- (void)dealloc;
- (void)deleteAction:(id)arg1 completedWithError:(id)arg2;
- (void)deleteCalendar;
- (BOOL)deleteResourcesAtURLs:(id)arg1;
- (id)etagsForItemURLs:(id)arg1;
- (void)flushCaches;
- (void *)getCalCalendar;
- (BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg1;
- (BOOL)hasEvents;
- (void *)initCalCalendarWithTitle:(id)arg1;
- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 principal:(id)arg3 title:(id)arg4;
- (id)initWithCalendarURL:(id)arg1 principal:(id)arg2;
- (id)initWithCalendarURL:(id)arg1 principal:(id)arg2 title:(id)arg3;
- (void)prepareMergeSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)putAction:(id)arg1 completedWithError:(id)arg2;
- (void)recordDiagnosticsForAccountSync:(id)arg1;
- (struct CalRecordID *)recordIDForUniqueIdentifier:(id)arg1;
- (id)removeInvitationsForItemWithUniqueIdentifier:(id)arg1;
- (BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2;
- (BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
- (BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
- (void)setUniqueIdentifier:(id)arg1 forRecordID:(struct CalRecordID *)arg2;
- (void)syncDidFinishWithError:(id)arg1;
- (BOOL)updateResourcesFromServer:(id)arg1;

@end

