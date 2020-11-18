//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFDialog.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SFBasicDialog : _SFDialog
{
    BOOL _canceledOnProvisionalNavigation;
    BOOL _canceledOnCommittedNavigation;
    BOOL _canceledOnApplicationBackground;
    BOOL _completionHandlerBlocksWebProcess;
    BOOL _alertControllerPresentsAsActionSheet;
    BOOL _shouldHideWebContent;
    NSArray *_additionalCancellationExemptions;
    long long _presentationStyle;
    NSString *_title;
    NSString *_message;
    NSString *_defaultText;
    NSString *_textPlaceholder;
    NSString *_defaultPassword;
    NSString *_passwordPlaceholder;
    NSArray *_actions;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (copy, nonatomic) NSArray *additionalCancellationExemptions; // @synthesize additionalCancellationExemptions=_additionalCancellationExemptions;
@property (nonatomic) BOOL alertControllerPresentsAsActionSheet; // @synthesize alertControllerPresentsAsActionSheet=_alertControllerPresentsAsActionSheet;
@property (nonatomic) BOOL canceledOnApplicationBackground; // @synthesize canceledOnApplicationBackground=_canceledOnApplicationBackground;
@property (nonatomic) BOOL canceledOnCommittedNavigation; // @synthesize canceledOnCommittedNavigation=_canceledOnCommittedNavigation;
@property (nonatomic) BOOL canceledOnProvisionalNavigation; // @synthesize canceledOnProvisionalNavigation=_canceledOnProvisionalNavigation;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) BOOL completionHandlerBlocksWebProcess; // @synthesize completionHandlerBlocksWebProcess=_completionHandlerBlocksWebProcess;
@property (copy, nonatomic) NSString *defaultPassword; // @synthesize defaultPassword=_defaultPassword;
@property (copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (copy, nonatomic) NSString *passwordPlaceholder; // @synthesize passwordPlaceholder=_passwordPlaceholder;
@property (nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property (nonatomic) BOOL shouldHideWebContent; // @synthesize shouldHideWebContent=_shouldHideWebContent;
@property (copy, nonatomic) NSString *textPlaceholder; // @synthesize textPlaceholder=_textPlaceholder;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)didCompleteWithResponse:(id)arg1;
- (id)init;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
