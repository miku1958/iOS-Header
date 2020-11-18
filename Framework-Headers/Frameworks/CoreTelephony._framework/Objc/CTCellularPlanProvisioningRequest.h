//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding>
{
    NSString *_address;
    NSString *_matchingID;
    NSString *_OID;
    NSString *_confirmationCode;
    NSString *_ICCID;
    NSString *_EID;
}

@property (strong, nonatomic) NSString *EID; // @synthesize EID=_EID;
@property (strong, nonatomic) NSString *ICCID; // @synthesize ICCID=_ICCID;
@property (strong, nonatomic) NSString *OID; // @synthesize OID=_OID;
@property (strong, nonatomic) NSString *address; // @synthesize address=_address;
@property (strong, nonatomic) NSString *confirmationCode; // @synthesize confirmationCode=_confirmationCode;
@property (strong, nonatomic) NSString *matchingID; // @synthesize matchingID=_matchingID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

