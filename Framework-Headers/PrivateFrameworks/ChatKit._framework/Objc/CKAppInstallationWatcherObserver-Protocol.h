//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAppInstallation, CKAppInstallationWatcher;

@protocol CKAppInstallationWatcherObserver <NSObject>
- (void)appInstallationWatcher:(CKAppInstallationWatcher *)arg1 addedAppInstallation:(CKAppInstallation *)arg2;
- (void)appInstallationWatcher:(CKAppInstallationWatcher *)arg1 changedAppInstallation:(CKAppInstallation *)arg2;
@end

