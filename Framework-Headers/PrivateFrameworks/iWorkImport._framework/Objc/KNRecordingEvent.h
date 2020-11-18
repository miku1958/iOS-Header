//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface KNRecordingEvent : NSObject <NSCopying>
{
    double mStartTime;
}

@property (readonly, nonatomic) BOOL canPrecedeDiscontinuity;
@property (readonly, nonatomic, getter=isIgnoredWhenSeeking) BOOL ignoredWhenSeeking;
@property (readonly, nonatomic) double startTime; // @synthesize startTime=mStartTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive *)arg2 unarchiver:(id)arg3;
- (id)initWithStartTime:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)recordingEventByAddingTimeOffset:(double)arg1;
- (void)saveToArchive:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;

@end

