//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAnalyticsPipelineProxy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setShortSessionValues:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)shortSessionValuesWithCompletion:(CDUnknownBlockType)arg1;

@end

