//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/NSSecureCoding-Protocol.h>
#import <SensorKit/SRSampleExporting-Protocol.h>

@class NSString;

@interface SRWebUsage : NSObject <SRSampleExporting, NSSecureCoding>
{
    double _totalUsageTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;

+ (BOOL)supportsSecureCoding;
+ (id)webUsageWithTotalUsageTime:(double)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sr_dictionaryRepresentation;

@end
