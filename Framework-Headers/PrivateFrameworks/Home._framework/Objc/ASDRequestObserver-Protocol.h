//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class ASDRequest, NSError;

@protocol ASDRequestObserver <NSObject>
- (void)request:(ASDRequest *)arg1 didCompleteWithError:(NSError *)arg2;
@end

