//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScrollView;

__attribute__((visibility("hidden")))
@interface _PUScrollViewPPTScrollHelper : NSObject
{
    UIScrollView *_scrollView;
    CADisplayLink *__displayLink;
    double __lastIncrementTime;
    CDUnknownBlockType __incrementHandler;
    CDUnknownBlockType __completionHandler;
    struct CGPoint _originContentOffset;
}

@property (copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property (weak, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property (copy, nonatomic, setter=_setIncrementHandler:) CDUnknownBlockType _incrementHandler; // @synthesize _incrementHandler=__incrementHandler;
@property (nonatomic, setter=_setLastIncrementTime:) double _lastIncrementTime; // @synthesize _lastIncrementTime=__lastIncrementTime;
@property (nonatomic, setter=_setOriginContentOffset:) struct CGPoint originContentOffset; // @synthesize originContentOffset=_originContentOffset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;

- (void).cxx_destruct;
- (void)_endScroll;
- (void)_incrementScroll;
- (id)init;
- (id)initWithScrollView:(id)arg1;
- (void)scrollWithStartHandler:(CDUnknownBlockType)arg1 incrementHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

