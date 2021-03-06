//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMStreamDatastore, BMStreamsAccessClient;

@interface BMStreamDatastorePruner : NSObject
{
    BMStreamDatastore *_inner;
    BMStreamsAccessClient *_accessClient;
}

- (void)dealloc;
- (Class)eventClass;
- (void)eventsFrom:(double)arg1 to:(double)arg2 shouldDeleteUsingBlock:(CDUnknownBlockType)arg3;
- (id)fetchEventsFrom:(double)arg1 to:(double)arg2;
- (id)initWithStream:(id)arg1 config:(id)arg2;
- (id)newEnumeratorFromBookmark:(id)arg1;
- (id)newEnumeratorFromStartTime:(double)arg1;
- (void)removeEventsFrom:(double)arg1 to:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (void)removeEventsFrom:(double)arg1 to:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)streamIdentifier;
- (void)syncMappedFiles;

@end

