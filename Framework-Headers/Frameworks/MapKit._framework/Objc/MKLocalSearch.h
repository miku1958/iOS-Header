//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKLocalSearchRequest;
@protocol MKMapServiceTicket;

@interface MKLocalSearch : NSObject
{
    MKLocalSearchRequest *_request;
    id<MKMapServiceTicket> _ticket;
}

@property (readonly, nonatomic, getter=isSearching) BOOL searching;

- (void).cxx_destruct;
- (void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)_phoneOnlyStartWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_startWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)cancel;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

