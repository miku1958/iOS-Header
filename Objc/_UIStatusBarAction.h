//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _UIStatusBarAction : NSObject
{
    BOOL _enabled;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
