//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MRNotification : NSObject
{
    CDUnknownBlockType _callback;
    NSString *_name;
}

- (void)dealloc;
- (id)initWithName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onNotification:(id)arg1;

@end

