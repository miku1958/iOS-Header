//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/OSLogCoding-Protocol.h>
#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSDate, NSString;

@interface TAGeoNavigationNotification : NSObject <OSLogCoding, TAEventProtocol>
{
    NSDate *_date;
    unsigned long long _transportType;
    unsigned long long _navState;
}

@property (readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long navState; // @synthesize navState=_navState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransportType:(unsigned long long)arg1 andNavigationState:(unsigned long long)arg2 date:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
