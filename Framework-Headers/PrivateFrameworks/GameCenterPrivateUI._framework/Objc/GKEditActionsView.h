//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, GKCollectionViewCell, NSArray;

@interface GKEditActionsView : UIView
{
    double _visibleWidth;
    CALayer *_maskLayer;
    GKCollectionViewCell *_cell;
    NSArray *_editActionConstraints;
    NSArray *_actionButtons;
}

@property (strong, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property (nonatomic) GKCollectionViewCell *cell; // @synthesize cell=_cell;
@property (strong, nonatomic) NSArray *editActionConstraints; // @synthesize editActionConstraints=_editActionConstraints;
@property (strong, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property (nonatomic) double visibleWidth; // @synthesize visibleWidth=_visibleWidth;

- (void)dealloc;
- (void)didTouchEditAction:(id)arg1;
- (void)didTouchMoreEditAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cell:(id)arg2;
- (void)prepareActionButtons;

@end
