//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>
#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSExtension, NSString;

@interface GKUIRemoteViewController : _UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol>
{
    GKGame *_game;
    NSExtension *_extension;
    id _requestIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (strong, nonatomic) GKGame *game; // @synthesize game=_game;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) id requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (readonly) Class superclass;

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)initialItemsForExtension;
+ (void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)_desiredStatusBarStyle;
- (void)cancelExtension;
- (void)dealloc;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (id)extensionObjectProxy;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;
- (id)init;
- (void)messageFromClient:(id)arg1;
- (void)messageFromExtension:(id)arg1;
- (void)sendMessageToExtension:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

