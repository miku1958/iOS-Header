//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SSHTTPServerRequestHandler;

@protocol SSHTTPServerRequestHandlerDelegate
- (void)requestDidFinish:(SSHTTPServerRequestHandler *)arg1;
- (SSHTTPServerResponse * (^)(NSURLRequest *))responseBlockForPath:(NSString *)arg1;
@end

