//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKRecordZoneDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCCKPrivateDatabase, NSArray, NSDictionary, NSString;

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate>
{
    FCCKPrivateDatabase *_database;
    NSArray *_recordZoneIDs;
    NSDictionary *_fcRecordZonesByName;
    NSDictionary *_ckRecordZonesByID;
    FCAsyncSerialQueue *_serialQueue;
}

@property (strong, nonatomic) NSDictionary *ckRecordZonesByID; // @synthesize ckRecordZonesByID=_ckRecordZonesByID;
@property (strong, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDictionary *fcRecordZonesByName; // @synthesize fcRecordZonesByName=_fcRecordZonesByName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (strong, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDatabase:(id)arg1 recordZoneNames:(id)arg2;
- (void)prepareRecordZonesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)recordZoneWithName:(id)arg1;

@end
