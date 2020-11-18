//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDSyncAnchorMap, NSSet;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord
{
    BOOL _active;
    int _protocolVersion;
    unsigned long long _changeIndex;
    unsigned long long _baselineEpoch;
    unsigned long long _childRecordCount;
    HDSyncAnchorMap *_syncAnchorMap;
    NSSet *_includedIdentifiers;
    long long _slot;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, nonatomic) unsigned long long baselineEpoch; // @synthesize baselineEpoch=_baselineEpoch;
@property (readonly, nonatomic) unsigned long long changeIndex; // @synthesize changeIndex=_changeIndex;
@property (readonly, nonatomic) unsigned long long childRecordCount; // @synthesize childRecordCount=_childRecordCount;
@property (readonly, nonatomic) NSSet *includedIdentifiers; // @synthesize includedIdentifiers=_includedIdentifiers;
@property (readonly, nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (nonatomic) long long slot; // @synthesize slot=_slot;
@property (readonly, nonatomic) HDSyncAnchorMap *syncAnchorMap; // @synthesize syncAnchorMap=_syncAnchorMap;

+ (BOOL)hasFutureSchema:(id)arg1;
+ (BOOL)isSequenceRecord:(id)arg1;
+ (BOOL)isSequenceRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 sequenceSlot:(long long)arg2;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)_unitTest_setChildRecordCount:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (void)incrementChangeIndex;
- (void)incrementChildRecordCount;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 active:(BOOL)arg3 changeIndex:(unsigned long long)arg4 childRecordCount:(unsigned long long)arg5 baselineEpoch:(unsigned long long)arg6 includedIdentifiers:(id)arg7 protocolVersion:(int)arg8 storeRecordID:(id)arg9 record:(id)arg10 schemaVersion:(long long)arg11;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 changeIndex:(unsigned long long)arg3 baselineEpoch:(unsigned long long)arg4 includedIdentifiers:(id)arg5 storeRecord:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (void)setProtocolVersion:(int)arg1;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1;

@end

