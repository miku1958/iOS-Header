//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, RBSProcessIdentity;

@interface RBLaunchdProperties : NSObject
{
    long long _type;
    NSString *_path;
    int _hostPid;
    BOOL _multiInstance;
    BOOL _systemShell;
    BOOL _variableEUID;
    unsigned char _overrideManageFlags;
    NSString *_bundleID;
    NSString *_jobLabel;
    NSString *_executablePath;
    int _requestedJetsamPriority;
    BOOL _doesOverrideManagement;
    NSString *_underlyingAssertion;
    RBSProcessIdentity *_specifiedIdentity;
    NSString *_beforeTranslocationBundlePath;
    NSString *_homeDirectory;
    NSString *_tmpDirectory;
    NSUUID *_uuid;
}

@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, nonatomic) NSString *beforeTranslocationBundlePath; // @synthesize beforeTranslocationBundlePath=_beforeTranslocationBundlePath;
@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, nonatomic) BOOL doesOverrideManagement; // @synthesize doesOverrideManagement=_doesOverrideManagement;
@property (readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property (readonly, copy, nonatomic) NSString *homeDirectory; // @synthesize homeDirectory=_homeDirectory;
@property (readonly, nonatomic) int hostPid; // @synthesize hostPid=_hostPid;
@property (readonly, nonatomic) NSString *jobLabel; // @synthesize jobLabel=_jobLabel;
@property (readonly, nonatomic, getter=isMultiInstance) BOOL multiInstance; // @synthesize multiInstance=_multiInstance;
@property (readonly, nonatomic) unsigned char overrideManageFlags; // @synthesize overrideManageFlags=_overrideManageFlags;
@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property (readonly, nonatomic) int requestedJetsamPriority; // @synthesize requestedJetsamPriority=_requestedJetsamPriority;
@property (readonly, copy, nonatomic) RBSProcessIdentity *specifiedIdentity; // @synthesize specifiedIdentity=_specifiedIdentity;
@property (readonly, nonatomic, getter=isSystemShell) BOOL systemShell; // @synthesize systemShell=_systemShell;
@property (readonly, copy, nonatomic) NSString *tmpDirectory; // @synthesize tmpDirectory=_tmpDirectory;
@property (readonly, nonatomic) NSString *underlyingAssertion; // @synthesize underlyingAssertion=_underlyingAssertion;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly, nonatomic, getter=hasVariableEUID) BOOL variableEUID; // @synthesize variableEUID=_variableEUID;

+ (id)propertiesForPid:(int)arg1;
- (void).cxx_destruct;
- (id)_initAppWithProperties:(id)arg1;
- (id)_initDaemonWithProperties:(id)arg1 path:(id)arg2;
- (id)_initXPCServiceWithProperties:(id)arg1 path:(id)arg2 HostPid:(int)arg3;
- (void)_parseAdditionalProperties:(id)arg1;
- (BOOL)_parseDaemonPlist:(id)arg1;
- (void)_parseDaemonProperties;
- (void)_parseLASSProperties:(id)arg1;

@end
