//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NTKPeopleComplicationContactsCache : NSObject
{
    NSDictionary *_favoritesMapping;
    int _deviceLockStateChangeNotifyToken;
    BOOL _hasSetupNotifications;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_didReceiveDeviceLockStateDidChangeNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (id)_loadFavoriteContacts;
- (void)_queue_loadFavoriteContacts;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (id)abbreviatedNameForContact:(id)arg1;
- (void)dealloc;
- (id)favoriteContacts;
- (id)fullNameForContact:(id)arg1;
- (void)setupNotificationsIfNecessary;
- (id)shortNameForContact:(id)arg1;

@end

