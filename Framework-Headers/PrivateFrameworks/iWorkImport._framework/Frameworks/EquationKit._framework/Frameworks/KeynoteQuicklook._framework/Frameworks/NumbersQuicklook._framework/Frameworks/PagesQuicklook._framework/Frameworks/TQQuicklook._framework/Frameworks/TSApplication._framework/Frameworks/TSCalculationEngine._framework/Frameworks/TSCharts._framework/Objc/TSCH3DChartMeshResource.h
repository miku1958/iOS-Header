//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DResource.h>

@class TSCH3DChartMeshSharedChildResource;

@interface TSCH3DChartMeshResource : TSCH3DResource
{
    TSCH3DChartMeshSharedChildResource *mShared;
}

+ (id)resourceWithSharedResource:(id)arg1;
- (struct DataBufferInfo)bufferInfo;
- (int)caching;
- (void)dealloc;
- (void)flushMemory;
- (id)get;
- (unsigned long long)hash;
- (id)initWithSharedResource:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)uniqueIdentifier;

@end

