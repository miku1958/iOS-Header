//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDRemoteKeyedArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;
    NSString *_transportType;
}

@property (strong, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
@property (strong, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;

- (void).cxx_destruct;
- (void)__configure;
- (void)dealloc;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodedData;
- (void)finishEncoding;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg1 remoteGateway:(BOOL)arg2 remoteUserIsAdministrator:(BOOL)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg1 remoteGateway:(BOOL)arg2 remoteUserIsAdministrator:(BOOL)arg3 user:(id)arg4 supportedFeatures:(id)arg5;

@end

