//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject
{
    NSTimer *_timer;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithTimeInterval:(double)arg1;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

