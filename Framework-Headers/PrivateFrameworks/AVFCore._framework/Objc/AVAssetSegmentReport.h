//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface AVAssetSegmentReport : NSObject
{
    long long _segmentType;
    NSMutableArray *_trackReports;
}

@property (readonly, nonatomic) long long segmentType; // @synthesize segmentType=_segmentType;
@property (readonly, nonatomic) NSArray *trackReports; // @synthesize trackReports=_trackReports;

- (void)dealloc;
- (id)initWithFigSegmentReportDictionary:(id)arg1;

@end
