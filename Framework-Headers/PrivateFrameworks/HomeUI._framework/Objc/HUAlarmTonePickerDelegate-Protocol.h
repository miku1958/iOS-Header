//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUAlarmTonePickerViewController, NSNumber, NSString;

@protocol HUAlarmTonePickerDelegate <NSObject>
- (void)tonePickerViewController:(HUAlarmTonePickerViewController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerViewController:(HUAlarmTonePickerViewController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
@end

