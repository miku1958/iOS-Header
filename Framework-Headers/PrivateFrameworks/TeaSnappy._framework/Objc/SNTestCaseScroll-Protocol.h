//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaSnappy/SNTestCase-Protocol.h>

@class SNTestContext, UIScrollView;

@protocol SNTestCaseScroll <SNTestCase>

@property (readonly, nonatomic) long long iterations;
@property (readonly, nonatomic) long long numberOfScreens;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) unsigned long long scrollDirection;

- (UIScrollView *)scrollViewWithContext:(SNTestContext *)arg1;

@optional
@end

