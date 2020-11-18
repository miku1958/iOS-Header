//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>
#import <TrialServer/NSSecureCoding-Protocol.h>

@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding>
{
    int _deploymentId;
    NSString *_experimentId;
}

@property (readonly, nonatomic) int deploymentId; // @synthesize deploymentId=_deploymentId;
@property (readonly, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property (readonly) NSString *shortDesc;

+ (id)deploymentWithExperimentId:(id)arg1 deploymentId:(int)arg2;
+ (void)load;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_swizzledEncodeWithCoder:(id)arg1;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithReplacementExperimentId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasDeploymentId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDeployment:(id)arg1;
- (id)taskTag;

@end
