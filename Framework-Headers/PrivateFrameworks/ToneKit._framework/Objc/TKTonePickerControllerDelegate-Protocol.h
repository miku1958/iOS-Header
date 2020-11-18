//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSString, TKTonePickerController, TKTonePickerItem;

@protocol TKTonePickerControllerDelegate <NSObject>

@optional
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDetailText:(NSString *)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
- (void)tonePickerControllerDidReloadTones:(TKTonePickerController *)arg1;
@end
