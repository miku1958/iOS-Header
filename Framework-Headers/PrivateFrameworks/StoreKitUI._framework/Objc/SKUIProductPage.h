//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSData, NSHTTPURLResponse, NSString, NSURL, SKUIProductPageItem, SKUIProductPageProductInfo, SKUIReviewConfiguration, SKUIUber, SSMetricsConfiguration;

@interface SKUIProductPage : NSObject <NSCopying>
{
    long long _defaultPageFragment;
    SKUIProductPageItem *_item;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSURL *_pageURL;
    SKUIProductPageProductInfo *_productInformation;
    NSArray *_relatedContentSwooshes;
    SKUIReviewConfiguration *_reviewConfiguration;
    SKUIUber *_uber;
}

@property (strong, nonatomic) NSData *ITMLData; // @synthesize ITMLData=_itmlData;
@property (strong, nonatomic) NSHTTPURLResponse *ITMLResponse; // @synthesize ITMLResponse=_itmlResponse;
@property (nonatomic) long long defaultPageFragment; // @synthesize defaultPageFragment=_defaultPageFragment;
@property (strong, nonatomic) SKUIProductPageItem *item; // @synthesize item=_item;
@property (strong, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
@property (copy, nonatomic) NSString *metricsPageDescription; // @synthesize metricsPageDescription=_metricsPageDescription;
@property (copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property (strong, nonatomic) SKUIProductPageProductInfo *productInformation; // @synthesize productInformation=_productInformation;
@property (copy, nonatomic) NSArray *relatedContentSwooshes; // @synthesize relatedContentSwooshes=_relatedContentSwooshes;
@property (strong, nonatomic) SKUIReviewConfiguration *reviewConfiguration; // @synthesize reviewConfiguration=_reviewConfiguration;
@property (strong, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

