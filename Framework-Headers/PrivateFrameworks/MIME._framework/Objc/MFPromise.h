//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFFuture;

@interface MFPromise : NSObject
{
    MFFuture *_future;
}

@property (readonly) MFFuture *future; // @synthesize future=_future;

+ (id)promise;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
