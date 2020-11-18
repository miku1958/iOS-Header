//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, SBIcon;

@interface SBHideFolderContentsAlertItem : SBAlertItem
{
    SBIcon *_icon;
    NSString *_iconLocation;
}

@property (readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
@property (readonly, copy, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;

- (void).cxx_destruct;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)didActivate;
- (BOOL)dismissOnLock;
- (BOOL)forcesModalAlertAppearance;
- (id)initWithIcon:(id)arg1 location:(id)arg2;
- (BOOL)shouldShowInLockScreen;

@end
