//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _MPRemoteCommandTarget : NSObject
{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;

- (void).cxx_destruct;
- (id)initWithTargetBlock:(CDUnknownBlockType)arg1;
- (long long)invokeWithRemoteCommandEvent:(id)arg1;

@end
