//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isMe;
    NSString *_addressIdentifier;
    double _wifiConfidence;
    long long _wifiFingerprintLabelType;
    NSUUID *_identifier;
}

@property (copy, nonatomic) NSString *addressIdentifier; // @synthesize addressIdentifier=_addressIdentifier;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property (nonatomic) double wifiConfidence; // @synthesize wifiConfidence=_wifiConfidence;
@property (nonatomic) long long wifiFingerprintLabelType; // @synthesize wifiFingerprintLabelType=_wifiFingerprintLabelType;

+ (id)fingerprintLabelTypeToString:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddressIdentifier:(id)arg1 isMe:(BOOL)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtendedAttributesMO:(id)arg1;
- (id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(BOOL)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMapItemExtendedAttributes:(id)arg1;

@end

