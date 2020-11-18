//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface ISDisplayLink : NSObject
{
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
    CADisplayLink *_displayLink;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

- (void).cxx_destruct;
- (void)_callUpdateHandler;
- (void)_update:(id)arg1;
- (void)dealloc;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)start;
- (void)stop;

@end

