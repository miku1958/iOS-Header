//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataThermalEntry : _UIStatusBarDataEntry
{
    BOOL _sunlightMode;
    long long _color;
}

@property (nonatomic) long long color; // @synthesize color=_color;
@property (nonatomic) BOOL sunlightMode; // @synthesize sunlightMode=_sunlightMode;

+ (BOOL)supportsSecureCoding;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

