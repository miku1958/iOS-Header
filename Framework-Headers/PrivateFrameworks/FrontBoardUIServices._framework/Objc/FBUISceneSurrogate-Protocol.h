//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardUIServices/FBUISceneConduit-Protocol.h>

@class FBSSceneParameters;
@protocol FBUISceneUpdater;

@protocol FBUISceneSurrogate <FBUISceneConduit>
- (FBSSceneParameters *)configure;
- (void)registerSceneUpdater:(id<FBUISceneUpdater>)arg1;
@end
