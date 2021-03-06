//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CALNCalendarIconIdentifierProvider, CALNIconCache, CALNIconIdentifierVersionProvider, CALNNotificationManager, CALNNotificationStorage;

@interface CALNNotificationIconUpdater : NSObject
{
    id<CALNIconIdentifierVersionProvider> _identifierVersionProvider;
    id<CALNNotificationStorage> _protectedStorage;
    id<CALNIconCache> _iconCache;
    id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
    id<CALNNotificationManager> _notificationManager;
}

@property (readonly, nonatomic) id<CALNIconCache> iconCache; // @synthesize iconCache=_iconCache;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property (readonly, nonatomic) id<CALNIconIdentifierVersionProvider> identifierVersionProvider; // @synthesize identifierVersionProvider=_identifierVersionProvider;
@property (readonly, nonatomic) id<CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property (readonly, nonatomic) id<CALNNotificationStorage> protectedStorage; // @synthesize protectedStorage=_protectedStorage;

- (void).cxx_destruct;
- (void)_updateAllIconIdentifiersInStorage:(id)arg1;
- (id)initWithIconIdentifierVersionProvider:(id)arg1 protectedNotificationStorage:(id)arg2 iconCache:(id)arg3 iconIdentifierProvider:(id)arg4 notificationManager:(id)arg5;
- (void)updateIconsToNewVersionIfNeeded;

@end

