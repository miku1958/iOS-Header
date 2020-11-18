//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSgPTPClock;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject
{
    unsigned int _connection;
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
    unsigned long long _systemDomainClockIdentifier;
}

@property (readonly, strong, nonatomic) TSgPTPClock *systemDomain; // @dynamic systemDomain;
@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier; // @synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(CDUnknownBlockType)arg1;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1;
- (BOOL)addDomain:(unsigned long long *)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;

@end

