//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCameraStreamSessionID, HMDCameraVideoTier, NSArray, NSDictionary, NSString;

@interface HMDCameraVideoTierParameters : HMFObject <NSSecureCoding, HMFLogging>
{
    NSDictionary *_videoTierCombinations;
    NSArray *_tierOrder;
    HMDCameraStreamSessionID *_sessionID;
    HMDCameraVideoTier *_firstPickedTier;
    HMDCameraVideoTier *_currentPickedTier;
}

@property (strong, nonatomic) HMDCameraVideoTier *currentPickedTier; // @synthesize currentPickedTier=_currentPickedTier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HMDCameraVideoTier *firstPickedTier; // @synthesize firstPickedTier=_firstPickedTier;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *tierOrder; // @synthesize tierOrder=_tierOrder;
@property (readonly, nonatomic) NSDictionary *videoTierCombinations; // @synthesize videoTierCombinations=_videoTierCombinations;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_generateAllVideoTiers:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1 streamingCapabilities:(id)arg2;
- (id)logIdentifier;
- (BOOL)pickHigherTier;
- (BOOL)pickLowerTier;
- (void)updateFirstPickedTier:(id)arg1;
- (void)updateTierOrder:(id)arg1;
- (void)updateTierParameters:(id)arg1 firstPickedParameter:(id)arg2;

@end

