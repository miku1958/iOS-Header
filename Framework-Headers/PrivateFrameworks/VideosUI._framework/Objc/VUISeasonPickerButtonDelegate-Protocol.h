//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSString, VUISeasonPickerButton;

@protocol VUISeasonPickerButtonDelegate <NSObject>

@optional
- (void)seasonPickerButtonMenuSelected:(VUISeasonPickerButton *)arg1 selectedTitle:(NSString *)arg2 selectedIndex:(unsigned long long)arg3;
- (void)seasonPickerButtonTapped:(VUISeasonPickerButton *)arg1;
@end

