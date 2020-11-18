//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload
{
    BOOL _proxyPACFallbackAllowed;
    BOOL _proxyCaptiveLoginAllowed;
    int _proxyType;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSNumber *_proxyPACFallbackAllowedNum;
    NSNumber *_proxyCaptiveLoginAllowedNum;
}

@property (strong, nonatomic) NSString *credentialUUID; // @synthesize credentialUUID=_credentialUUID;
@property (nonatomic) BOOL proxyCaptiveLoginAllowed; // @synthesize proxyCaptiveLoginAllowed=_proxyCaptiveLoginAllowed;
@property (strong, nonatomic) NSNumber *proxyCaptiveLoginAllowedNum; // @synthesize proxyCaptiveLoginAllowedNum=_proxyCaptiveLoginAllowedNum;
@property (nonatomic) BOOL proxyPACFallbackAllowed; // @synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed;
@property (strong, nonatomic) NSNumber *proxyPACFallbackAllowedNum; // @synthesize proxyPACFallbackAllowedNum=_proxyPACFallbackAllowedNum;
@property (strong, nonatomic) NSString *proxyPACURLString; // @synthesize proxyPACURLString=_proxyPACURLString;
@property (strong, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property (strong, nonatomic) NSString *proxyServer; // @synthesize proxyServer=_proxyServer;
@property (strong, nonatomic) NSNumber *proxyServerPort; // @synthesize proxyServerPort=_proxyServerPort;
@property (nonatomic) int proxyType; // @synthesize proxyType=_proxyType;
@property (strong, nonatomic) NSString *proxyUsername; // @synthesize proxyUsername=_proxyUsername;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
