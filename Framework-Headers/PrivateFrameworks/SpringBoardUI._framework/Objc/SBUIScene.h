//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>
#import <SpringBoardUI/FBSceneClient-Protocol.h>

@class FBSDisplay, FBSSceneClientSettings, FBSSceneSettings, NSMutableSet, NSSet, NSString;
@protocol FBSceneHost;

@interface SBUIScene : NSObject <FBSceneClient, BSDescriptionProviding>
{
    BOOL _valid;
    NSString *_identifier;
    FBSDisplay *_display;
    id<FBSceneHost> _sceneHost;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    NSMutableSet *_layers;
}

@property (copy) FBSSceneClientSettings *clientSettings; // @synthesize clientSettings=_clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSSet *layers; // @synthesize layers=_layers;
@property (copy) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

- (void)attachLayer:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)host:(id)arg1 configureWithInitialClientSettings:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;

@end
