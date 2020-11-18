//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/SGUISuggestionConfirmationController.h>

#import <CoreSuggestionsUI/CNContactViewControllerDelegate-Protocol.h>

@class NSString, SGRealtimeContact;

@interface SGUIContactConfirmationController : SGUISuggestionConfirmationController <CNContactViewControllerDelegate>
{
    SGRealtimeContact *_realtimeContact;
    CDUnknownBlockType _finished;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_contactsSuggestionsService;
+ (void)confirmSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)rejectSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)confirmSuggestion:(id)arg1 withPresentationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;

@end
