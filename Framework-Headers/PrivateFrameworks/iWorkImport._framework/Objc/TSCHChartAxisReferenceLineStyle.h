//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisReferenceLineStyle : NSObject
{
    TSCHChartAxisID *mAxisIdentifier;
    NSArray *mReferenceLineStyles;
}

@property (copy, nonatomic) TSCHChartAxisID *axisIdentifier; // @synthesize axisIdentifier=mAxisIdentifier;
@property (copy, nonatomic) NSArray *referenceLineStyles; // @synthesize referenceLineStyles=mReferenceLineStyles;

- (void)dealloc;
- (void)didInitFromSOS;

@end
