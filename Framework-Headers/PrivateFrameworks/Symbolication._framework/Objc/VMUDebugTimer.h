//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface VMUDebugTimer : NSObject
{
    NSDate *_programStartTime;
    NSDate *_eventStartTime;
    NSString *_eventMessage;
}

- (void).cxx_destruct;
- (id)init;
- (void)startWithMessage:(id)arg1;
- (void)stop;

@end

