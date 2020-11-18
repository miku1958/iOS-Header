//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBUISceneClientIdentity, FBUISceneIdentity;
@protocol FBUIProcess, FBUISceneClient;

@protocol FBUISceneClientWorkspace <NSObject>

@property (readonly, copy, nonatomic) FBUISceneClientIdentity *clientIdentity;
@property (readonly, strong, nonatomic) id<FBUIProcess> clientProcess;

- (void)beginTransaction;
- (id<FBUISceneClient>)clientForSceneIdentity:(FBUISceneIdentity *)arg1;
- (void)endTransaction;
@end

