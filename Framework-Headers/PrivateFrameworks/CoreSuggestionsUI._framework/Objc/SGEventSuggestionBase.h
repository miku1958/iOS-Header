//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsUI/SGSuggestion-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionCategory-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionExtensions-Protocol.h>

@class EKEvent, NSString, SGRealtimeEvent;
@protocol SGSuggestionDelegate;

@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>
{
    SGRealtimeEvent *_realtimeEvent;
    EKEvent *_eventKitEvent;
    id<SGSuggestionDelegate> _suggestionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
@property (readonly) Class superclass;

+ (id)_eventStore;
+ (id)calendarImage;
+ (void)confirm:(BOOL)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)eventKitEvent;
- (void)eventKitStoreChangedNotification:(id)arg1;
- (id)initWithRealtimeEvent:(id)arg1;
- (id)primaryActionTitle;
- (id)realtimeSuggestion;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (CDUnknownBlockType)suggestionCategoryItemComparator;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionDismissAction;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)suggestionsEvent;

@end
