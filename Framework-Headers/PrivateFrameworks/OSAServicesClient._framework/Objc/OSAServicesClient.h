//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OTAAgentServices;

@interface OSAServicesClient : NSObject
{
    NSXPCConnection *_connection;
    id<OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;
- (void).cxx_destruct;
- (id)awdKey;
- (id)crashreporterKey;
- (void)dealloc;
- (BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3;
- (id)init;
- (id)queryKey:(struct __CFString *)arg1;
- (BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void *)arg4;
- (unsigned int)uidForUser:(id)arg1;

@end
