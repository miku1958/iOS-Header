//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface CTRemoteDeviceList : NSObject <NSSecureCoding>
{
    NSMutableArray *_devices;
}

@property (strong, nonatomic) NSMutableArray *devices; // @synthesize devices=_devices;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

