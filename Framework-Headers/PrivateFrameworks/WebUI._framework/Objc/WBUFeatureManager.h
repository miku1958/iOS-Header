//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface WBUFeatureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACAccountStore *_accountStore;
    ACAccount *_account;
    BOOL _autoFillAvailable;
    BOOL _bookmarksAvailable;
    BOOL _readingListAvailable;
    BOOL _offlineReadingListAvailable;
    BOOL _cloudSyncAvailable;
    BOOL _inMemoryBookmarkChangeTrackingAvailable;
}

@property (readonly, nonatomic, getter=isAutoFillAvailable) BOOL autoFillAvailable; // @synthesize autoFillAvailable=_autoFillAvailable;
@property (readonly, nonatomic, getter=isBookmarksAvailable) BOOL bookmarksAvailable; // @synthesize bookmarksAvailable=_bookmarksAvailable;
@property (readonly, nonatomic, getter=isCloudHistorySyncAvailable) BOOL cloudHistorySyncAvailable;
@property (readonly, nonatomic, getter=isCloudSyncAvailable) BOOL cloudSyncAvailable; // @synthesize cloudSyncAvailable=_cloudSyncAvailable;
@property (readonly, nonatomic, getter=isCloudTabsAvailable) BOOL cloudTabsAvailable;
@property (readonly, nonatomic, getter=isCreditCardStorageAvailable) BOOL creditCardStorageAvailable;
@property (readonly, nonatomic, getter=isInMemoryBookmarkChangeTrackingAvailable) BOOL inMemoryBookmarkChangeTrackingAvailable; // @synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable;
@property (readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable; // @synthesize offlineReadingListAvailable=_offlineReadingListAvailable;
@property (readonly, nonatomic, getter=isParsecITunesResultsAvailable) BOOL parsecITunesResultsAvailable;
@property (readonly, nonatomic, getter=isReadingListAvailable) BOOL readingListAvailable; // @synthesize readingListAvailable=_readingListAvailable;

+ (long long)accessLevel;
+ (id)webui_sharedFeatureManager;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (BOOL)_isUsingManagedAppleID;
- (void)_setupAccountStore;
- (void)_updateAppleAccount;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)dealloc;
- (id)init;

@end

