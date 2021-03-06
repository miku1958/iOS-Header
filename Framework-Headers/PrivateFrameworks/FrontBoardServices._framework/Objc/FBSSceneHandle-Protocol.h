//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSProcessExecutionPolicy, FBSSceneActivitySession, FBSSceneParameters, FBSSceneSpecification, FBSSerialQueue, NSString;
@protocol FBSProcess, FBSSceneAgentProxy;

@protocol FBSSceneHandle <NSObject>
- (FBSSerialQueue *)callOutQueue;
- (id<FBSProcess>)clientProcess;
- (void)closeSession:(FBSSceneActivitySession *)arg1;
- (id<FBSSceneAgentProxy>)counterpartAgent;
- (id<FBSProcess>)hostProcess;
- (NSString *)identifier;
- (FBSSceneActivitySession *)openSessionWithName:(NSString *)arg1 executionPolicy:(FBSProcessExecutionPolicy *)arg2;
- (FBSSceneParameters *)parameters;
- (FBSSceneActivitySession *)sessionForIdentifier:(NSString *)arg1;
- (FBSSceneSpecification *)specification;
@end

