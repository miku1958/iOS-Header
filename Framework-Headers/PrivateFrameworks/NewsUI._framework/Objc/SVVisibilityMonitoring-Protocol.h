//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SVVisibilityMonitoring <NSObject>

@property (readonly, nonatomic) BOOL appeared;
@property (readonly, weak, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double visiblePercentage;

- (void)onDidAppear:(void (^)(id<SVVisibilityMonitoring>))arg1;
- (void)onDidDisappear:(void (^)(id<SVVisibilityMonitoring>))arg1;
- (void)onVisiblePercentageChange:(void (^)(id<SVVisibilityMonitoring>, double))arg1;
- (void)onWillAppear:(void (^)(id<SVVisibilityMonitoring>))arg1;
- (void)onWillDisappear:(void (^)(id<SVVisibilityMonitoring>))arg1;
@end

