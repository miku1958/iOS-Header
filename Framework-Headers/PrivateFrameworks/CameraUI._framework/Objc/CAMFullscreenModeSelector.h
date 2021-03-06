//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate;

@interface CAMFullscreenModeSelector : UIView <UIGestureRecognizerDelegate>
{
    id<CAMFullscreenModeSelectorDataSource> _dataSource;
    id<CAMFullscreenModeSelectorDelegate> _delegate;
    long long _selectedMode;
    NSArray *__modes;
    NSDictionary *__titleViewsByMode;
    UIView *__titleContainer;
    long long __state;
    double __touchBeganTime;
    long long __highlightedIndex;
    struct CGPoint __touchBeganPosition;
}

@property (nonatomic, setter=_setHighlightedIndex:) long long _highlightedIndex; // @synthesize _highlightedIndex=__highlightedIndex;
@property (strong, nonatomic, setter=_setModes:) NSArray *_modes; // @synthesize _modes=__modes;
@property (nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property (readonly, nonatomic) UIView *_titleContainer; // @synthesize _titleContainer=__titleContainer;
@property (readonly, nonatomic) double _titleIndexOffset;
@property (strong, nonatomic, setter=_setItems:) NSDictionary *_titleViewsByMode; // @synthesize _titleViewsByMode=__titleViewsByMode;
@property (nonatomic, setter=_setTouchBeganPosition:) struct CGPoint _touchBeganPosition; // @synthesize _touchBeganPosition=__touchBeganPosition;
@property (nonatomic, setter=_setTouchBeganTime:) double _touchBeganTime; // @synthesize _touchBeganTime=__touchBeganTime;
@property (nonatomic) id<CAMFullscreenModeSelectorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CAMFullscreenModeSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_modeTitleForLegacyTitle:(id)arg1;
- (void)_selectModeAtIndex:(long long)arg1;
- (void)_setSelectedMode:(long long)arg1 shouldNotify:(BOOL)arg2;
- (long long)_titleIndexForY:(double)arg1;
- (double)_titleYForIndex:(long long)arg1;
- (void)_touchSequenceBeganAtPoint:(struct CGPoint)arg1;
- (void)_touchSequenceChangedToPoint:(struct CGPoint)arg1;
- (void)_touchSequenceEndedAtPoint:(struct CGPoint)arg1;
- (void)_updateAlpha;
- (void)_updateTitles;
- (void)enterTappableState;
- (void)handlePress:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)reloadData;

@end

