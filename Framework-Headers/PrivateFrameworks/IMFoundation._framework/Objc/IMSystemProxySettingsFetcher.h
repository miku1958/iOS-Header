//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject
{
    unsigned short _port;
    unsigned short _proxyPort;
    id _delegate;
    NSString *_host;
    long long _proxyProtocol;
    NSString *_proxyHost;
    NSString *_proxyAccount;
    NSString *_proxyPassword;
}

@property (copy, nonatomic) NSString *_host; // @synthesize _host;
@property (nonatomic) unsigned short _port; // @synthesize _port;
@property (copy, nonatomic) NSString *_proxyAccount; // @synthesize _proxyAccount;
@property (copy, nonatomic) NSString *_proxyHost; // @synthesize _proxyHost;
@property (copy, nonatomic) NSString *_proxyPassword; // @synthesize _proxyPassword;
@property (nonatomic) unsigned short _proxyPort; // @synthesize _proxyPort;
@property (nonatomic) long long _proxyProtocol; // @synthesize _proxyProtocol;
@property id delegate; // @synthesize delegate=_delegate;

- (void)_callAccountSettingsDelegateMethod;
- (void)_callProxySettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary *)arg1;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3;
- (id)initWithProxyProtocol:(long long)arg1 proxyHost:(id)arg2 proxyPort:(unsigned short)arg3 delegate:(id)arg4;
- (void)retrieveProxyAccountSettings;
- (void)retrieveProxySettings;

@end

