//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFUserUtteranceSelectionResults, NSLocale, NSString, UIViewController;
@protocol SiriUIViewController;

@protocol SiriUISnippetViewControllerDelegatePrivate <NSObject>
- (void)cancelSpeakingForSiriViewController:(id<SiriUIViewController>)arg1;
- (NSLocale *)localeForSiriViewController:(id<SiriUIViewController>)arg1;
- (void)removeSiriViewController:(id<SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id<SiriUIViewController>)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id<SiriUIViewController>)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id<SiriUIViewController>)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2;
- (void)siriSnippetViewController:(id<SiriUIViewController>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id<SiriUIViewController>)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)siriViewController:(id<SiriUIViewController>)arg1 speakText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)siriViewController:(id<SiriUIViewController>)arg1 startCorrectedSpeechRequestWithText:(NSString *)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriViewControllerDidEndEditing:(id<SiriUIViewController>)arg1;
- (void)siriViewControllerRequestTearDownEditingViewController:(id<SiriUIViewController>)arg1;
- (BOOL)siriViewControllerShouldPreventUserInteraction:(id<SiriUIViewController>)arg1;
- (void)siriViewControllerWillBeginEditing:(id<SiriUIViewController>)arg1;
@end
