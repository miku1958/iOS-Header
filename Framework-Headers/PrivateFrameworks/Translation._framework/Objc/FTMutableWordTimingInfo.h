//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTWordTimingInfo.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableWordTimingInfo : FTWordTimingInfo
{
}

@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int sample_idx;
@property (nonatomic) float timestamp;
@property (copy, nonatomic) NSString *word;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
