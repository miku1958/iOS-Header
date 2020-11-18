//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSCopying-Protocol.h>
#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSUUID;

@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_activityMap;
    BOOL _supportsMigrationSync;
    NSUUID *_pairingIdentifier;
    long long _switchIndex;
    NSUUID *_sessionIdentifier;
    unsigned long long _syncSessionType;
    NSArray *_activities;
    unsigned long long _syncSessionState;
}

@property (strong, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property (strong, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property (strong, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, nonatomic) double sessionProgress;
@property (nonatomic) BOOL supportsMigrationSync; // @synthesize supportsMigrationSync=_supportsMigrationSync;
@property (nonatomic) long long switchIndex; // @synthesize switchIndex=_switchIndex;
@property (nonatomic) unsigned long long syncSessionState; // @synthesize syncSessionState=_syncSessionState;
@property (nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_deepCopy;
- (id)activityForLabel:(id)arg1;
- (id)activityForService:(id)arg1;
- (id)completedActivities;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstIncompleteActivity;
- (unsigned long long)hash;
- (id)incompleteActivities;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1 switchIndex:(long long)arg2 sessionIdentifier:(id)arg3 syncSessionType:(unsigned long long)arg4 supportsMigrationSync:(BOOL)arg5 activities:(id)arg6 state:(unsigned long long)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)syncSessionByReplacingActivity:(id)arg1;
- (id)syncSessionByUpdatingActivities:(id)arg1;
- (id)syncSessionByUpdatingSyncSessionState:(unsigned long long)arg1;

@end

