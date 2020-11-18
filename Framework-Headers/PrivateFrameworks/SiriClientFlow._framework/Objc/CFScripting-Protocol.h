//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, SACFAbstractClientCommand, SACFClientFlowScript;

@protocol CFScripting
- (id)initWithConnectionName:(NSString *)arg1;
- (void)performCommandExecutionForCommand:(SACFAbstractClientCommand *)arg1 completion:(void (^)(SABaseCommand *))arg2;
- (void)performWarmupAndEvaluateScriptWithScriptHint:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)performWarmupWithCompletion:(void (^)(BOOL))arg1;
- (void)removeScripts:(NSArray *)arg1 completion:(void (^)(BOOL))arg2;
- (void)updateScriptCacheForFlowScript:(SACFClientFlowScript *)arg1 completion:(void (^)(BOOL))arg2;
@end

