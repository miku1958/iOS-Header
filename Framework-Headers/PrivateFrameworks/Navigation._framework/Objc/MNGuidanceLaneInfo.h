//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSUUID;

@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding>
{
    BOOL _isForManeuver;
    int _composedGuidanceEventIndex;
    NSUUID *_uniqueID;
    NSArray *_lanes;
    NSDictionary *_variableOverrides;
    long long _distanceDetailLevel;
    NSArray *_titles;
    NSArray *_instructions;
}

@property (readonly, nonatomic) int composedGuidanceEventIndex; // @synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex;
@property (readonly, nonatomic) long long distanceDetailLevel; // @synthesize distanceDetailLevel=_distanceDetailLevel;
@property (readonly, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
@property (readonly, nonatomic) BOOL isForManeuver; // @synthesize isForManeuver=_isForManeuver;
@property (readonly, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property (readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property (readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
@property (readonly, nonatomic) NSDictionary *variableOverrides; // @synthesize variableOverrides=_variableOverrides;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 isForManeuver:(BOOL)arg2 lanes:(id)arg3 titles:(id)arg4 instructions:(id)arg5 variableOverrides:(id)arg6 distanceDetailLevel:(long long)arg7 composedGuidanceEventIndex:(int)arg8;

@end

