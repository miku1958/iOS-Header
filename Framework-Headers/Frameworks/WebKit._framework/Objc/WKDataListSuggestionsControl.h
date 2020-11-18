//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsControl : NSObject
{
    struct WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter> _dropdown;
    struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _suggestions;
    WKContentView *_view;
}

@property (weak, nonatomic) WKContentView *view; // @synthesize view=_view;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didSelectOptionAtIndex:(long long)arg1;
- (id)initWithInformation:(struct DataListSuggestionInformation *)arg1 inView:(id)arg2;
- (void)invalidate;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS *)arg1 activationType:(unsigned char)arg2;
- (struct String)suggestionAtIndex:(long long)arg1;
- (long long)suggestionsCount;
- (long long)textAlignment;
- (id)textSuggestions;
- (void)updateWithInformation:(struct DataListSuggestionInformation *)arg1;

@end
