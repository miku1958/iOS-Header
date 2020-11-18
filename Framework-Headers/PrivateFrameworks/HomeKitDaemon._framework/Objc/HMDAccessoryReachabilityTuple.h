//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDAccessoryReachabilityTuple : NSObject
{
    BOOL _previouslySentReachability;
    BOOL _currentReachability;
    NSString *_accessoryUUID;
}

@property (strong, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property (nonatomic) BOOL currentReachability; // @synthesize currentReachability=_currentReachability;
@property (nonatomic) BOOL previouslySentReachability; // @synthesize previouslySentReachability=_previouslySentReachability;

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(BOOL)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
