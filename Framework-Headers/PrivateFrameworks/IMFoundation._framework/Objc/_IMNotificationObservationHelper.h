//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _IMNotificationObservationHelper : NSObject
{
    id _observer;
    id _object;
    CDUnknownBlockType _block;
    NSString *_name;
}

- (void)_notification:(id)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 name:(id)arg2 object:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

