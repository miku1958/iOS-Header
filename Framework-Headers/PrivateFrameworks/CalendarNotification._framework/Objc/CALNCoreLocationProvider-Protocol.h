//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSBundle, NSString;

@protocol CALNCoreLocationProvider <NSObject>
- (int)authorizationStatusForBundle:(NSBundle *)arg1;
- (int)authorizationStatusForBundleIdentifier:(NSString *)arg1;
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(NSString *)arg1;
- (BOOL)preciseLocationAuthorizedForBundle:(NSBundle *)arg1;
- (BOOL)preciseLocationAuthorizedForBundleIdentifier:(NSString *)arg1;
@end

