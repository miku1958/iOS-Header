//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface RTWiFiManagerNotificationScanResults : RTNotification
{
    NSArray *_scanResults;
}

@property (readonly, nonatomic) NSArray *scanResults; // @synthesize scanResults=_scanResults;

- (void).cxx_destruct;
- (id)initWithScanResults:(id)arg1;

@end
