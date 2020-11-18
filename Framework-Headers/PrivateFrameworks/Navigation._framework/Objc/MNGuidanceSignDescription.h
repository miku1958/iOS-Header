//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class GEOJunction, NSArray, NSDictionary, NSString, NSUUID;

@interface MNGuidanceSignDescription : NSObject <NSSecureCoding>
{
    int _shieldID;
    int _composedGuidanceEventIndex;
    NSUUID *_uniqueID;
    NSArray *_titles;
    NSArray *_details;
    GEOJunction *_junction;
    NSString *_shieldText;
    NSString *_shieldStringID;
    NSDictionary *_variableOverrides;
    long long _distanceDetailLevel;
}

@property (readonly, nonatomic) int composedGuidanceEventIndex; // @synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex;
@property (readonly, nonatomic) NSArray *details; // @synthesize details=_details;
@property (readonly, nonatomic) long long distanceDetailLevel; // @synthesize distanceDetailLevel=_distanceDetailLevel;
@property (readonly, nonatomic) GEOJunction *junction; // @synthesize junction=_junction;
@property (readonly, nonatomic) int shieldID; // @synthesize shieldID=_shieldID;
@property (readonly, nonatomic) NSString *shieldStringID; // @synthesize shieldStringID=_shieldStringID;
@property (readonly, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property (readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property (readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
@property (readonly, nonatomic) NSDictionary *variableOverrides; // @synthesize variableOverrides=_variableOverrides;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 shieldText:(id)arg7 shieldID:(int)arg8 shieldStringID:(id)arg9 composedGuidanceEventIndex:(int)arg10;

@end

