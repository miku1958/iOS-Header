//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKSQLiteItem-Protocol.h>
#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying>
{
    NSString *_zoneName;
    NSString *_ownerName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

+ (id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (id)CKPropertiesToDescribe:(BOOL)arg1;
- (id)CKXPCSuitableString;
- (id)_initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)sqliteRepresentation;

@end
