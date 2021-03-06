//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface TVPChapterCollection : NSObject
{
    BOOL _shouldStartPlaybackFromStartDate;
    BOOL _shouldDisplayChapterMarkers;
    BOOL _shouldShowDescriptionOnChapterSkip;
    NSString *_name;
    NSArray *_chapters;
    long long _type;
    id _backingData;
    NSDate *_startDate;
    double _refreshInterval;
    NSURL *_refreshURL;
}

@property (strong, nonatomic) id backingData; // @synthesize backingData=_backingData;
@property (strong, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property (copy, nonatomic) NSURL *refreshURL; // @synthesize refreshURL=_refreshURL;
@property (nonatomic) BOOL shouldDisplayChapterMarkers; // @synthesize shouldDisplayChapterMarkers=_shouldDisplayChapterMarkers;
@property (nonatomic) BOOL shouldShowDescriptionOnChapterSkip; // @synthesize shouldShowDescriptionOnChapterSkip=_shouldShowDescriptionOnChapterSkip;
@property (nonatomic) BOOL shouldStartPlaybackFromStartDate; // @synthesize shouldStartPlaybackFromStartDate=_shouldStartPlaybackFromStartDate;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)chapterForDate:(id)arg1;
- (id)chapterForTime:(double)arg1;
- (id)init;
- (id)nearestChapterForDate:(id)arg1;
- (id)nearestChapterForTime:(double)arg1;

@end

