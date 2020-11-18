//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCDuplicationHandler : NSObject
{
    unsigned char _duplicationState;
    unsigned char _duplicationReason;
    BOOL _moreThanOneConnectionAvailable;
    CDStruct_634abacb _localAlertInfo;
    CDStruct_634abacb _remoteAlertInfo;
    BOOL _isRemotePreAzul;
}

@property (readonly) unsigned char duplicationReason; // @synthesize duplicationReason=_duplicationReason;
@property (readonly) BOOL isDuplicationEnabled;
@property (readonly) BOOL isDuplicationPending;
@property BOOL isRemotePreAzul; // @synthesize isRemotePreAzul=_isRemotePreAzul;

- (void)disableDuplication;
- (void)enableDuplication;
- (CDStruct_7641bd18)handleDuplicationStateUpdateEvent:(CDStruct_9629e118)arg1;
- (BOOL)isDuplicationDueToWRMSuggestion;
- (void)shareLocalInterfacePreferenceWithPeerDuringActiveDuplicationForEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)stopRemoteDuplicationAndUpdateResult:(CDStruct_7641bd18 *)arg1;
- (void)updateDuplicationStateForAlertStateUpdatedEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForConnectionArrayUpdatedEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForLocalWRMSuggestingCellularEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForLocalWRMSuggestingWiFiEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForMissingPacketsUpdateEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForReceivingPacketsUpdateEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForRemoteWRMSuggestingCellularEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForRemoteWRMSuggestingWiFiEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForTurnOffDuplicationForHandoverEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForTurnOnDuplicationForHandoverEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (BOOL)updateDuplicationStateWithAlertInfo:(BOOL)arg1;

@end
