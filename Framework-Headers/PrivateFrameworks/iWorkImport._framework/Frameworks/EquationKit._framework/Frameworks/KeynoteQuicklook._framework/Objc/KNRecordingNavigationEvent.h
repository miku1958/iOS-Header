//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/KNRecordingEvent.h>

@class KNSlideNode, NSUUID, TSPObjectContext;

@interface KNRecordingNavigationEvent : KNRecordingEvent
{
    TSPObjectContext *_targetSlideNodeContextReference;
    NSUUID *_targetSlideNodeUUID;
    unsigned long long _targetEventIndex;
    long long _animationPhase;
}

@property (readonly, nonatomic) long long animationPhase; // @synthesize animationPhase=_animationPhase;
@property (readonly, nonatomic) unsigned long long targetEventIndex; // @synthesize targetEventIndex=_targetEventIndex;
@property (readonly, nonatomic) KNSlideNode *targetSlideNode;

- (void).cxx_destruct;
- (BOOL)canPrecedeDiscontinuity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStartTime:(double)arg1 targetSlideNode:(id)arg2 targetEventIndex:(unsigned long long)arg3 animationPhase:(long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIgnoredWhenSeeking;
- (void)loadFromMessage:(const struct RecordingEventArchive *)arg1 unarchiver:(id)arg2 parentEventTrack:(id)arg3;
- (void)saveToMessage:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;

@end
