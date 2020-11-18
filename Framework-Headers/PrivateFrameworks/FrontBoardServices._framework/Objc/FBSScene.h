//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplay, FBSDisplay, FBSSceneClientSettings, FBSSceneSettings, NSArray, NSString;
@protocol FBSSceneDelegate;

@interface FBSScene : NSObject
{
    NSArray *_layers;
}

@property (readonly, strong, nonatomic) FBSSceneClientSettings *clientSettings;
@property (readonly, strong, nonatomic) NSArray *contexts;
@property (nonatomic) id<FBSSceneDelegate> delegate;
@property (readonly, nonatomic) CADisplay *display;
@property (readonly, strong, nonatomic) FBSDisplay *fbsDisplay;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, strong, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property (readonly, strong, nonatomic) FBSSceneSettings *settings;

- (id)_init;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)invalidate;
- (BOOL)invalidateSnapshotWithContext:(id)arg1;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)snapshotRequest;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;

@end

