//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject
{
    long long _iCloudLogoutPolicy;
    NSUUID *_policyMonitorIdentifier;
}

@property (nonatomic) long long iCloudLogoutPolicy; // @synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy;
@property (readonly, nonatomic) NSUUID *policyMonitorIdentifier; // @synthesize policyMonitorIdentifier=_policyMonitorIdentifier;

+ (BOOL)automaticallyNotifiesObserversOfICloudLogoutPolicy;
- (void).cxx_destruct;
- (void)_updateiCloudLogout;
- (void)_updateiCloudLogoutFromPolicies:(id)arg1;
- (void)dealloc;
- (id)init;

@end

