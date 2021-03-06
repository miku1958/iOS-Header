//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>
#import <SPOwner/SPConnectionMaterial-Protocol.h>
#import <SPOwner/SPNearbyToken-Protocol.h>

@class NSData, NSDateInterval, NSNumber, NSString, SPBeaconingKey;

@interface SPCommandKey : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionMaterial>
{
    NSDateInterval *dateInterval;
    SPBeaconingKey *_beaconingKey;
    NSData *_connectionToken;
    NSData *_nearbyToken;
    long long _type;
    NSNumber *_primaryIndex;
    NSNumber *_secondaryIndex;
    NSData *_commandKey;
}

@property (readonly, copy, nonatomic) NSData *address;
@property (copy, nonatomic) SPBeaconingKey *beaconingKey; // @synthesize beaconingKey=_beaconingKey;
@property (copy, nonatomic) NSData *commandKey; // @synthesize commandKey=_commandKey;
@property (copy, nonatomic) NSData *connectionToken; // @synthesize connectionToken=_connectionToken;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSData *nearbyToken; // @synthesize nearbyToken=_nearbyToken;
@property (copy, nonatomic) NSNumber *primaryIndex; // @synthesize primaryIndex=_primaryIndex;
@property (copy, nonatomic) NSNumber *secondaryIndex; // @synthesize secondaryIndex=_secondaryIndex;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4 primaryIndex:(id)arg5 secondaryIndex:(id)arg6 type:(long long)arg7;
- (id)initWithCoder:(id)arg1;

@end

