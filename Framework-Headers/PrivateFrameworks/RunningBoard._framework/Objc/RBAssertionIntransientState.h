//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>

@class NSMutableSet, NSString;

@interface RBAssertionIntransientState : NSObject <NSCopying>
{
    BOOL _invalidatesSynchronously;
    BOOL _isPersistent;
    BOOL _hasHereditaryGrant;
    BOOL _hasDomainAttribute;
    BOOL _definesRelativeStartTime;
    BOOL _terminateTargetOnOriginatorExit;
    BOOL _suspendsOnOriginatorSuspension;
    NSMutableSet *_sourceEnvironments;
    unsigned long long _runningReason;
    unsigned long long _legacyReason;
    NSString *_domainAttributes;
    unsigned long long _startPolicy;
    unsigned long long _endPolicy;
    double _invalidationDuration;
    double _warningDuration;
}

@property (nonatomic) BOOL definesRelativeStartTime; // @synthesize definesRelativeStartTime=_definesRelativeStartTime;
@property (strong, nonatomic) NSString *domainAttributes; // @synthesize domainAttributes=_domainAttributes;
@property (nonatomic) unsigned long long endPolicy; // @synthesize endPolicy=_endPolicy;
@property (nonatomic) BOOL hasDomainAttribute; // @synthesize hasDomainAttribute=_hasDomainAttribute;
@property (nonatomic) BOOL hasHereditaryGrant; // @synthesize hasHereditaryGrant=_hasHereditaryGrant;
@property (nonatomic) BOOL invalidatesSynchronously; // @synthesize invalidatesSynchronously=_invalidatesSynchronously;
@property (nonatomic) double invalidationDuration; // @synthesize invalidationDuration=_invalidationDuration;
@property (nonatomic) BOOL isPersistent; // @synthesize isPersistent=_isPersistent;
@property (nonatomic) unsigned long long legacyReason; // @synthesize legacyReason=_legacyReason;
@property (nonatomic) unsigned long long runningReason; // @synthesize runningReason=_runningReason;
@property (readonly, nonatomic) NSMutableSet *sourceEnvironments; // @synthesize sourceEnvironments=_sourceEnvironments;
@property (nonatomic) unsigned long long startPolicy; // @synthesize startPolicy=_startPolicy;
@property (nonatomic) BOOL suspendsOnOriginatorSuspension; // @synthesize suspendsOnOriginatorSuspension=_suspendsOnOriginatorSuspension;
@property (nonatomic) BOOL terminateTargetOnOriginatorExit; // @synthesize terminateTargetOnOriginatorExit=_terminateTargetOnOriginatorExit;
@property (nonatomic) double warningDuration; // @synthesize warningDuration=_warningDuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
