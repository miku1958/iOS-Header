//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/NSObject-Protocol.h>

@class NSArray, NSNumber;

@protocol CLLocationSmootherServerInterface <NSObject>

@optional
- (void)smoothLocations:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)smoothLocations:(NSArray *)arg1 useType:(NSNumber *)arg2;
@end
