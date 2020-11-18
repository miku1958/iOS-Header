//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>
#import <TrialServer/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, TRIExperimentDeployment;

@interface TRIExperimentRecord : NSObject <NSCopying, NSSecureCoding>
{
    int _type;
    TRIExperimentDeployment *_experimentDeployment;
    NSString *_treatmentId;
    long long _status;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_namespaces;
}

@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment; // @synthesize experimentDeployment=_experimentDeployment;
@property (readonly, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) long long status; // @synthesize status=_status;
@property (readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property (readonly, nonatomic) int type; // @synthesize type=_type;

+ (void)load;
+ (id)recordWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_swizzledEncodeWithCoder:(id)arg1;
- (id)copyWithReplacementEndDate:(id)arg1;
- (id)copyWithReplacementExperimentDeployment:(id)arg1;
- (id)copyWithReplacementNamespaces:(id)arg1;
- (id)copyWithReplacementStartDate:(id)arg1;
- (id)copyWithReplacementStatus:(long long)arg1;
- (id)copyWithReplacementTreatmentId:(id)arg1;
- (id)copyWithReplacementType:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRecord:(id)arg1;
- (BOOL)isExpiredExperiment;

@end
