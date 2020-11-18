//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreLinkRecommendationInfo : NSObject
{
    BOOL _btPreference;
    BOOL _wifiPreference;
    double _timeTaken;
}

- (BOOL)btPreference;
- (void)fetchLinkMetrics:(CDUnknownBlockType)arg1;
- (id)initWithPreferences:(BOOL)arg1 wifiPreference:(BOOL)arg2 timeTaken:(double)arg3 metrics:(id)arg4;
- (id)initWithQueue:(id)arg1;
- (id)linkMetrics;
- (void)resetLinkMetrics;
- (void)setBTPreference:(BOOL)arg1;
- (void)setLinkMetrics:(id)arg1;
- (void)setTimeTaken:(double)arg1;
- (void)setWiFiPreference:(BOOL)arg1;
- (double)timeTaken;
- (BOOL)wifiPreference;

@end
