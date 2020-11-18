//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DADaemonSupport/DATokenRegistrationDelegate-Protocol.h>

@class NSDate, NSMutableSet;
@protocol DARefreshManagerDelegate;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate>
{
    int _pushState;
    int _curStyle;
    int _refreshReason;
    id<DARefreshManagerDelegate> _delegate;
    NSDate *_pushRegistrationTime;
    NSMutableSet *_tokenRegistrations;
    NSMutableSet *_refreshCollections;
    long long _fetchInterval;
}

@property (nonatomic) int curStyle; // @synthesize curStyle=_curStyle;
@property (weak, nonatomic) id<DARefreshManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long fetchInterval; // @synthesize fetchInterval=_fetchInterval;
@property (strong, nonatomic) NSDate *pushRegistrationTime; // @synthesize pushRegistrationTime=_pushRegistrationTime;
@property (nonatomic) int pushState; // @synthesize pushState=_pushState;
@property (strong, nonatomic) NSMutableSet *refreshCollections; // @synthesize refreshCollections=_refreshCollections;
@property (nonatomic) int refreshReason; // @synthesize refreshReason=_refreshReason;
@property (strong, nonatomic) NSMutableSet *tokenRegistrations; // @synthesize tokenRegistrations=_tokenRegistrations;

- (void).cxx_destruct;
- (long long)XPCActivityIntervalFromSystemSetting;
- (id)_fetchActivityCriteriaInOnPowerMode;
- (id)_fetchActivityCriteriaWithInterval:(long long)arg1;
- (void)_retryActivityFired;
- (id)_stringForStyle:(int)arg1;
- (void)cancelAllTokenRegistrations;
- (void)cancelDailyRefreshActivity;
- (void)cancelFetchActivity;
- (void)cancelRetryActivity;
- (void)dailyRefreshActivityFired;
- (id)description;
- (const char *)fetchActivityIdentifier;
- (id)init;
- (BOOL)isSetToSystemFetchInterval;
- (void)performTokenRegistrationRequestsWithToken:(id)arg1 onBehalfOf:(id)arg2;
- (void)refreshCollections:(id)arg1 withReason:(int)arg2;
- (const char *)retryActivityIdentifier;
- (void)retryCollections:(id)arg1 after:(double)arg2 reason:(int)arg3;
- (void)startDailyRefreshActivity;
- (void)startFetchActivityForPush;
- (void)startFetchActivityForSystemPCStyle;
- (void)startFetchActivityWithInterval:(long long)arg1;
- (void)stopCollectionsRefresh;
- (void)tokenRegistrationRequest:(id)arg1 finishedWithError:(id)arg2;

@end

