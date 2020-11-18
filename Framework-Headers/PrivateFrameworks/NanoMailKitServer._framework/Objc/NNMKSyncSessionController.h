//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NNMKSyncSessionController : NSObject
{
    NSMutableSet *_messageIdsToIgnoreStatusUpdates;
    NSMutableDictionary *_notificationPayloadAcks;
    NSMutableDictionary *_syncingAccountIdentityByUsername;
    NSMutableDictionary *_standaloneStateByAccountId;
}

@property (strong, nonatomic) NSMutableSet *messageIdsToIgnoreStatusUpdates; // @synthesize messageIdsToIgnoreStatusUpdates=_messageIdsToIgnoreStatusUpdates;
@property (strong, nonatomic) NSMutableDictionary *notificationPayloadAcks; // @synthesize notificationPayloadAcks=_notificationPayloadAcks;
@property (strong, nonatomic) NSMutableDictionary *standaloneStateByAccountId; // @synthesize standaloneStateByAccountId=_standaloneStateByAccountId;
@property (strong, nonatomic) NSMutableDictionary *syncingAccountIdentityByUsername; // @synthesize syncingAccountIdentityByUsername=_syncingAccountIdentityByUsername;

- (void).cxx_destruct;
- (void)deleteStandaloneStateForAccountId:(id)arg1;
- (id)init;
- (unsigned long long)standaloneStateForAccountId:(id)arg1;
- (void)updateStandaloneState:(unsigned long long)arg1 forAccountId:(id)arg2;

@end

