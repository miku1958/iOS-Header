//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerFeatureInfo : NSObject
{
    NSTimer *_repeatingTimer;
    NSTimer *_oneTimeTimer;
    NSDate *_startDate;
    NSDate *_backgroundedDate;
}

@property (strong, nonatomic) NSDate *backgroundedDate; // @synthesize backgroundedDate=_backgroundedDate;
@property (weak, nonatomic) NSTimer *oneTimeTimer; // @synthesize oneTimeTimer=_oneTimeTimer;
@property (weak, nonatomic) NSTimer *repeatingTimer; // @synthesize repeatingTimer=_repeatingTimer;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;

@end

