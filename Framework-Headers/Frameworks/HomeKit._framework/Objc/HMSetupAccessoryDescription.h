//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMSetupAccessoryDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_accessoryUUID;
    NSString *_accessoryName;
}

@property (readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property (readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

