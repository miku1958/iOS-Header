//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSString;

@interface ICUserSpecificRecordID : NSObject
{
    NSString *_recordType;
    NSString *_shareOwnerName;
    long long _databaseScope;
    NSString *_zoneName;
    NSString *_userSpecificOwnerName;
    NSString *_sharedRecordName;
}

@property (nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSString *recordName;
@property (strong, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property (strong, nonatomic) NSString *shareOwnerName; // @synthesize shareOwnerName=_shareOwnerName;
@property (readonly, nonatomic) CKRecordID *sharedRecordID;
@property (strong, nonatomic) NSString *sharedRecordName; // @synthesize sharedRecordName=_sharedRecordName;
@property (readonly, nonatomic) NSString *sharedRecordType;
@property (strong, nonatomic) NSString *userSpecificOwnerName; // @synthesize userSpecificOwnerName=_userSpecificOwnerName;
@property (strong, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

+ (BOOL)isUserSpecificRecordID:(id)arg1;
+ (BOOL)isUserSpecificRecordType:(id)arg1;
+ (id)userSpecificRecordTypeFromSharedRecordType:(id)arg1;
- (void).cxx_destruct;
- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordType:(id)arg1 shareOwnerName:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 userSpecificOwnerName:(id)arg5 sharedRecordName:(id)arg6;

@end

