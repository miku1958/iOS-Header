//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordZoneID, NSData;

__attribute__((visibility("hidden")))
@interface CKDZonePCSData : CKDPCSData
{
    struct _OpaquePCSShareProtection *_zoneishPCS;
    CKRecordZoneID *_zoneID;
    NSData *_zoneishPCSData;
    NSData *_zoneishPublicKeyID;
}

@property (strong, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property (nonatomic) struct _OpaquePCSShareProtection *zoneishPCS;
@property (copy, nonatomic) NSData *zoneishPCSData; // @synthesize zoneishPCSData=_zoneishPCSData;
@property (strong, nonatomic) NSData *zoneishPublicKeyID; // @synthesize zoneishPublicKeyID=_zoneishPublicKeyID;

+ (id)dataWithZone:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZone:(id)arg1;
- (id)itemID;

@end
