//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTSignalStrengthMeasurements : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_rssi;
    NSNumber *_rscp;
    NSNumber *_ecn0;
    NSNumber *_rsrp;
    NSNumber *_rsrq;
    NSNumber *_snr;
    NSNumber *_ecio;
    NSNumber *_rxagc;
}

@property (strong, nonatomic) NSNumber *ecio; // @synthesize ecio=_ecio;
@property (strong, nonatomic) NSNumber *ecn0; // @synthesize ecn0=_ecn0;
@property (strong, nonatomic) NSNumber *rscp; // @synthesize rscp=_rscp;
@property (strong, nonatomic) NSNumber *rsrp; // @synthesize rsrp=_rsrp;
@property (strong, nonatomic) NSNumber *rsrq; // @synthesize rsrq=_rsrq;
@property (strong, nonatomic) NSNumber *rssi; // @synthesize rssi=_rssi;
@property (strong, nonatomic) NSNumber *rxagc; // @synthesize rxagc=_rxagc;
@property (strong, nonatomic) NSNumber *snr; // @synthesize snr=_snr;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

