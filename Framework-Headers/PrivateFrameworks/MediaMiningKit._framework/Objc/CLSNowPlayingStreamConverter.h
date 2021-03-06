//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSNowPlayingStreamConverter : NSObject
{
    unsigned long long _options;
}

@property (nonatomic) unsigned long long options; // @synthesize options=_options;

+ (unsigned long long)defaultOptions;
+ (id)recognizedMusicSources;
- (BOOL)_canUseEvent:(id)arg1;
- (id)eventFromDuetKnoweledgeEvent:(id)arg1;
- (id)eventsFromDuetKnowledgeEvents:(id)arg1;
- (id)init;

@end

