//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewConfiguration : NSObject
{
    BOOL _darkKeyboard;
    BOOL _shouldAlwaysShowSortControl;
    BOOL _shouldUsePredictionViewSecureRenderTraits;
}

@property (readonly, nonatomic) BOOL allowsPullDownGesture;
@property (nonatomic) BOOL darkKeyboard; // @synthesize darkKeyboard=_darkKeyboard;
@property (readonly, nonatomic) UIColor *highlightedBackgroundColor;
@property (readonly, nonatomic) unsigned long long maxNumberOfProactiveCandidates;
@property (readonly, nonatomic) struct CGSize preferredInlineFloatingViewSize;
@property (readonly, nonatomic) unsigned long long rowsToExtend;
@property (readonly, nonatomic) BOOL shouldAlwaysShowSortControl; // @synthesize shouldAlwaysShowSortControl=_shouldAlwaysShowSortControl;
@property (readonly, nonatomic) BOOL shouldResizeKeyboardBackdrop;
@property (readonly, nonatomic) BOOL shouldUsePredictionViewSecureRenderTraits; // @synthesize shouldUsePredictionViewSecureRenderTraits=_shouldUsePredictionViewSecureRenderTraits;
@property (readonly, nonatomic) BOOL willCoverKeyboardLayout;

+ (id)configuration;
- (double)candidateDefaultFontSize;
- (id)candidateFontWithSize:(double)arg1;
- (id)extendedScrolledState;
- (id)extendedState;
- (id)initialState;
- (BOOL)usesReducedFontSize;

@end
