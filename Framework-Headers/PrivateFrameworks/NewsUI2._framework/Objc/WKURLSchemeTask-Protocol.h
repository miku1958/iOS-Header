//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/NSObject-Protocol.h>

@class NSData, NSError, NSURLRequest, NSURLResponse;

@protocol WKURLSchemeTask <NSObject>

@property (nonatomic, readonly) NSURLRequest *request;

- (void)didFailWithError:(NSError *)arg1;
- (void)didFinish;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSURLResponse *)arg1;
@end
