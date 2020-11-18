//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_machineID;
    NSString *_oneTimePassword;
    unsigned long long _routingInfo;
}

@property (copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property (copy, nonatomic) NSString *oneTimePassword; // @synthesize oneTimePassword=_oneTimePassword;
@property (nonatomic) unsigned long long routingInfo; // @synthesize routingInfo=_routingInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
