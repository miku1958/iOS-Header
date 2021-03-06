//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTPlanIdentifier : NSObject <NSSecureCoding>
{
    NSString *_iccid;
    NSString *_carrierName;
    NSString *_phoneNumber;
    NSString *_countryCode;
    NSString *_label;
}

@property (strong, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (strong, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 carrierName:(id)arg2 phoneNumber:(id)arg3 countryCode:(id)arg4 label:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end

