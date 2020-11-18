//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFSiriWordTimingInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFSiriWordTimingPlayer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _wordIndex;
    SFSiriWordTimingInfo *_wordInfo;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _startTime;
    NSString *_text;
    CDUnknownBlockType _wordHandler;
    NSArray *_wordTimings;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) CDUnknownBlockType wordHandler; // @synthesize wordHandler=_wordHandler;
@property (copy, nonatomic) NSArray *wordTimings; // @synthesize wordTimings=_wordTimings;

- (void).cxx_destruct;
- (void)_processNextWord;
- (void)_processWord;
- (void)activate;
- (id)init;
- (void)invalidate;

@end
