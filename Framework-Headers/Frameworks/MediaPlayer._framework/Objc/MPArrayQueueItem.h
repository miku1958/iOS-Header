//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject
{
    MPAVItem *_item;
    NSString *_path;
    double _startTime;
    double _stopTime;
}

@property (readonly, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property (copy, nonatomic) NSString *path; // @synthesize path=_path;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (nonatomic) double stopTime; // @synthesize stopTime=_stopTime;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMPAVItem:(id)arg1;

@end

