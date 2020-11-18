//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/SGContactSuggestionBase.h>

#import <CoreSuggestionsUI/CNContactViewControllerDelegate-Protocol.h>

@class NSString;
@protocol SGContactSuggestionDelegate;

@interface SGContactSuggestion : SGContactSuggestionBase <CNContactViewControllerDelegate>
{
    id<SGContactSuggestionDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SGContactSuggestionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contactImage;
- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)suggestionImage;
- (id)suggestionPrimaryAction;

@end
