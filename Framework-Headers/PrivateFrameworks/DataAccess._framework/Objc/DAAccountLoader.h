//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject
{
    NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;
    NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary *_acAccountTypeToClassNames;
    NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;
}

@property (strong, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath; // @synthesize acAccountTypeToAccountDaemonBundleSubpath=_acAccountTypeToAccountDaemonBundleSubpath;
@property (strong, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath; // @synthesize acAccountTypeToAccountFrameworkSubpath=_acAccountTypeToAccountFrameworkSubpath;
@property (strong, nonatomic) NSMutableDictionary *acAccountTypeToClassNames; // @synthesize acAccountTypeToClassNames=_acAccountTypeToClassNames;
@property (strong, nonatomic) NSMutableDictionary *acParentAccountTypeToChildAccountTypes; // @synthesize acParentAccountTypeToChildAccountTypes=_acParentAccountTypeToChildAccountTypes;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2;
- (BOOL)_loadFrameworkAtSubpath:(id)arg1;
- (Class)accountClassForACAccount:(id)arg1;
- (Class)agentClassForACAccount:(id)arg1;
- (Class)clientAccountClassForACAccount:(id)arg1;
- (Class)daemonAccountClassForACAccount:(id)arg1;
- (Class)daemonAppropriateAccountClassForACAccount:(id)arg1;
- (id)init;
- (void)loadDaemonBundleForACAccountType:(id)arg1;
- (void)loadFrameworkForACAccountType:(id)arg1;

@end

