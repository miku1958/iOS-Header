//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class NSObject, SSVLoadURLOperation;
@protocol MPStoreSocialRequestOperationDataSource, OS_dispatch_queue;

@interface MPStoreSocialRequestOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSVLoadURLOperation *_URLOperation;
    id<MPStoreSocialRequestOperationDataSource> _dataSource;
    CDUnknownBlockType _responseHandler;
}

@property (readonly, nonatomic) id<MPStoreSocialRequestOperationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

+ (id)_stringRepresentationForHTTPBodyType:(long long)arg1;
+ (id)_stringRepresentationForHTTPMethod:(long long)arg1;
+ (id)_urlStringForKey:(id)arg1 inBag:(id)arg2;
- (void).cxx_destruct;
- (id)_storeURLRequestPropertiesUsingBag:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithDataSource:(id)arg1;

@end
