//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _RWIRelayConnectionToApplication;

__attribute__((visibility("hidden")))
@interface _RWIApplicationInfo : NSObject
{
    int _hostApplicationPID;
    BOOL _proxy;
    BOOL _hasRemoteDebugSession;
    BOOL _allowsRemoteAutomation;
    BOOL _hasUpdatedFromListing;
    int _pid;
    NSString *_bundleId;
    NSString *_name;
    _RWIRelayConnectionToApplication *_connection;
    NSString *_debuggerConnectionIdentifier;
    unsigned long long _applicationState;
}

@property (readonly, nonatomic) BOOL allowsRemoteAutomation; // @synthesize allowsRemoteAutomation=_allowsRemoteAutomation;
@property (readonly, nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
@property (copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (nonatomic) _RWIRelayConnectionToApplication *connection; // @synthesize connection=_connection;
@property (copy, nonatomic) NSString *debuggerConnectionIdentifier; // @synthesize debuggerConnectionIdentifier=_debuggerConnectionIdentifier;
@property (readonly, nonatomic) BOOL hasRemoteDebugSession; // @synthesize hasRemoteDebugSession=_hasRemoteDebugSession;
@property (readonly, nonatomic) BOOL hasUpdatedFromListing; // @synthesize hasUpdatedFromListing=_hasUpdatedFromListing;
@property (readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (nonatomic, getter=isProxy) BOOL proxy; // @synthesize proxy=_proxy;

+ (id)identifierForPID:(int)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(BOOL)arg4 connection:(id)arg5 applicationState:(unsigned long long)arg6;
- (void)setHostApplicationPID:(int)arg1;
- (BOOL)updateApplicationState:(unsigned long long)arg1;
- (BOOL)updateFromListing:(id)arg1;

@end

