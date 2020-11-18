//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NSArray, NSString;

@interface NCToggleControlPair : UIView <PLContentSizeCategoryAdjusting>
{
    NSArray *_toggleControls;
    NSString *_backgroundGroupName;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *backgroundGroupName; // @synthesize backgroundGroupName=_backgroundGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *toggleControls; // @synthesize toggleControls=_toggleControls;

- (void).cxx_destruct;
- (double)_effectiveInterControlPadding;
- (double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2;
- (void)_handleTouchUpInside:(id)arg1 withEvent:(id)arg2;
- (id)_leadingToggleControl;
- (id)_trailingToggleControl;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithLeadingToggleControl:(id)arg1 trailingToggleControl:(id)arg2;
- (void)layoutSubviews;
- (void)setLeadingControlExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

