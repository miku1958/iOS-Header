//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSFileCoordinatorAccessorBlockCompletion : NSObject
{
    CDUnknownBlockType block;
    _Atomic int count;
}

+ (id)completionWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)decrement;
- (void)increment;

@end
