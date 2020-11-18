//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>
#import <TelephonyUtilities/TUPubliclyAccessibleCopying-Protocol.h>

@class NSData, NSString, NSURL;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    BOOL _canEnable;
    BOOL _enabled;
    BOOL _canEnableRoaming;
    BOOL _roamingEnabled;
    int _provisioningStatus;
    NSURL *_provisioningURL;
    NSData *_provisioningPostData;
}

@property (nonatomic) BOOL canEnable; // @synthesize canEnable=_canEnable;
@property (nonatomic) BOOL canEnableRoaming; // @synthesize canEnableRoaming=_canEnableRoaming;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSData *provisioningPostData; // @synthesize provisioningPostData=_provisioningPostData;
@property (nonatomic) int provisioningStatus; // @synthesize provisioningStatus=_provisioningStatus;
@property (copy, nonatomic) NSURL *provisioningURL; // @synthesize provisioningURL=_provisioningURL;
@property (readonly, nonatomic, getter=isProvisioningURLInvalid) BOOL provisioningURLInvalid;
@property (nonatomic, getter=isRoamingEnabled) BOOL roamingEnabled; // @synthesize roamingEnabled=_roamingEnabled;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;

@end

