//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrackingAvoidance/NSObject-Protocol.h>

@class NSURL;

@protocol TAPersistenceManagerObserver <NSObject>

@optional
- (void)didReadFromURL:(NSURL *)arg1 bytes:(unsigned long long)arg2;
- (void)didWriteToURL:(NSURL *)arg1 bytes:(unsigned long long)arg2;
@end

