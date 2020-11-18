//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <AXHearingSupport/UICollectionViewDataSource-Protocol.h>
#import <AXHearingSupport/UICollectionViewDelegate-Protocol.h>
#import <AXHearingSupport/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface TTYTextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    long long _leftIndex;
    struct CGPoint _panContentOffset;
    double _currentKeyboardWidth;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_leftBackgroundColorEdge;
    UIView *_rightBackgroundColorEdge;
    UIView *_middleBackgroundColorEdge;
    UIView *_inputAccessoryPlaceholderView;
    BOOL _showTTYPredictions;
    BOOL _isHandlingKeyboardFrameChanged;
    UICollectionView *_predictionsCollectionView;
    NSArray *_ttyAbbreviations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isHandlingKeyboardFrameChanged; // @synthesize isHandlingKeyboardFrameChanged=_isHandlingKeyboardFrameChanged;
@property (strong, nonatomic) UICollectionView *predictionsCollectionView; // @synthesize predictionsCollectionView=_predictionsCollectionView;
@property (nonatomic) BOOL showTTYPredictions; // @synthesize showTTYPredictions=_showTTYPredictions;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *ttyAbbreviations; // @synthesize ttyAbbreviations=_ttyAbbreviations;

- (void).cxx_destruct;
- (BOOL)_accessibilityIsRealtimeElement;
- (void)_didPanPredictions:(id)arg1;
- (void)_didSwipeLeft:(id)arg1;
- (void)_insertWhitespaceIfNeeded;
- (BOOL)_isKeyboardPredictionsEnabled;
- (void)_kbFrameChanged:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_loadTTYAbbreviations;
- (float)_predictionsCellHeight;
- (int)_predictionsPerPage;
- (void)_resetTTYBarPosition;
- (void)_tapTTYBarCell:(id)arg1;
- (void)_updateBlackBarPositioning;
- (void)_updateTTYBarPosition;
- (id)accessibilityIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (BOOL)disableInputBars;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)inputAccessoryView;
- (id)keyCommands;
- (long long)keyboardAppearance;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)overrideTTYPredictionsHidden:(BOOL)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (double)ttyBarHeight;
- (void)updateTTYBar;

@end
