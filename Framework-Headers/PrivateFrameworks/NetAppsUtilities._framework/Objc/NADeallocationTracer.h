//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NADeallocationTracerDelegate;

__attribute__((visibility("hidden")))
@interface NADeallocationTracer : NSObject
{
    id<NADeallocationTracerDelegate> _delegate;
}

@property (nonatomic) id<NADeallocationTracerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

