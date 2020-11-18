//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSString;

@interface CKRecordID : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>
{
    NSString *_recordName;
    CKRecordZoneID *_zoneID;
}

@property (strong, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property (strong, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKXPCSuitableString;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithSqliteRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sqliteRepresentation;

@end

