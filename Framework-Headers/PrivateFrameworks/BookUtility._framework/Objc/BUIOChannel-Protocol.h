//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookUtility/NSObject-Protocol.h>

@protocol BUIOChannel <NSObject>

@property (readonly, nonatomic) BOOL isValid;

- (void)addBarrier:(void (^)(void))arg1;
- (void)close;
- (void)setLowWater:(unsigned long long)arg1;
@end
