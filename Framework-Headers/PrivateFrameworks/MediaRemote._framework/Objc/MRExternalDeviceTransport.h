//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDeviceInfo, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceTransport : NSObject
{
    long long _connectionType;
    BOOL _requiresCustomPairing;
    NSString *_uid;
}

@property (readonly, nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) BOOL requiresCustomPairing; // @synthesize requiresCustomPairing=_requiresCustomPairing;
@property (nonatomic) BOOL shouldUseSystemAuthenticationPrompt; // @dynamic shouldUseSystemAuthenticationPrompt;
@property (readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;

- (void).cxx_destruct;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;
- (void)reset;

@end

