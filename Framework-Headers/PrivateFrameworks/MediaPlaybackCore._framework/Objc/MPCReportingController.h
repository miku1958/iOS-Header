//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPCReportingController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_childReportingControllers;
    MPCReportingController *_parentReportingController;
}

@property (readonly, copy, nonatomic) NSArray *childReportingControllers;
@property (weak, nonatomic) MPCReportingController *parentReportingController;

- (void).cxx_destruct;
- (void)_recordReportingEvents:(id)arg1;
- (void)addChildReportingController:(id)arg1;
- (id)init;
- (void)recordReportingEvents:(id)arg1;
- (void)removeChildReportingController:(id)arg1;

@end

