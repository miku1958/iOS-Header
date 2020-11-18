//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDCircleJoinResult : NSObject
{
    BOOL _didJoin;
    BOOL _needsBackupRecovery;
    BOOL _hasPeersForRemoteApproval;
    BOOL _hasPeersWithBackupRecords;
    BOOL _requiresEscrowRecordsFetch;
    BOOL _requiresInitialSync;
    int _circleStatus;
    unsigned long long _remotePeeriCKState;
}

@property int circleStatus; // @synthesize circleStatus=_circleStatus;
@property BOOL didJoin; // @synthesize didJoin=_didJoin;
@property BOOL hasPeersForRemoteApproval; // @synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval;
@property BOOL hasPeersWithBackupRecords; // @synthesize hasPeersWithBackupRecords=_hasPeersWithBackupRecords;
@property BOOL needsBackupRecovery; // @synthesize needsBackupRecovery=_needsBackupRecovery;
@property unsigned long long remotePeeriCKState; // @synthesize remotePeeriCKState=_remotePeeriCKState;
@property BOOL requiresEscrowRecordsFetch; // @synthesize requiresEscrowRecordsFetch=_requiresEscrowRecordsFetch;
@property BOOL requiresInitialSync; // @synthesize requiresInitialSync=_requiresInitialSync;


@end

