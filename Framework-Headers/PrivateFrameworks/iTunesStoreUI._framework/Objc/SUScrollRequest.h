//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;

@interface SUScrollRequest : NSObject
{
    BOOL _animated;
    CDUnknownBlockType _completionHandler;
    NSValue *_contentOffsetValue;
    NSValue *_frameValue;
}

@property (nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong) NSValue *contentOffsetValue; // @synthesize contentOffsetValue=_contentOffsetValue;
@property (strong) NSValue *frameValue; // @synthesize frameValue=_frameValue;

- (void)dealloc;

@end

