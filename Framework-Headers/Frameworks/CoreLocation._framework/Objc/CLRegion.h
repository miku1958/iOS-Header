//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_3afce72c fRegion;
}

@property (readonly, nonatomic) CDStruct_c3b9c2ee center;
@property (readonly, nonatomic) CDStruct_3afce72c clientRegion;
@property (nonatomic) BOOL conservativeEntry;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL notifyOnEntry;
@property (nonatomic) BOOL notifyOnExit;
@property (copy, nonatomic) NSString *onBehalfOfBundleId;
@property (readonly, nonatomic) double radius;
@property (nonatomic) int referenceFrame;

+ (BOOL)supportsSecureCoding;
- (void)_encodeWithCoder:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initCircularRegionWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(CDStruct_3afce72c)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

