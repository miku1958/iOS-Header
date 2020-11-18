//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSCopying-Protocol.h>
#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@interface CTCarrierSpaceCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _supportsServices;
    BOOL _supportsUsage;
    BOOL _supportsPlans;
    BOOL _supportsApplications;
}

@property (nonatomic) BOOL supportsApplications; // @synthesize supportsApplications=_supportsApplications;
@property (nonatomic) BOOL supportsPlans; // @synthesize supportsPlans=_supportsPlans;
@property (nonatomic) BOOL supportsServices; // @synthesize supportsServices=_supportsServices;
@property (nonatomic) BOOL supportsUsage; // @synthesize supportsUsage=_supportsUsage;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

