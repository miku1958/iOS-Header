//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardUIServices/NSObject-Protocol.h>

@class NSString;
@protocol FBUISceneManager, FBUISceneSurrogate;

@protocol FBUISceneWorkspace <NSObject>
- (NSString *)identifier;
- (id<FBUISceneSurrogate>)sceneManager:(id<FBUISceneManager>)arg1 surrogateForSceneWithIdentifier:(NSString *)arg2;
@end
