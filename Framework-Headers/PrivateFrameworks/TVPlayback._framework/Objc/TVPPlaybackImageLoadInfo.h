//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TVPPlaybackImageLoadInfo : NSObject
{
    id _identifier;
    double _requestedTime;
    NSDate *_requestedDate;
    CDUnknownBlockType _timeBasedHandler;
    CDUnknownBlockType _dateBasedHandler;
    struct CGSize _maxSize;
    CDStruct_1b6d18a9 _requestedCMTime;
}

@property (copy, nonatomic) CDUnknownBlockType dateBasedHandler; // @synthesize dateBasedHandler=_dateBasedHandler;
@property (strong, nonatomic) id identifier; // @synthesize identifier=_identifier;
@property (nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property (nonatomic) CDStruct_1b6d18a9 requestedCMTime; // @synthesize requestedCMTime=_requestedCMTime;
@property (strong, nonatomic) NSDate *requestedDate; // @synthesize requestedDate=_requestedDate;
@property (nonatomic) double requestedTime; // @synthesize requestedTime=_requestedTime;
@property (copy, nonatomic) CDUnknownBlockType timeBasedHandler; // @synthesize timeBasedHandler=_timeBasedHandler;

- (void).cxx_destruct;
- (void)callCompletionHandlerWithImage:(id)arg1 actualCMTime:(CDStruct_1b6d18a9)arg2 actualDate:(id)arg3;
- (id)description;

@end
