//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _NSIPCallbackSerialization : NSObject
{
    CDUnknownBlockType _endBlock;
    _Atomic BOOL _hasBegun;
    _Atomic BOOL _hasEnded;
    NSUUID *_UUID;
}

@property (copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;

- (void)dealloc;
- (id)init;
- (void)sendBeginBlock:(CDUnknownBlockType)arg1;
- (void)sendEndBlock:(CDUnknownBlockType)arg1;

@end
