//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface MCDeviceUploadOrganization : NSObject <NSSecureCoding>
{
    NSString *_orgId;
    NSString *_orgName;
    NSArray *_approvers;
    NSNumber *_skipItrackCheckNum;
    NSNumber *_deviceAdditionDepEnabledNum;
    NSNumber *_idmsWhitelistingEnabledNum;
    NSNumber *_idmsRemoveDeviceEnabledNum;
    NSNumber *_deviceAdditionGbiEnabledNum;
}

@property (readonly, nonatomic) NSArray *approvers; // @synthesize approvers=_approvers;
@property (readonly, nonatomic) BOOL deviceAdditionDepEnabled;
@property (strong, nonatomic) NSNumber *deviceAdditionDepEnabledNum; // @synthesize deviceAdditionDepEnabledNum=_deviceAdditionDepEnabledNum;
@property (readonly, nonatomic) BOOL deviceAdditionGbiEnabled;
@property (strong, nonatomic) NSNumber *deviceAdditionGbiEnabledNum; // @synthesize deviceAdditionGbiEnabledNum=_deviceAdditionGbiEnabledNum;
@property (readonly, nonatomic) BOOL idmsRemoveDeviceEnabled;
@property (strong, nonatomic) NSNumber *idmsRemoveDeviceEnabledNum; // @synthesize idmsRemoveDeviceEnabledNum=_idmsRemoveDeviceEnabledNum;
@property (readonly, nonatomic) BOOL idmsWhitelistingEnabled;
@property (strong, nonatomic) NSNumber *idmsWhitelistingEnabledNum; // @synthesize idmsWhitelistingEnabledNum=_idmsWhitelistingEnabledNum;
@property (readonly, nonatomic) NSString *orgId; // @synthesize orgId=_orgId;
@property (readonly, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property (readonly, nonatomic) BOOL skipItrackCheck;
@property (strong, nonatomic) NSNumber *skipItrackCheckNum; // @synthesize skipItrackCheckNum=_skipItrackCheckNum;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_approversFromApproversArray:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)initWithOrgId:(id)arg1 orgName:(id)arg2 approvers:(id)arg3 skipItrackCheck:(BOOL)arg4 deviceAdditionDepEnabled:(BOOL)arg5 idmsWhitelistingEnabled:(BOOL)arg6 idmsRemoveDeviceEnabled:(BOOL)arg7 deviceAdditionGbiEnabled:(BOOL)arg8;

@end

