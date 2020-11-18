//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataEntry.h>

@class _UIStatusBarDataBatteryEntry;

@interface _UIStatusBarDataBluetoothEntry : _UIStatusBarDataEntry
{
    long long _state;
    _UIStatusBarDataBatteryEntry *_batteryEntry;
}

@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *batteryEntry; // @synthesize batteryEntry=_batteryEntry;
@property (nonatomic) long long state; // @synthesize state=_state;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
