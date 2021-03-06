//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <iTunesStoreUI/SUMenuViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/UIPopoverControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUSimpleMenuViewController, UIColor, UIPopoverController, UISegmentedControl;

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate>
{
    BOOL _autosizesText;
    NSString *_cancelButtonTitle;
    SUClientInterface *_clientInterface;
    BOOL _hidingPopoverForRotation;
    NSMutableArray *_items;
    long long _maximumNumberOfItems;
    double _maximumWidth;
    SUSimpleMenuViewController *_menuViewController;
    NSString *_moreListTitle;
    UIPopoverController *_popoverController;
    UISegmentedControl *_segmentedControl;
    long long _selectionIndex;
    BOOL _showsMoreListAutomatically;
    long long _tintStyle;
}

@property (copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property (strong, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property (nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property (copy, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property (readonly, nonatomic) long long numberOfVisibleSegments;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedItemIndex;
@property (readonly, nonatomic) long long selectedSegmentIndex;
@property (nonatomic) BOOL showsMoreListAutomatically; // @synthesize showsMoreListAutomatically=_showsMoreListAutomatically;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor;
@property (nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;

- (void)_applyStyling;
- (void)_destroyMenuViewController;
- (void)_destroyPopoverController;
- (void)_presentPopoverAnimated:(BOOL)arg1;
- (void)_reloadData;
- (void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_showMoreList:(BOOL)arg1;
- (id)_titlesForMoreList;
- (void)_valueChangedEvent:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)dealloc;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)showMoreList:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showPopover:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(BOOL)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFitUserInterfaceIdiom;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;
- (id)titleTextAttributesForState:(unsigned long long)arg1;

@end

