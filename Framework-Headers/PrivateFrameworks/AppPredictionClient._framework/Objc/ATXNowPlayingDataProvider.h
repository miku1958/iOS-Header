//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ATXCoreDuetContextHelper, ATXNowPlayingEvent;

@interface ATXNowPlayingDataProvider : NSObject
{
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
    ATXNowPlayingEvent *_lastNowPlayingEvent;
}

- (void).cxx_destruct;
- (id)currentNowPlayingEvent;
- (id)init;
- (BOOL)isTVExperienceAppNowPlaying;

@end
