//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface PKTransitCommutePlanPackage : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_transitCommutePlans;
    unsigned long long _transitCommutePlanType;
    NSMutableDictionary *_commutePlanLookupDictionary;
}

@property (strong, nonatomic) NSMutableDictionary *commutePlanLookupDictionary; // @synthesize commutePlanLookupDictionary=_commutePlanLookupDictionary;
@property (nonatomic) unsigned long long transitCommutePlanType; // @synthesize transitCommutePlanType=_transitCommutePlanType;
@property (copy, nonatomic) NSArray *transitCommutePlans; // @synthesize transitCommutePlans=_transitCommutePlans;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 backFieldBuckets:(id)arg2 bundle:(id)arg3 privateBundle:(id)arg4;
- (id)planForIdentifier:(id)arg1;

@end
