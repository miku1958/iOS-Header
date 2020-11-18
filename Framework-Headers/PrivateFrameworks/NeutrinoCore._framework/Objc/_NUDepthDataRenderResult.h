//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUDepthDataRenderResult-Protocol.h>

@class AVDepthData, NSString;
@protocol NURenderStatistics;

@interface _NUDepthDataRenderResult : _NURenderResult <NUDepthDataRenderResult>
{
    AVDepthData *_depthData;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end

