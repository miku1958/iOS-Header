//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSString;
@protocol NSObject><NSCopying;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding>
{
    NSString *_sceneID;
    unsigned long long _transactionID;
    FBSSceneSettings *_settings;
    FBSSceneSettingsDiff *_settingsDiff;
    FBSSceneTransitionContext *_transitionContext;
    id<NSObject><NSCopying> _clientContext;
}

@property (copy, nonatomic) id<NSObject><NSCopying> clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property (strong, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (strong, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_settingsDiff;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property (weak, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;

+ (id)contextWithScene:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

