//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplayIdentity, FBSSceneDefinition, FBScene, SBApplication;

@interface SBApplicationSceneHandleRequest : NSObject
{
    SBApplication *_application;
    FBScene *_existingScene;
    FBSDisplayIdentity *_displayIdentity;
    FBSSceneDefinition *_sceneDefinition;
}

@property (strong, nonatomic) SBApplication *application; // @synthesize application=_application;
@property (strong, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property (strong, nonatomic) FBScene *existingScene; // @synthesize existingScene=_existingScene;
@property (copy, nonatomic) FBSSceneDefinition *sceneDefinition; // @synthesize sceneDefinition=_sceneDefinition;

+ (id)defaultRequestForApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3;
- (void).cxx_destruct;
- (id)initWithApplication:(id)arg1 sceneDefinition:(id)arg2 displayIdentity:(id)arg3;

@end
