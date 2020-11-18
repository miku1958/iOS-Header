//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol NTKEditOptionContainerView;

@interface NTKEditOptionPickerView : UIView
{
    NSArray *_options;
    unsigned long long _visibleOptionBufferSize;
    CDUnknownBlockType _optionToViewMapper;
    BOOL _active;
    unsigned long long _numberOfOptions;
    unsigned long long _selectedOptionIndex;
    UIView<NTKEditOptionContainerView> *_containerView;
    struct UIEdgeInsets _padding;
    struct CGAffineTransform _contentTransform;
}

@property (nonatomic) BOOL active; // @synthesize active=_active;
@property (strong, nonatomic) UIView<NTKEditOptionContainerView> *containerView; // @synthesize containerView=_containerView;
@property (nonatomic) struct CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property (readonly, nonatomic) unsigned long long numberOfOptions; // @synthesize numberOfOptions=_numberOfOptions;
@property (nonatomic) unsigned long long numberOfSides;
@property (copy, nonatomic) CDUnknownBlockType optionToViewMapper; // @synthesize optionToViewMapper=_optionToViewMapper;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (readonly, nonatomic) id selectedOption;
@property (nonatomic) unsigned long long selectedOptionIndex; // @synthesize selectedOptionIndex=_selectedOptionIndex;

- (void).cxx_destruct;
- (void)_configureSideView:(id)arg1 forOption:(id)arg2;
- (void)_enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)_frameForContainerView;
- (id)_newContainerView;
- (id)_selectedSideView;
- (id)_sideViewAtIndex:(unsigned long long)arg1;
- (Class)_sideViewClass;
- (void)_tileContainerForTransitionDirection:(long long)arg1;
- (void)_transitionAnimatedToSelectedOptionFromIndex:(unsigned long long)arg1;
- (void)_transitionToSelectedOption;
- (void)_updateContainer;
- (void)_willDisplaySideView:(id)arg1;
- (void)applyBreathingScale:(double)arg1;
- (void)applyRubberBandingFraction:(double)arg1;
- (void)decrementSelection;
- (id)description;
- (void)incrementSelection;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;
- (void)layoutSubviews;
- (id)optionAtIndex:(unsigned long long)arg1;
- (void)setSelectedOptionIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

@end
