//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate;

__attribute__((visibility("hidden")))
@interface _GEOMapItemHandleCacheData : NSObject
{
    NSDate *_timestamp;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned long long cost;
@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

- (void)dealloc;
- (id)initWithTimestamp:(id)arg1 data:(id)arg2;

@end

