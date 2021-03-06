//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRKASMCredentialStore, NSString;
@protocol CRKClassKitRosterRequirements;

@interface CRKASMRosterProviderConfiguration : NSObject
{
    NSString *_userCommonNamePrefix;
    NSString *_trustedUserCommonNamePrefix;
    NSObject<CRKClassKitRosterRequirements> *_rosterRequirements;
    CRKASMCredentialStore *_credentialStore;
    long long _maxCourseUsersCount;
    long long _maxCourseTrustedUsersCount;
    double _rosterMutationTimeout;
}

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore; // @synthesize credentialStore=_credentialStore;
@property (readonly, nonatomic) long long maxCourseTrustedUsersCount; // @synthesize maxCourseTrustedUsersCount=_maxCourseTrustedUsersCount;
@property (readonly, nonatomic) long long maxCourseUsersCount; // @synthesize maxCourseUsersCount=_maxCourseUsersCount;
@property (readonly, nonatomic) double rosterMutationTimeout; // @synthesize rosterMutationTimeout=_rosterMutationTimeout;
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *rosterRequirements; // @synthesize rosterRequirements=_rosterRequirements;
@property (readonly, copy, nonatomic) NSString *trustedUserCommonNamePrefix; // @synthesize trustedUserCommonNamePrefix=_trustedUserCommonNamePrefix;
@property (readonly, copy, nonatomic) NSString *userCommonNamePrefix; // @synthesize userCommonNamePrefix=_userCommonNamePrefix;

+ (BOOL)currentPlatformRequiresPersonaAdoption;
+ (id)instructorRosterConfiguration;
+ (id)makeStandardClassKitFacade;
+ (id)makeStudentClassKitFacade;
+ (id)studentRosterConfiguration;
- (void).cxx_destruct;
- (id)initWithUserCommonNamePrefix:(id)arg1 trustedUserCommonNamePrefix:(id)arg2 rosterRequirements:(id)arg3 credentialStore:(id)arg4 maxCourseUsersCount:(long long)arg5 maxCourseTrustedUsersCount:(long long)arg6 rosterMutationTimeout:(double)arg7;

@end

