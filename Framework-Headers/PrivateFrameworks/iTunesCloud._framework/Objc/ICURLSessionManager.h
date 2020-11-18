//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICURLSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSessions;
}

+ (id)defaultSession;
+ (id)highPrioritySession;
+ (id)sharedSessionManager;
- (void).cxx_destruct;
- (id)_newSessionWithQualityOfService:(long long)arg1;
- (id)_sessionIdentifierWithQualityOfService:(long long)arg1;
- (void)addSession:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (void)removeSessionWithIdentifier:(id)arg1;
- (id)sessionWithIdentifier:(id)arg1;
- (id)sessionWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)sessionWithQualityOfService:(long long)arg1;

@end

