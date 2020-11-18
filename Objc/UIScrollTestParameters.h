//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class CADisplayLink, NSString;

@interface UIScrollTestParameters : NSObject <NSCopying>
{
    NSString *_testName;
    long long _iterations;
    double _delta;
    double _length;
    unsigned long long _axis;
    CDUnknownBlockType _extraResultsBlock;
    double _startOffset;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (nonatomic) double delta; // @synthesize delta=_delta;
@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (readonly, nonatomic) double endOffset;
@property (copy, nonatomic) CDUnknownBlockType extraResultsBlock; // @synthesize extraResultsBlock=_extraResultsBlock;
@property (nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property (nonatomic) double length; // @synthesize length=_length;
@property (nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property (copy, nonatomic) NSString *testName; // @synthesize testName=_testName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

