//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject
{
    NSDate *_lastBannerTime;
}

@property (strong, nonatomic) NSDate *lastBannerTime; // @synthesize lastBannerTime=_lastBannerTime;

+ (id)shared;
- (void).cxx_destruct;
- (void)showBannerWithTitle:(id)arg1 message:(id)arg2;
- (void)showPrivacyModalViewWithInfo:(id)arg1;

@end

