//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSError;

@protocol SBFObserver <NSObject>
- (void)observerDidComplete;
- (void)observerDidFailWithError:(NSError *)arg1;
- (void)observerDidReceiveResult:(id)arg1;
@end

