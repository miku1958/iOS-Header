//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVDateRangeMetadataGroup.h>

@class AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup
{
    AVDateRangeMetadataGroupInternal *_mutablePriv;
}

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDate *startDate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
