//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriClientFlow/NSObject-Protocol.h>

@class CNAutocompleteFetchRequest, NSArray, NSDictionary, NSError;
@protocol CNCancelable;

@protocol CNAutocompleteFetchDelegate <NSObject>
- (void)autocompleteFetch:(id<CNCancelable>)arg1 didFailWithError:(NSError *)arg2;
- (void)autocompleteFetch:(id<CNCancelable>)arg1 didReceiveResults:(NSArray *)arg2;

@optional
- (BOOL)autocompleteFetch:(id<CNCancelable>)arg1 shouldExpectSupplementalResultsForRequest:(CNAutocompleteFetchRequest *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (NSDictionary *)autocompleteFetch:(id<CNCancelable>)arg1 willAdjustResults:(NSArray *)arg2;
- (void)autocompleteFetch:(id<CNCancelable>)arg1 willSortResults:(NSArray *)arg2;
- (void)autocompleteFetchDidBeginNetworkActivity:(id<CNCancelable>)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id<CNCancelable>)arg1;
- (void)autocompleteFetchDidFinish:(id<CNCancelable>)arg1;
- (long long (^)(id, id))resultComparatorForAutocompleteFetch:(id<CNCancelable>)arg1;
@end

