//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeyboardArbiter/NSObject-Protocol.h>

@class FBSSceneLayer, NSObject, NSString, _UIKeyboardArbiter;
@protocol OS_dispatch_queue;

@protocol _UIKeyboardArbiterLink <NSObject>

@property (readonly, nonatomic) BOOL isAvailable;
@property (weak, nonatomic) _UIKeyboardArbiter *owner;
@property (readonly, nonatomic) NSString *serviceName;

- (void)attach:(FBSSceneLayer *)arg1;
- (void)connectWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)createSceneWithCompletion:(void (^)(BOOL))arg1;
- (void)detach:(FBSSceneLayer *)arg1;
- (void)updateSceneSettings;
@end
