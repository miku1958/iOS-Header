//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, TIKeyboardSecureCandidateRenderTraits, TIKeyboardSecureCandidateRenderer;

@protocol TIProactiveQuickTypeManaging <NSObject>
- (NSMutableArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (NSMutableArray *)generateAndRenderProactiveSuggestionsWithTriggers:(NSArray *)arg1 withAdditionalPredictions:(NSArray *)arg2 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg3 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg4 withInput:(NSString *)arg5 withRecipient:(NSString *)arg6 withApplication:(NSString *)arg7 withLocale:(NSString *)arg8 withTextContentType:(NSString *)arg9 withAvailableApps:(NSSet *)arg10 logBlock:(void (^)(NSString *))arg11;
- (NSDictionary *)getCachedRecipientInfoForEmailOrPhone:(NSString *)arg1;
- (NSArray *)getMeCardEmailAddresses;
- (BOOL)isAutoCompleteEnabled;
- (BOOL)isAutoPopupEnabled;
- (BOOL)isEnabled;
- (void)reset;
- (void)setCachedRecipientInfo:(NSDictionary *)arg1 forEmailOrPhone:(NSString *)arg2;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;
@end

