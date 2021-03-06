//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDCollectedSensorDatum-Protocol.h>

@class NSData, NSDateInterval, NSString, NSUUID;

@interface HDDataCollectorSensorDatum : NSObject <HDCollectedSensorDatum>
{
    NSUUID *_datumIdentifier;
    NSDateInterval *_dateInterval;
    NSData *_resumeContext;
    CDUnknownBlockType _resumeContextProvider;
}

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSUUID *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSData *resumeContext;
@property (readonly, copy, nonatomic) CDUnknownBlockType resumeContextProvider; // @synthesize resumeContextProvider=_resumeContextProvider;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContextProvider:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;

@end

