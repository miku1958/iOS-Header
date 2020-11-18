//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray;

@interface OBBulletedList : UIView
{
    NSMutableArray *_items;
    NSMutableArray *_verticalConstraints;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property (strong, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property (strong, nonatomic) NSMutableArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;

- (void).cxx_destruct;
- (BOOL)_shouldHandleLandscapeiPhoneLayout;
- (void)_updateConstraints;
- (void)_updatePaddingForOrientation;
- (void)addBulletedListItem:(id)arg1;
- (void)addItemWithDescription:(id)arg1 image:(id)arg2;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (double)bulletedListItemSpacing;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
