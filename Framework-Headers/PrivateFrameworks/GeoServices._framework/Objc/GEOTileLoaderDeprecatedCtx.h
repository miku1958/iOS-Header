//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderDeprecatedCtx : NSObject
{
    struct __CFRunLoop *_runloop;
    GEOTileKeyList *_originalList;
    GEOTileKeyList *_submittedList;
    GEOTileKeyList *_satisfiedList;
    GEOTileKeyList *_notLoaded;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _error;
    CDUnknownBlockType _finished;
}

@property (readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property (copy, nonatomic) CDUnknownBlockType error; // @synthesize error=_error;
@property (copy, nonatomic) CDUnknownBlockType finished; // @synthesize finished=_finished;
@property (copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;

- (void)breakCycle;
- (void)cancel;
- (void)dealloc;
- (void)failure:(const struct _GEOTileKey *)arg1 error:(id)arg2 info:(id)arg3;
- (id)initWithList:(id)arg1;
- (void)success:(const struct _GEOTileKey *)arg1 tile:(id)arg2 info:(id)arg3;

@end

