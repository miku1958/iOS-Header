//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer, UIImageView;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell
{
    UIImageView *_view;
    CTCellularPlanPendingTransfer *_planPendingTransfer;
}

@property (strong, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
@property (strong, nonatomic) UIImageView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_setView;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
