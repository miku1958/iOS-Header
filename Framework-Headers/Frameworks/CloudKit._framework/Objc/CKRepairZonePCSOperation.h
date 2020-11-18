//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation
{
    NSArray *_zoneIDs;
    CDUnknownBlockType _zoneRepairedBlock;
}

@property (strong, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property (copy, nonatomic) CDUnknownBlockType zoneRepairedBlock; // @synthesize zoneRepairedBlock=_zoneRepairedBlock;

- (void).cxx_destruct;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithZoneIDsToRepair:(id)arg1;
- (void)performCKOperation;

@end

