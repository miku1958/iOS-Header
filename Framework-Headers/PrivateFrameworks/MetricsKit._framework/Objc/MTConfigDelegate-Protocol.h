//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/NSObject-Protocol.h>

@class MTPromise, NSArray, NSString;

@protocol MTConfigDelegate <NSObject>
- (MTPromise *)sources;

@optional
- (id)configValueForKeyPath:(NSString *)arg1 sources:(NSArray *)arg2;
@end

