//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsAnalyticsUpload/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@protocol NDAnalyticsPayloadInfo <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *droppedEntriesByReason;
@property (readonly, copy, nonatomic) NSURL *endpointURL;
@property (readonly, copy, nonatomic) NSArray *entriesToUpload;
@property (readonly, copy, nonatomic) NSDictionary *valuesByHTTPHeaderField;

@end
