//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry
{
    BOOL _saverModeActive;
    long long _capacity;
    long long _state;
    NSString *_detailString;
}

@property (nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property (copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property (nonatomic) BOOL saverModeActive; // @synthesize saverModeActive=_saverModeActive;
@property (nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

