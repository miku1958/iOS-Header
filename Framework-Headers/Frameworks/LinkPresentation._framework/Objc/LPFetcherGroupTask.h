//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPFetcher, LPFetcherResponse;

__attribute__((visibility("hidden")))
@interface LPFetcherGroupTask : NSObject
{
    BOOL _hasStarted;
    LPFetcher *_fetcher;
    LPFetcherResponse *_response;
}

@property (strong, nonatomic) LPFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property (nonatomic) BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property (strong, nonatomic) LPFetcherResponse *response; // @synthesize response=_response;

- (void).cxx_destruct;

@end

