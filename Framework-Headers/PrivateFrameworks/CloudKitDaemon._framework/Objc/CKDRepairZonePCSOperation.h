//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKRepairZonePCSOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDRepairZonePCSOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _zonePCSRepairProgressBlock;
    NSArray *_zoneIDs;
    NSMutableArray *_fetchedZones;
    NSMutableArray *_fixedZones;
    NSMutableDictionary *_pcsInfoByZoneID;
}

@property (strong, nonatomic) id<CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (strong, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property (strong, nonatomic) NSMutableArray *fixedZones; // @synthesize fixedZones=_fixedZones;
@property (strong, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property (nonatomic) unsigned long long state; // @dynamic state;
@property (strong, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property (copy, nonatomic) CDUnknownBlockType zonePCSRepairProgressBlock; // @synthesize zonePCSRepairProgressBlock=_zonePCSRepairProgressBlock;

- (void).cxx_destruct;
- (id)_checkPCSDataForZone:(id)arg1;
- (void)_checkZonePCS;
- (void)_fetchZones;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_uploadRepairedZones;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end

