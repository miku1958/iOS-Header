//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem
{
    NSString *_bodyText;
    NSString *_title;
    long long _slot;
}

@property (readonly, nonatomic) long long slot; // @synthesize slot=_slot;

- (void).cxx_destruct;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithTitle:(id)arg1 bodyText:(id)arg2 slot:(long long)arg3;

@end

