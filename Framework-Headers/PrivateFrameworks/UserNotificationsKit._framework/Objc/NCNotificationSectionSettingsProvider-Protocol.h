//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NSObject-Protocol.h>

@class NCNotificationSectionSettings, NSSet, NSString;
@protocol NCNotificationDestination;

@protocol NCNotificationSectionSettingsProvider <NSObject>
- (NSSet *)notificationSectionSettingsForDestination:(id<NCNotificationDestination>)arg1;
- (NCNotificationSectionSettings *)notificationSectionSettingsForDestination:(id<NCNotificationDestination>)arg1 forSectionIdentifier:(NSString *)arg2;
@end

