//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSError, SKRequest;

@protocol SKRequestDelegate <NSObject>

@optional
- (void)request:(SKRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinish:(SKRequest *)arg1;
@end

