//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTUIClient-Protocol.h>

@class NSString, NSXPCConnection, SBPrototypeDumpingGround, SBRestartManager, SBRootSettings, SBSStatusBarStyleOverridesAssertion;

@interface SBPrototypeController : NSObject <PTUIClient>
{
    NSXPCConnection *_prototypingUIServerConnection;
    BOOL _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBSStatusBarStyleOverridesAssertion *_remotePrototypingAssertion;
    SBRestartManager *_restartManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) SBRestartManager *restartManager; // @synthesize restartManager=_restartManager;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_createConnection;
- (BOOL)_handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)_handlePrototypingEvent:(long long)arg1;
- (void)_sendEvent:(long long)arg1;
- (BOOL)_shouldSendEvent:(long long)arg1;
- (void)_updateKeyHIDEventRouters;
- (void)_updateRemoteEditingState;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)handleRingerSwitchEvent;
- (BOOL)handleVolumeDecreaseEvent;
- (BOOL)handleVolumeIncreaseEvent;
- (id)init;
- (void)killSpringBoard;
- (void)restartSpringBoard;
- (id)rootSettings;

@end

