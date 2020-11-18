//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, NSString;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    NSString *_identityToken;
    BOOL _shouldSendEphemeralAuthHeader;
    BOOL _shouldSendAbsintheHeader;
    BOOL _shouldSendPRKRequestHeader;
    NSString *_serviceToken;
    long long _serviceType;
    NSString *_passwordResetToken;
    NSString *_continuationToken;
    AKDevice *_proxiedDevice;
    AKAnisetteData *_proxiedDeviceAnisetteData;
}

@property (copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (copy, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property (copy, nonatomic) NSString *passwordResetToken; // @synthesize passwordResetToken=_passwordResetToken;
@property (strong, nonatomic) AKDevice *proxiedDevice; // @synthesize proxiedDevice=_proxiedDevice;
@property (strong, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property (copy, nonatomic) NSString *serviceToken; // @synthesize serviceToken=_serviceToken;
@property (nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property (nonatomic) BOOL shouldSendAbsintheHeader; // @synthesize shouldSendAbsintheHeader=_shouldSendAbsintheHeader;
@property (nonatomic) BOOL shouldSendEphemeralAuthHeader; // @synthesize shouldSendEphemeralAuthHeader=_shouldSendEphemeralAuthHeader;
@property (nonatomic) BOOL shouldSendPRKRequestHeader; // @synthesize shouldSendPRKRequestHeader=_shouldSendPRKRequestHeader;

+ (unsigned long long)signalFromServerResponse:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isResponseFinal:(id)arg1;
- (BOOL)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (void)signRequest:(id)arg1;

@end

