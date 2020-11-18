//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TIAutocorrectionList, TIKeyboardCandidate;

__attribute__((visibility("hidden")))
@interface UIKeyboardAutocorrectionController : NSObject
{
    TIAutocorrectionList *_autocorrectionList;
    TIAutocorrectionList *_textSuggestionList;
    BOOL _needsAutocorrection;
    BOOL _deferredAutocorrection;
    BOOL _requestedAutocorrection;
    BOOL _preserveTextSuggestion;
}

@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (strong, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (nonatomic) BOOL deferredAutocorrection; // @synthesize deferredAutocorrection=_deferredAutocorrection;
@property (nonatomic) BOOL needsAutocorrection; // @synthesize needsAutocorrection=_needsAutocorrection;
@property (nonatomic) BOOL preserveTextSuggestion; // @synthesize preserveTextSuggestion=_preserveTextSuggestion;
@property (nonatomic) BOOL requestedAutocorrection; // @synthesize requestedAutocorrection=_requestedAutocorrection;
@property (strong, nonatomic) TIAutocorrectionList *textSuggestionList;

+ (BOOL)isPersistentTextSuggestionFromApp:(id)arg1;
+ (BOOL)isTextSuggestionFromApp:(id)arg1;
- (void)clearAutocorrection;
- (void)clearAutocorrectionButPreserveTextSuggestion:(BOOL)arg1;
- (void)dealloc;
- (BOOL)hasAutocorrection;
- (BOOL)hasCaseableAutocorrection;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (void)setNeedsAutocorrection;
- (void)updateSuggestionViews;

@end
