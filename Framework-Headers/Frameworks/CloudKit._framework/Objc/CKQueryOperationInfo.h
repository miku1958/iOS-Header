//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _shouldFetchAssetContent;
    CKQuery *_query;
    CKRecordZoneID *_zoneID;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
}

@property (strong, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property (strong, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property (strong, nonatomic) CKQuery *query; // @synthesize query=_query;
@property (nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (strong, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

