//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSIndexPath, NSNumber, NSString, TKTonePickerController, TKTonePickerItem;

@protocol TKTonePickerControllerDelegateInternal <NSObject>

@optional
- (unsigned long long)numberOfMediaItemsInTonePickerController:(TKTonePickerController *)arg1;
- (void)tonePickerController:(TKTonePickerController *)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(BOOL)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateIgnoreMute:(BOOL)arg2 forTonePickerItem:(TKTonePickerItem *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (NSNumber *)tonePickerController:(TKTonePickerController *)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)tonePickerController:(TKTonePickerController *)arg1 indexOfMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 requestsPresentingAlertWithTitle:(NSString *)arg2 message:(NSString *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 requestsPresentingToneClassicsPickerForItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (NSString *)tonePickerController:(TKTonePickerController *)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 willBeginPlaybackOfToneWithIdentifier:(NSString *)arg2;
- (void)tonePickerControllerDidStopPlaying:(TKTonePickerController *)arg1 withFadeOutDuration:(double)arg2;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(TKTonePickerController *)arg1;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(TKTonePickerController *)arg1;
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(TKTonePickerController *)arg1;
- (BOOL)tonePickerControllerShouldShowMedia:(TKTonePickerController *)arg1;
@end

