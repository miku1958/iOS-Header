//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PKDrawingViewTransform : NSObject
{
    NSDate *_startTime;
    double _duration;
    struct CGAffineTransform _from;
    struct CGAffineTransform _to;
    struct CGAffineTransform _final;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) struct CGAffineTransform final; // @synthesize final=_final;
@property (nonatomic) struct CGAffineTransform from; // @synthesize from=_from;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (nonatomic) struct CGAffineTransform to; // @synthesize to=_to;

- (void).cxx_destruct;

@end

