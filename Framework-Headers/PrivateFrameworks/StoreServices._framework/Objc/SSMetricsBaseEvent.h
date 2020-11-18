//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent
{
}

@property (strong, nonatomic) NSString *pageContext;
@property (strong, nonatomic) NSString *pageDescription;
@property (nonatomic) unsigned long long pageID;
@property (strong, nonatomic) NSString *pageType;
@property (strong, nonatomic) NSString *pageURL;
@property (strong, nonatomic) NSNumber *pixelRatio;
@property (strong, nonatomic) NSNumber *screenHeight;
@property (strong, nonatomic) NSNumber *screenWidth;
@property (strong, nonatomic) NSNumber *windowHeight;
@property (strong, nonatomic) NSString *windowOrientation;
@property (strong, nonatomic) NSNumber *windowWidth;

- (id)description;
- (id)init;
- (BOOL)isBlacklistedByConfiguration:(id)arg1;

@end
