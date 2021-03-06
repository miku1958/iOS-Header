//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface VUIStreamingBookmark : NSObject
{
    NSNumber *_absoluteResumeTime;
    NSDate *_absoluteBookmarkTimestamp;
    NSNumber *_relativeResumeTime;
    NSDate *_relativeBookmarkTimestamp;
}

@property (strong, nonatomic) NSDate *absoluteBookmarkTimestamp; // @synthesize absoluteBookmarkTimestamp=_absoluteBookmarkTimestamp;
@property (strong, nonatomic) NSNumber *absoluteResumeTime; // @synthesize absoluteResumeTime=_absoluteResumeTime;
@property (strong, nonatomic) NSDate *relativeBookmarkTimestamp; // @synthesize relativeBookmarkTimestamp=_relativeBookmarkTimestamp;
@property (strong, nonatomic) NSNumber *relativeResumeTime; // @synthesize relativeResumeTime=_relativeResumeTime;

- (void).cxx_destruct;
- (id)initWithAbsoluteResumeTime:(id)arg1 absoluteTimestamp:(id)arg2 relativeResumeTime:(id)arg3 relativeBookmarkTimestamp:(id)arg4;

@end

