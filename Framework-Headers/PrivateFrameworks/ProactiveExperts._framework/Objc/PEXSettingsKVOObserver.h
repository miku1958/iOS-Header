//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PEXSettingsKVOObserver : NSObject
{
    NSString *_key;
    CDUnknownBlockType _handler;
}

+ (id)observeObject:(id)arg1 key:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
