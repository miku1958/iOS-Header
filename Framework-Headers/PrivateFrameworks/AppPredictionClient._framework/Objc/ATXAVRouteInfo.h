//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding>
{
    NSString *_deviceName;
    NSString *_deviceID;
}

@property (readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 deviceID:(id)arg2;

@end

