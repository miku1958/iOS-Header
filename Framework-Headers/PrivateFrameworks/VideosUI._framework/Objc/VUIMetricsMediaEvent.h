//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIMetricsMediaEvent : NSObject
{
}

+ (id)_metricsDataFromTVPMediaItem:(id)arg1 isBackground:(BOOL)arg2 isAmbient:(BOOL)arg3;
+ (id)clickMetricsDataFromTVPMediaItem:(id)arg1;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)arg1 isAmbient:(BOOL)arg2;
+ (void)recordPlay:(id)arg1 isLaunchingExtras:(BOOL)arg2;
+ (void)recordPlayOfTVPMediaItem:(id)arg1;
+ (void)recordPunchout:(id)arg1 isUrlForPlay:(BOOL)arg2;

@end
