//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariCore/NSObject-Protocol.h>

@protocol WBSKeychainCredentialNotificationMonitor <NSObject>
- (id)addObserverWithBlock:(void (^)(void))arg1;
- (void)removeObserverForToken:(id)arg1;
- (void)triggerExternalNotification;
@end

