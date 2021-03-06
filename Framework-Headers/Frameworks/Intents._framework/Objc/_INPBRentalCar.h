//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRentalCar-Protocol.h>

@class NSString;

@interface _INPBRentalCar : PBCodable <_INPBRentalCar, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_make;
    NSString *_model;
    NSString *_rentalCarDescription;
    NSString *_rentalCompanyName;
    NSString *_type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMake;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasRentalCarDescription;
@property (readonly, nonatomic) BOOL hasRentalCompanyName;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *make; // @synthesize make=_make;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *rentalCarDescription; // @synthesize rentalCarDescription=_rentalCarDescription;
@property (copy, nonatomic) NSString *rentalCompanyName; // @synthesize rentalCompanyName=_rentalCompanyName;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

