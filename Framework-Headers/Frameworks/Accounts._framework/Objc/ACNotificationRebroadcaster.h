//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ACNotificationRebroadcaster : NSObject
{
}

+ (id)sharedRebroadcaster;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)dealloc;
- (id)init;

@end

