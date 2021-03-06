//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>

@class HFItem, HUGridActionSetTitleAndDescriptionView, HUGridSceneCellLayoutOptions, HUIconView, HUPieProgressView, NAFuture, NSArray, NSString, UIView;

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol>
{
    HFItem *_item;
    NAFuture *_executeActionSetFuture;
    UIView *_accessoryView;
    HUGridActionSetTitleAndDescriptionView *_titleAndDescriptionView;
    HUGridSceneCellLayoutOptions *_sceneCellLayoutOptions;
    HUIconView *_iconView;
    HUPieProgressView *_progressView;
    NSArray *_actionSetCellConstraints;
    NAFuture *_internalExecuteActionSetFuture;
}

@property (strong, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (strong, nonatomic) NSArray *actionSetCellConstraints; // @synthesize actionSetCellConstraints=_actionSetCellConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NAFuture *executeActionSetFuture; // @synthesize executeActionSetFuture=_executeActionSetFuture;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) NAFuture *internalExecuteActionSetFuture; // @synthesize internalExecuteActionSetFuture=_internalExecuteActionSetFuture;
@property (strong, nonatomic) HUPieProgressView *progressView; // @synthesize progressView=_progressView;
@property (weak, nonatomic) HUGridSceneCellLayoutOptions *sceneCellLayoutOptions; // @synthesize sceneCellLayoutOptions=_sceneCellLayoutOptions;
@property (readonly) Class superclass;
@property (strong, nonatomic) HUGridActionSetTitleAndDescriptionView *titleAndDescriptionView; // @synthesize titleAndDescriptionView=_titleAndDescriptionView;

+ (Class)layoutOptionsClass;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (void)_setupActionSetCell;
- (void)_updateLabels;
- (void)_updateLabelsWithTitle:(id)arg1 description:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (void)setItem:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

