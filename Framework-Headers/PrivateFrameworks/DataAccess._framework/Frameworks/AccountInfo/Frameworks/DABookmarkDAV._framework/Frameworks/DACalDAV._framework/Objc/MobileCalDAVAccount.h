//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAccount.h>

@class CalDAVPrincipalSearchPropertySet, CalDAVRefreshContext, CalDAVServerVersion, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, MobileCalDAVAccountRefreshActor, MobileCalDAVPrincipal, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimeZone, NSURL;

@interface MobileCalDAVAccount : DAAccount
{
    int _wasMigrated;
    NSMutableDictionary *_principals;
    NSMutableDictionary *_itemIDsToMoveActions;
    NSMutableSet *_mMovedItemURLStrings;
    NSMutableSet *_calendars;
    CalDAVServerVersion *_serverVersion;
    BOOL _needsAccountPropertyRefresh;
    BOOL _isRefreshing;
    BOOL _searchQueriesShouldCancel;
    BOOL _subscribedCalendarsChanged;
    BOOL _isSpinning;
    int _preferredEventDaysToSync;
    int _preferredToDoDaysToSync;
    NSMutableSet *_movedItemURLStrings;
    MobileCalDAVPrincipal *_mainPrincipal;
    CalDAVPrincipalSearchPropertySet *_searchPropertySet;
    CalDAVRefreshContext *_refreshContext;
    CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;
    MobileCalDAVAccountRefreshActor *_actor;
    NSMutableSet *_searchTaskSet;
    DACoreDAVLogger *_coreDAVLogger;
}

@property (strong, nonatomic) MobileCalDAVAccountRefreshActor *actor; // @synthesize actor=_actor;
@property (copy, nonatomic) NSString *calendarHomeSyncToken;
@property (readonly, nonatomic) NSSet *calendars;
@property (strong, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup; // @synthesize checkValidityTaskGroup=_checkValidityTaskGroup;
@property (strong, nonatomic) NSURL *collectionSetURL;
@property (strong, nonatomic) DACoreDAVLogger *coreDAVLogger; // @synthesize coreDAVLogger=_coreDAVLogger;
@property (nonatomic) BOOL isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property (nonatomic) BOOL isSpinning; // @synthesize isSpinning=_isSpinning;
@property (nonatomic) BOOL isWritable;
@property (readonly, nonatomic) NSDictionary *itemIDsToMoveActions;
@property (strong, nonatomic) NSMutableSet *mCalendars; // @synthesize mCalendars=_calendars;
@property (strong, nonatomic) NSMutableDictionary *mItemIDsToMoveActions; // @synthesize mItemIDsToMoveActions=_itemIDsToMoveActions;
@property (strong, nonatomic) NSMutableSet *mMovedItemURLStrings; // @synthesize mMovedItemURLStrings=_movedItemURLStrings;
@property (strong, nonatomic) NSMutableDictionary *mPrincipals; // @synthesize mPrincipals=_principals;
@property (strong, nonatomic) MobileCalDAVPrincipal *mainPrincipal; // @synthesize mainPrincipal=_mainPrincipal;
@property (readonly, nonatomic) NSSet *movedItemURLStrings;
@property (nonatomic) BOOL needsAccountPropertyRefresh; // @synthesize needsAccountPropertyRefresh=_needsAccountPropertyRefresh;
@property (readonly, nonatomic) NSDate *ocurrenceCacheEndDate;
@property (readonly, nonatomic) NSDate *ocurrenceCacheStartDate;
@property (nonatomic) int overriddenPort;
@property (strong, nonatomic) NSString *overriddenScheme;
@property (strong, nonatomic) NSString *overriddenServer;
@property (nonatomic) int preferredEventDaysToSync; // @synthesize preferredEventDaysToSync=_preferredEventDaysToSync;
@property (nonatomic) int preferredToDoDaysToSync; // @synthesize preferredToDoDaysToSync=_preferredToDoDaysToSync;
@property (readonly, nonatomic) NSDictionary *principals;
@property (strong, nonatomic) CalDAVRefreshContext *refreshContext; // @synthesize refreshContext=_refreshContext;
@property (strong, nonatomic) CalDAVPrincipalSearchPropertySet *searchPropertySet; // @synthesize searchPropertySet=_searchPropertySet;
@property (nonatomic) BOOL searchQueriesShouldCancel; // @synthesize searchQueriesShouldCancel=_searchQueriesShouldCancel;
@property (strong, nonatomic) NSMutableSet *searchTaskSet; // @synthesize searchTaskSet=_searchTaskSet;
@property (readonly, nonatomic) NSURL *serverBaseURL;
@property (strong, nonatomic) CalDAVServerVersion *serverVersion; // @synthesize serverVersion=_serverVersion;
@property (readonly, nonatomic) BOOL shouldFilterEventSyncTimeRange;
@property (readonly, nonatomic) BOOL shouldFilterSyncTimeRangeForInbox;
@property (readonly, nonatomic) BOOL shouldFilterTodoSyncTimeRange;
@property (readonly, nonatomic) BOOL shouldUseCalendarHomeSyncReport;
@property (strong, nonatomic) NSDictionary *subscribedCalendars;
@property (nonatomic) BOOL subscribedCalendarsChanged; // @synthesize subscribedCalendarsChanged=_subscribedCalendarsChanged;
@property (readonly, nonatomic) BOOL supportsEvents;
@property (readonly, nonatomic) BOOL supportsReminders;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (readonly, nonatomic) NSTimeZone *viewedTimeZone;
@property (nonatomic) BOOL wasMigrated;
@property (readonly, nonatomic) NSArray *wellKnownPaths;

- (void).cxx_destruct;
- (id)_calendarConstraintsPath;
- (id)_calendarConstraintsResource;
- (void)_clearOrphanedCalendarItemChangesOfType:(int)arg1 withContext:(id)arg2 goodCalendarIds:(id)arg3;
- (void)_clearOrphanedChangesWithChangesCall:(CDUnknownFunctionPointerType)arg1 entityType:(int)arg2 withContext:(id)arg3;
- (void)_clearOrphanedChangesWithContext:(id)arg1;
- (id)_collectActionsFromMoveDictionary:(struct __CFDictionary *)arg1 forDataclass:(id)arg2 outShouldSave:(BOOL *)arg3;
- (void)_collectMoveActions;
- (id)_powerAssertionContext;
- (id)_powerAssertionGroupIdentifier;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (BOOL)_reallySearchQueriesRunning;
- (BOOL)_saveModifiedPrincipalsOnBackingAccount;
- (BOOL)_saveModifiedSubscribedCalendarsOnBackingAccount;
- (void)_setSpinning:(BOOL)arg1;
- (void)_updateCalendarStore:(BOOL)arg1;
- (BOOL)_updateCalendarStoreNoDBOpen:(BOOL)arg1;
- (BOOL)_updateCalendarStoreProperties:(void *)arg1;
- (BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (void)addCalendar:(id)arg1;
- (void)addPrincipal:(id)arg1;
- (void)cancelRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void *)copyCalStore;
- (void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
- (long long)coreDAVLogLevel;
- (void)coreDAVLogTransmittedDataPartial:(id)arg1;
- (long long)coreDAVOutputLevel;
- (void)coreDAVTransmittedDataFinished;
- (void)dealloc;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3;
- (void)dropPowerAssertions;
- (id)emailAddresses;
- (void)ingestBackingAccountInfoProperties;
- (id)init;
- (id)initWithBackingAccountInfo:(id)arg1;
- (BOOL)isCalDAVAccount;
- (BOOL)isEqualToAccount:(id)arg1;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (id)onBehalfOfBundleIdentifier;
- (id)principalPath;
- (void)reattainPowerAssertions;
- (void)refreshActor:(id)arg1 didCompleteWithError:(id)arg2;
- (void)refreshWithContext:(id)arg1;
- (void)releasePowerAssertion;
- (void)reloadCalendars;
- (void)removeCalendar:(id)arg1;
- (void)removeCalendarWithURL:(id)arg1;
- (void)removePrincipal:(id)arg1;
- (void)retainPowerAssertion;
- (BOOL)saveModifiedPropertiesOnBackingAccount;
- (void)setAccountDescription:(id)arg1;
- (void)setPrincipalPath:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (BOOL)shouldLogTransmittedData;
- (id)spinnerIdentifiers;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (BOOL)upgradeAccount;

@end
