//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBProcess.h>

@class FBSExtensionInfo;

@interface FBExtensionProcess : FBProcess
{
    FBSExtensionInfo *_extensionInfo;
    int _hostPID;
    struct os_unfair_lock_s _hostProcessLock;
    FBProcess *_lock_hostProcess;
}

@property (readonly, nonatomic) FBSExtensionInfo *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property (readonly, nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property (readonly, nonatomic) FBProcess *hostProcess;

- (void).cxx_destruct;
- (void)_finishInit;
- (BOOL)isExtensionProcess;
- (id)succinctDescriptionBuilder;

@end

