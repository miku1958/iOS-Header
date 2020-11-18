//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSArray, NSString;

@interface AXHearingLiveListenMeterCell : PSTableCell
{
    NSArray *dotImageViews;
    NSString *_liveListenUpdateUUID;
}

@property (strong, nonatomic) NSArray *dotImageViews; // @synthesize dotImageViews;
@property (strong, nonatomic) NSString *liveListenUpdateUUID; // @synthesize liveListenUpdateUUID=_liveListenUpdateUUID;

- (void)audioLevelDidChange:(float)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setMeterLevel:(int)arg1;
- (void)setSpecifier:(id)arg1;

@end

