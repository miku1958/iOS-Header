//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCTrackingDescriptor : NSObject
{
    BOOL _updateAccessTime;
    CDUnknownBlockType _handler;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly, nonatomic) BOOL updateAccessTime; // @synthesize updateAccessTime=_updateAccessTime;

- (void).cxx_destruct;
- (id)initWithHandler:(CDUnknownBlockType)arg1 updateAccessTime:(BOOL)arg2;

@end
