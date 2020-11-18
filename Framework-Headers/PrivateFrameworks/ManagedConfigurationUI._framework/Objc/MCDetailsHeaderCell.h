//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MCDetailsHeaderContentView;

__attribute__((visibility("hidden")))
@interface MCDetailsHeaderCell : UITableViewCell
{
    MCDetailsHeaderContentView *_headerView;
}

- (void).cxx_destruct;
- (double)heightForTableView;
- (void)hideActionButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mode:(int)arg3;
- (void)layoutSubviews;
- (void)setActionToInstall;
- (void)setActionToRemove;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGradientColor:(int)arg1;
- (void)setHidesUntrustedLabel:(BOOL)arg1;
- (void)setIsExpired:(BOOL)arg1;
- (void)setIsSigned:(BOOL)arg1;
- (void)setIsTrusted:(BOOL)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setUseTrustedNomenclature:(BOOL)arg1;
- (void)showActionButton;

@end
