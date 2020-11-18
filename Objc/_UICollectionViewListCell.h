//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewListCell.h>

@class NSArray, UILayoutGuide;

@interface _UICollectionViewListCell : UICollectionViewListCell
{
    long long __backgroundViewConfigurationGrouping;
}

@property (nonatomic, setter=_setBackgroundViewConfigurationGrouping:) long long _backgroundViewConfigurationGrouping; // @synthesize _backgroundViewConfigurationGrouping=__backgroundViewConfigurationGrouping;
@property (readonly, nonatomic) UILayoutGuide *_separatorLayoutGuide;
@property (nonatomic) BOOL expanded; // @dynamic expanded;
@property (nonatomic) BOOL indentsLeadingAccessories;
@property (copy, nonatomic) NSArray *leadingAccessoryConfigurations; // @dynamic leadingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *leadingEditingAccessoryConfigurations; // @dynamic leadingEditingAccessoryConfigurations;
@property (nonatomic) long long selectionStyle; // @dynamic selectionStyle;
@property (copy, nonatomic) NSArray *trailingAccessoryConfigurations; // @dynamic trailingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *trailingEditingAccessoryConfigurations; // @dynamic trailingEditingAccessoryConfigurations;

- (id)_configurationForListAccessoryType:(long long)arg1;
- (id)_customViewForAccessoryConfiguration:(id)arg1;
- (unsigned long long)_maskedCornersForSystemBackgroundView;
- (void)_setAccessoryConfigurations:(id)arg1 forAxis:(long long)arg2;
- (long long)accessoryTypeForAxis:(long long)arg1;
- (id)accessoryViewForAxis:(long long)arg1;
- (void)setAccessoryType:(long long)arg1 forAxis:(long long)arg2;
- (void)setAccessoryView:(id)arg1 forAxis:(long long)arg2;

@end

