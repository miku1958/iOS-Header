//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, _SearchBarContent;
@protocol HKIncrementalSearchBarDelegate;

@interface HKIncrementalSearchBar : UIView
{
    NSString *_matchDisplayText;
    _SearchBarContent *_searchBarContent;
}

@property (strong, nonatomic) NSString *matchDisplayText; // @synthesize matchDisplayText=_matchDisplayText;
@property (readonly, nonatomic) _SearchBarContent *searchBarContent; // @synthesize searchBarContent=_searchBarContent;
@property (strong, nonatomic) id<HKIncrementalSearchBarDelegate> searchBarDelegate;
@property (strong, nonatomic) NSString *searchText;

+ (BOOL)_hasUppercaseCharacters:(id)arg1;
+ (id)_patternFromSearchString:(id)arg1 quoteForJavascript:(BOOL)arg2;
+ (id)regularExpressionFromString:(id)arg1 quoteForJavascript:(BOOL)arg2 caseless:(BOOL *)arg3;
- (void).cxx_destruct;
- (void)_lowerKeyboard;
- (void)activateSearch:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)doneAction:(id)arg1;
- (id)init;
- (id)inputAccessoryView;
- (struct CGSize)intrinsicContentSize;
- (BOOL)keyboardIsDown;
- (BOOL)keyboardIsUp;
- (BOOL)searchIsActive;
- (void)searchKeyboardDidHide:(id)arg1;
- (void)setDownEnabled:(BOOL)arg1;
- (void)setMatchDisplayVisible:(BOOL)arg1;
- (void)setUpEnabled:(BOOL)arg1;

@end

