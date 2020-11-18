//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEIKEv2ChildSAConfiguration, NEIKEv2Session, NEIKEv2SessionConfiguration;

@protocol NEIKEv2ConfigurationDelegate <NSObject>
- (void)requestConfigurationForSession:(NEIKEv2Session *)arg1 sessionConfig:(NEIKEv2SessionConfiguration *)arg2 childConfig:(NEIKEv2ChildSAConfiguration *)arg3 validateAuthBlock:(BOOL (^)(NEIKEv2SessionConfiguration *))arg4 responseBlock:(void (^)(NEIKEv2SessionConfiguration *, NEIKEv2ChildSAConfiguration *, struct NEVirtualInterface_s *))arg5;
- (void)sessionFailedBeforeRequestingConfiguration:(NEIKEv2Session *)arg1;
@end
