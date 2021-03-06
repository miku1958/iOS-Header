//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSData, NSNumber;

@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _parseSMSC;
    BOOL _waitForAck;
    NSNumber *_transport;
    NSNumber *_ctFormat;
    NSData *_hexPdu;
}

@property (nonatomic) NSNumber *ctFormat; // @synthesize ctFormat=_ctFormat;
@property (strong, nonatomic) NSData *hexPdu; // @synthesize hexPdu=_hexPdu;
@property (nonatomic) BOOL parseSMSC; // @synthesize parseSMSC=_parseSMSC;
@property (nonatomic) NSNumber *transport; // @synthesize transport=_transport;
@property (nonatomic) BOOL waitForAck; // @synthesize waitForAck=_waitForAck;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTSMSDataType:(id)arg1;

@end

