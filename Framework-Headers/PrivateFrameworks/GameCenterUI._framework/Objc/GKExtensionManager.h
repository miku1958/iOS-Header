//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/GKExtensionHostViewControllerDelegate-Protocol.h>

@class GKExtensionHostViewController, NSString;
@protocol OS_dispatch_queue;

@interface GKExtensionManager : NSObject <GKExtensionHostViewControllerDelegate>
{
    long long _extensionLoadState;
    GKExtensionHostViewController *_extensionHostViewController;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_extensionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) GKExtensionHostViewController *extensionHostViewController; // @synthesize extensionHostViewController=_extensionHostViewController;
@property (copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property (nonatomic) long long extensionLoadState; // @synthesize extensionLoadState=_extensionLoadState;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)extensionDidTerminateWithError:(id)arg1;
- (id)initWithExtensionBundleIdentifer:(id)arg1 host:(id)arg2;
- (void)instantiateViewControllerWithHost:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)needToLoadExtension;
- (id)tournamentExtensionViewController;

@end
