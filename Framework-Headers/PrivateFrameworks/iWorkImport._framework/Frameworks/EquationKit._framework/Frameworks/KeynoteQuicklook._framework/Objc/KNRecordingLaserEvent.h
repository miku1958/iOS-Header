//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/KNRecordingEvent.h>

@interface KNRecordingLaserEvent : KNRecordingEvent
{
    struct CGPoint _unitLocation;
}

@property (readonly, nonatomic) struct CGPoint unitLocation; // @synthesize unitLocation=_unitLocation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStartTime:(double)arg1 unitLocation:(struct CGPoint)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)loadFromMessage:(const struct RecordingEventArchive *)arg1 unarchiver:(id)arg2 parentEventTrack:(id)arg3;
- (void)saveToMessage:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;

@end
