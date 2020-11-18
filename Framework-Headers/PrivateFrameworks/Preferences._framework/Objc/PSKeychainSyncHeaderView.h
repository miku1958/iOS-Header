//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView>
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    BOOL _usesCompactLayout;
}

@property (nonatomic) BOOL usesCompactLayout; // @synthesize usesCompactLayout=_usesCompactLayout;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setDetailText:(id)arg1;
- (void)setTitleText:(id)arg1;

@end
