//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>
#import <CoreMotion/SRSampling-Protocol.h>

@class NSDate, NSString;

@interface CMOdometerSuitability : NSObject <SRSampling, NSSecureCoding, NSCopying>
{
    BOOL _suitableForRunning;
    BOOL _suitableForWalking;
    NSDate *_startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) BOOL suitableForRunning; // @synthesize suitableForRunning=_suitableForRunning;
@property (readonly, nonatomic) BOOL suitableForWalking; // @synthesize suitableForWalking=_suitableForWalking;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 suitableForRunning:(BOOL)arg2 suitableForWalking:(BOOL)arg3;

@end

