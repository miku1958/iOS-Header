//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSSet, NSString, TIKeyboardSecureCandidateRenderTraits, TIKeyboardSecureCandidateRenderer, TIKeyboardState;

@protocol TIProactiveQuickTypeManaging
- (void)generateAndRenderProactiveSuggestionsForInput:(NSArray *)arg1 withKeyboardState:(TIKeyboardState *)arg2 withAdditionalPredictions:(NSArray *)arg3 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg4 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg5 withInput:(NSString *)arg6 withRecipient:(NSString *)arg7 withApplication:(NSString *)arg8 withLocale:(NSString *)arg9 nextInputWillInsertAutospace:(BOOL)arg10 withIsResponseDenyListed:(BOOL)arg11 withShouldDisableAutoCaps:(BOOL)arg12 withAvailableApps:(NSSet *)arg13 logBlock:(void (^)(NSString *))arg14 async:(BOOL)arg15 completion:(void (^)(NSArray *))arg16;
- (NSArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (void)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4 async:(BOOL)arg5 completion:(void (^)(NSArray *))arg6;
- (NSArray *)generateAndRenderProactiveSuggestionsWithTriggers:(NSArray *)arg1 withKeyboardState:(TIKeyboardState *)arg2 withAdditionalPredictions:(NSArray *)arg3 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg4 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg5 withInput:(NSString *)arg6 withRecipient:(NSString *)arg7 withApplication:(NSString *)arg8 withLocale:(NSString *)arg9 nextInputWillInsertAutospace:(BOOL)arg10 withAvailableApps:(NSSet *)arg11 logBlock:(void (^)(NSString *))arg12;
- (BOOL)isAutoCompleteEnabled;
- (BOOL)isAutoPopupEnabled;
- (BOOL)isEnabled;
- (void)propogateMetrics:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)reset;
- (NSArray *)searchForMeCardEmailAddresses;
- (NSArray *)searchForMeCardRegions;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (BOOL)usePQT2Flow;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;
@end
