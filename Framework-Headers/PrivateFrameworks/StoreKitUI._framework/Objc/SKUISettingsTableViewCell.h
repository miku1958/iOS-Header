//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SKUISettingDescriptionView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISettingsTableViewCell : UITableViewCell
{
    struct UIEdgeInsets _contentInset;
    UIImageView *_disclosureChevron;
    BOOL _hasDisclosureChevron;
    SKUISettingDescriptionView *_settingDescriptionView;
}

@property (readonly, nonatomic) SKUISettingDescriptionView *settingDescriptionView;

- (void).cxx_destruct;
- (void)displaySettingDescriptionView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;

@end
