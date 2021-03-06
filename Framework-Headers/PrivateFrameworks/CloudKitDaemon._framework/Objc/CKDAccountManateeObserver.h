//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue;

@interface CKDAccountManateeObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_statusQueue;
    long long _manateeAvailableForLoggedInAccount;
    NSError *_lastCDPError;
}

@property (copy, nonatomic) NSError *lastCDPError; // @synthesize lastCDPError=_lastCDPError;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount; // @synthesize manateeAvailableForLoggedInAccount=_manateeAvailableForLoggedInAccount;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // @synthesize statusQueue=_statusQueue;

+ (id)sharedObserver;
- (void).cxx_destruct;
- (long long)_fetchManateeAvailability:(id *)arg1;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (BOOL)accountSupportsManatee:(id)arg1;
- (void)dealloc;
- (void)handleUpdateNotificationWithAvailability:(id)arg1;
- (id)init;
- (BOOL)isManateeAvailable:(id *)arg1;
- (void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

