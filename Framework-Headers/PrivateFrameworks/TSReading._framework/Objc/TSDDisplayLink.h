//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink;

@interface TSDDisplayLink : NSObject
{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _tickBlock;
    CDUnknownBlockType _completionBlock;
    double _startTime;
    double _lastTime;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (copy, nonatomic) CDUnknownBlockType tickBlock; // @synthesize tickBlock=_tickBlock;

- (void)dealloc;
- (void)p_handleDisplayLink:(id)arg1;
- (void)start;
- (void)teardown;

@end
