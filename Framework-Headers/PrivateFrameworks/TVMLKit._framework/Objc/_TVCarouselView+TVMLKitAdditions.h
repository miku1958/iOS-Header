//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVUIKit/_TVCarouselView.h>

#import <TVMLKit/TVRowHosting-Protocol.h>

@class NSString;

@interface _TVCarouselView (TVMLKitAdditions) <TVRowHosting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (readonly) Class superclass;

- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
@end

