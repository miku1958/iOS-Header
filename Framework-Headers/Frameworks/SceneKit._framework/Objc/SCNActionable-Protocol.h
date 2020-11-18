//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/NSObject-Protocol.h>

@class NSArray, NSString, SCNAction;

@protocol SCNActionable <NSObject>

@property (readonly, nonatomic) NSArray *actionKeys;
@property (readonly, nonatomic) BOOL hasActions;

- (SCNAction *)actionForKey:(NSString *)arg1;
- (void)removeActionForKey:(NSString *)arg1;
- (void)removeAllActions;
- (void)runAction:(SCNAction *)arg1;
- (void)runAction:(SCNAction *)arg1 completionHandler:(void (^)(void))arg2;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
@end

