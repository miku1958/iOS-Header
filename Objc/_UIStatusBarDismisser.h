//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarDismisser : NSObject
{
    BOOL _enabled;
    CDUnknownBlockType _dismissBlock;
}

@property (copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;

- (void).cxx_destruct;
- (id)initWithStatusBar:(id)arg1;
- (void)invalidate;

@end
