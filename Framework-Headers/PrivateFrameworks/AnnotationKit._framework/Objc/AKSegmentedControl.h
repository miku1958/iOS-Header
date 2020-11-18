//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedControl : UIControl
{
    unsigned long long _selectionType;
    unsigned long long _selectedSegment;
    NSArray *_images;
    NSArray *_buttons;
    NSMutableOrderedSet *_selectionStack;
}

@property (strong, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property (strong, nonatomic) NSArray *images; // @synthesize images=_images;
@property (nonatomic) unsigned long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property (strong, nonatomic) NSMutableOrderedSet *selectionStack; // @synthesize selectionStack=_selectionStack;
@property (nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_commonInit;
- (void)_configureForNewImages;
- (void)_setSelected:(BOOL)arg1 forSegment:(unsigned long long)arg2;
- (void)deselectAllSegments;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImages:(id)arg1;
- (BOOL)isEnabledForSegment:(unsigned long long)arg1;
- (BOOL)isSelectedForSegment:(unsigned long long)arg1;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (id)segmentForTag:(long long)arg1;
- (void)selectSegmentWithTag:(long long)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2;
- (void)setSelected:(BOOL)arg1 forSegment:(unsigned long long)arg2;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;
- (long long)tagForSegment:(unsigned long long)arg1;

@end

