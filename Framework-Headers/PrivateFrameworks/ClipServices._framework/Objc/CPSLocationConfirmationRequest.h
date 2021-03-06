//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClipServices/NSCopying-Protocol.h>
#import <ClipServices/NSSecureCoding-Protocol.h>

@class CLLocation, CLRegion, NSString;

@interface CPSLocationConfirmationRequest : NSObject <NSSecureCoding, NSCopying>
{
    long long _requestState;
    CLLocation *_deviceLocation;
    CLRegion *_expectedRegion;
    NSString *_clipBundleID;
    NSString *_applicationName;
}

@property (readonly, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property (readonly, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
@property (readonly, nonatomic) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property (readonly, nonatomic) CLRegion *expectedRegion; // @synthesize expectedRegion=_expectedRegion;
@property (readonly, nonatomic) long long requestState; // @synthesize requestState=_requestState;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestState:(long long)arg1 clipBundleID:(id)arg2 applicationName:(id)arg3 deviceLocation:(id)arg4 expectedRegion:(id)arg5;

@end

