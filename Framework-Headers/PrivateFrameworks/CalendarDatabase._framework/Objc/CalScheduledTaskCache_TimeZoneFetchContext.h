//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimeZone;

@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject
{
    NSTimeZone *_previousTimeZone;
    NSTimeZone *_nextTimeZone;
    NSMutableDictionary *_dict;
}

@property (strong, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property (strong, nonatomic) NSTimeZone *nextTimeZone; // @synthesize nextTimeZone=_nextTimeZone;
@property (strong, nonatomic) NSTimeZone *previousTimeZone; // @synthesize previousTimeZone=_previousTimeZone;

- (void).cxx_destruct;

@end

