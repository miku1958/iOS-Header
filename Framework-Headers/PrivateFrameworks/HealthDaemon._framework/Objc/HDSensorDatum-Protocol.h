//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@protocol HDSensorDatum <NSObject, NSSecureCoding>
- (NSDate *)endDate;
- (NSDate *)startDate;

@optional
- (long long)recordID;
- (NSUUID *)sourceId;
@end

