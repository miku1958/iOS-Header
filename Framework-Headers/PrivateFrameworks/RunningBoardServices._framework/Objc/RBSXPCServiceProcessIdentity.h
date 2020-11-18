//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSProcessIdentity.h>

@class RBSXPCServiceIdentity;

__attribute__((visibility("hidden")))
@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity
{
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithXPCServiceID:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3;
- (BOOL)_matchesIdentity:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (unsigned char)defaultManageFlags;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostIdentifier;
- (id)hostIdentity;
- (BOOL)inheritsCoalitionBand;
- (id)initWithDecodeFromJob:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)isAnonymous;
- (BOOL)isEqualToIdentity:(id)arg1;
- (BOOL)isExtension;
- (BOOL)isXPCService;
- (id)uuid;
- (id)xpcServiceIdentifier;

@end
