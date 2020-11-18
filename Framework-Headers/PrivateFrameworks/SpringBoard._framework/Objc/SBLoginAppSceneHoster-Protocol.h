//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBApplication, UIView;
@protocol SBLoginAppSceneHosterDelegate;

@protocol SBLoginAppSceneHoster <NSObject>

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL deferHIDEvents;
@property (weak, nonatomic) id<SBLoginAppSceneHosterDelegate> delegate;
@property (readonly, nonatomic) SBApplication *hostedApp;
@property (readonly, nonatomic) NSString *hostedAppBundleID;
@property (readonly, nonatomic) NSString *hostedSceneIdentifier;

- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)updateSettingsWithTransitionBlock:(FBSSceneTransitionContext * (^)(FBSMutableSceneSettings *))arg1;
@end
