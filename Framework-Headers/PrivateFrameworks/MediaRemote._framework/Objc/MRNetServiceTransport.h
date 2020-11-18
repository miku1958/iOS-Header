//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class NSNetService;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport
{
    void *_deviceInfo;
    BOOL _requiresCustomPairing;
    NSNetService *_netService;
}

@property (strong, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
@property (nonatomic) BOOL requiresCustomPairing;

+ (void *)createDeviceInfoFromNetService:(id)arg1;
+ (void *)createDeviceInfoFromTXTRecord:(id)arg1;
- (void)dealloc;
- (id)description;
- (void *)deviceInfo;
- (id)error;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)hostname;
- (id)initWithNetService:(id)arg1;
- (id)name;
- (long long)port;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;

@end

