//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSString;
@protocol _SFSettingsAlertOptionsGroupItemConfiguration;

@protocol _SFSettingsAlertOptionsGroupController <NSObject>

@property (readonly, nonatomic) NSArray *values;

- (NSAttributedString *)attributedStringForValue:(id)arg1;
- (BOOL)isSelectedValue:(id)arg1;
- (void)prepareItem:(id<_SFSettingsAlertOptionsGroupItemConfiguration>)arg1 forValue:(id)arg2;
- (void)setSelectedValue:(id)arg1;
- (NSString *)textStyleForValue:(id)arg1;
@end

