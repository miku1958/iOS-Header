//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKCloudOperation.h>

#import <ClassroomKit/CRKCloudResetable-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken;

@interface CRKCloudFetchZoneChangesOperation : CRKCloudOperation <CRKCloudResetable>
{
    CKServerChangeToken *_serverToken;
    CKRecordZoneID *_zoneId;
}

@property (readonly, nonatomic) CKServerChangeToken *serverToken; // @synthesize serverToken=_serverToken;
@property (readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2 serverToken:(id)arg3;
- (void)main;
- (id)resetOperation;

@end

