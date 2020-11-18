//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, UIStackView;

@interface SBHWidgetFamilySegmentedControl : UIControl
{
    NSArray *_items;
    long long _selectedSegmentIndex;
    UIStackView *_stackView;
    NSMutableArray *_buttons;
}

@property (strong, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;

- (void).cxx_destruct;
- (id)_buttonForItem:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_updateContent;
- (void)_updateSelectedStates;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)layoutSubviews;

@end
