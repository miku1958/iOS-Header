//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TSKSearchTarget <NSObject>

@optional
- (NSArray *)childAnnotationSearchTargets;
- (NSArray *)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(void (^)(id<TSKSearchReference>))arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(void (^)(id<TSKSearchReference>))arg1 stop:(BOOL *)arg2;
- (void)layoutSearchForString:(NSString *)arg1 options:(unsigned long long)arg2 hitBlock:(void (^)(id<TSKSearchReference>))arg3;
@end
