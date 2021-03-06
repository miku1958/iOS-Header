//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDAccessoryNetworkCredential, NSString;

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject
{
    BOOL _requiresUserConsent;
    NSString *_homeName;
    NSString *_setupCode;
    CDUnknownBlockType _setupCodeProvider;
    HMDAccessoryNetworkCredential *_networkCredential;
    NSString *_isoCountryCode;
}

@property (readonly) NSString *homeName; // @synthesize homeName=_homeName;
@property (readonly) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential; // @synthesize networkCredential=_networkCredential;
@property (readonly) BOOL requiresUserConsent; // @synthesize requiresUserConsent=_requiresUserConsent;
@property (readonly) NSString *setupCode; // @synthesize setupCode=_setupCode;
@property (readonly) CDUnknownBlockType setupCodeProvider; // @synthesize setupCodeProvider=_setupCodeProvider;

- (void).cxx_destruct;
- (id)initWithHomeName:(id)arg1 setupCode:(id)arg2 setupCodeProvider:(CDUnknownBlockType)arg3 requiresUserConsent:(BOOL)arg4 networkCredential:(id)arg5 country:(id)arg6;

@end

