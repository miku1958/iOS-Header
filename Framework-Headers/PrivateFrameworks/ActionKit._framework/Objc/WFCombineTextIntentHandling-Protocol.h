//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFCombineTextIntent;

@protocol WFCombineTextIntentHandling <NSObject>
- (void)handleCombineText:(WFCombineTextIntent *)arg1 completion:(void (^)(WFCombineTextIntentResponse *))arg2;
- (void)resolveCustomSeparatorForCombineText:(WFCombineTextIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)resolveSeparatorForCombineText:(WFCombineTextIntent *)arg1 withCompletion:(void (^)(WFCombineTextSeparatorResolutionResult *))arg2;
- (void)resolveTextForCombineText:(WFCombineTextIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;

@optional
- (void)confirmCombineText:(WFCombineTextIntent *)arg1 completion:(void (^)(WFCombineTextIntentResponse *))arg2;
@end

