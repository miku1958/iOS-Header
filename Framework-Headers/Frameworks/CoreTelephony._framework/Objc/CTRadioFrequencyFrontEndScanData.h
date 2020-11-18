//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface CTRadioFrequencyFrontEndScanData : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _rfcInitPass;
    BOOL _rffeScanPass;
    unsigned long long _version;
    unsigned long long _hwPrdId;
    unsigned long long _hwSku;
    unsigned long long _hwRev;
    unsigned long long _hwHousing;
    unsigned long long _rfcHwid;
    unsigned long long _rfcRev;
    unsigned long long _numExpectedDevices;
    unsigned long long _numDetectedDevices;
    unsigned long long _numMissingDevices;
    NSMutableArray *_rffeScanInfo;
}

@property (nonatomic) unsigned long long hwHousing; // @synthesize hwHousing=_hwHousing;
@property (nonatomic) unsigned long long hwPrdId; // @synthesize hwPrdId=_hwPrdId;
@property (nonatomic) unsigned long long hwRev; // @synthesize hwRev=_hwRev;
@property (nonatomic) unsigned long long hwSku; // @synthesize hwSku=_hwSku;
@property (nonatomic) unsigned long long numDetectedDevices; // @synthesize numDetectedDevices=_numDetectedDevices;
@property (nonatomic) unsigned long long numExpectedDevices; // @synthesize numExpectedDevices=_numExpectedDevices;
@property (nonatomic) unsigned long long numMissingDevices; // @synthesize numMissingDevices=_numMissingDevices;
@property (nonatomic) unsigned long long rfcHwid; // @synthesize rfcHwid=_rfcHwid;
@property (nonatomic) BOOL rfcInitPass; // @synthesize rfcInitPass=_rfcInitPass;
@property (nonatomic) unsigned long long rfcRev; // @synthesize rfcRev=_rfcRev;
@property (strong, nonatomic) NSMutableArray *rffeScanInfo; // @synthesize rffeScanInfo=_rffeScanInfo;
@property (nonatomic) BOOL rffeScanPass; // @synthesize rffeScanPass=_rffeScanPass;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
