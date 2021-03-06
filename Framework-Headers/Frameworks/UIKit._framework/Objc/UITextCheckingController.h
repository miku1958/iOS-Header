//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextChecker;
@protocol UITextCheckingClient;

__attribute__((visibility("hidden")))
@interface UITextCheckingController : NSObject
{
    id<UITextCheckingClient> _client;
    UITextChecker *_textChecker;
    struct _NSRange _selectedRangeFromPreviousUnchecked;
    struct __tccClientFlags {
        unsigned int respondsToAutocorrectionType:1;
        unsigned int respondsToSpellCheckingType:1;
        unsigned int respondsToSmartQuotesType:1;
        unsigned int respondsToSmartDashesType:1;
        unsigned int respondsToSmartInsertDeleteType:1;
        unsigned int respondsToContinuousSpellCheckingEnabled:1;
    } _tccClientFlags;
}

@property (readonly) id<UITextCheckingClient> client;

- (void)checkSpellingForSelectionChangeFromRange:(struct _NSRange)arg1;
- (void)checkSpellingForWordInRange:(id)arg1;
- (void)considerTextCheckingForRange:(id)arg1;
- (BOOL)continuousSpellCheckingEnabled;
- (void)dealloc;
- (void)didChangeSelectionFromRange:(id)arg1;
- (void)didChangeTextInRange:(id)arg1;
- (BOOL)foundApostropheAfterRange:(struct _NSRange)arg1;
- (id)initWithClient:(id)arg1;
- (void)insertedTextInRange:(id)arg1;
- (void)invalidate;
- (id)keyboardLanguages;
- (struct _NSRange)nsRangeForTextRange:(id)arg1;
- (void)preheatTextChecker;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (struct _NSRange)selectedRange;
- (id)textChecker;
- (id)validAnnotations;

@end

