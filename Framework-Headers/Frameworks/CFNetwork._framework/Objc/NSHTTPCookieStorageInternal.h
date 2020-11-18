//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface NSHTTPCookieStorageInternal : NSObject
{
    struct OpaqueCFHTTPCookieStorage *storage;
    struct OpaqueCFHTTPCookieStorage *privateStorage;
    NSRecursiveLock *dataLock;
    BOOL privateBrowsing;
}

- (id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2;
- (void)_syncCookies;
- (void)dealloc;
- (id)initInternalWithCFStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)registerForPostingNotificationsWithContext:(id)arg1;

@end
