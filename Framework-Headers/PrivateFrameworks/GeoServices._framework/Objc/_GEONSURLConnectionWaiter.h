//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSURLConnectionDelegate-Protocol.h>

@class NSMutableData, NSString, NSURLConnection, NSURLResponse;

__attribute__((visibility("hidden")))
@interface _GEONSURLConnectionWaiter : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_conn;
    CDUnknownBlockType _callback;
    NSMutableData *_data;
    NSURLResponse *_response;
}

@property (copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property (strong, nonatomic) NSURLConnection *conn; // @synthesize conn=_conn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;

@end

