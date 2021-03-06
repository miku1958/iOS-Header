//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSIndexSet, NSMutableArray, UIColor, UIFont;

@interface TSKSegmentedControl : UIControl
{
    NSMutableArray *mItems;
    NSMutableArray *mButtonSegments;
    NSIndexSet *mSelectedSegmentIndices;
    BOOL mAllowsMultipleSelection;
    BOOL mAllowsEmptySelection;
    long long mLastPressedSegmentIndex;
    void *mUserData;
    UIFont *mFont;
    int mStyle;
    int _segmentedControlStyle;
    UIColor *mSelectedTintColor;
}

@property (nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=mAllowsEmptySelection;
@property (nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=mAllowsMultipleSelection;
@property (strong, nonatomic) UIFont *font; // @synthesize font=mFont;
@property (readonly, nonatomic) long long lastPressedSegmentIndex; // @synthesize lastPressedSegmentIndex=mLastPressedSegmentIndex;
@property (readonly, nonatomic) unsigned long long numberOfSegments;
@property (readonly, nonatomic) int segmentedControlStyle; // @synthesize segmentedControlStyle=_segmentedControlStyle;
@property (copy, nonatomic) NSIndexSet *selectedSegmentIndices; // @synthesize selectedSegmentIndices=mSelectedSegmentIndices;
@property (strong, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=mSelectedTintColor;
@property (nonatomic) void *userData; // @synthesize userData=mUserData;

- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 style:(int)arg2;
- (id)initWithItems:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)p_backgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)p_fullBleedBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)p_losengeBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (void)p_setButtonAttributedTitle:(id)arg1 color:(id)arg2 forState:(unsigned long long)arg3 button:(id)arg4;
- (void)p_setSegmentedControlStyle:(int)arg1;
- (void)p_setSelectedTintColor:(id)arg1;
- (void)p_updateSegmentProperties;
- (unsigned long long)segmentWithTag:(long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 forSegment:(unsigned long long)arg3;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)sizeToFit;
- (void)sizeToFitWidth:(float)arg1;
- (long long)tagForSegment:(unsigned long long)arg1;
- (void)tappedSegment:(id)arg1;
- (void)tintColorDidChange;

@end

