//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVOperation.h>

__attribute__((visibility("hidden")))
@interface AVBlockOperation : AVOperation
{
    CDUnknownBlockType _block;
}

- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)start;

@end

