//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PKAccountEvent : NSObject <PKCloudStoreCoding>
{
    BOOL _blockNotification;
    NSString *_identifier;
    NSString *_accountIdentifier;
    long long _type;
    NSDate *_date;
    NSDate *_expirationDate;
    NSSet *_items;
    unsigned long long _updateReasons;
}

@property (strong, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic) BOOL blockNotification; // @synthesize blockNotification=_blockNotification;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSSet *items; // @synthesize items=_items;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;
@property (readonly, nonatomic) unsigned long long updateReasons; // @synthesize updateReasons=_updateReasons;

+ (id)eventIdentifierFromRecordName:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (id)description;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAccountEvent:(id)arg1;
- (unsigned long long)itemType;
- (id)recordName;
- (id)recordNameForItem:(id)arg1;
- (id)recordTypesAndNames;
- (id)updateReasonsDescription;

@end
