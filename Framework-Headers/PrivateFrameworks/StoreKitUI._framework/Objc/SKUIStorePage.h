//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSData, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL, SKUIArtwork, SKUIProductPage, SKUIUber, SSMetricsConfiguration;

@interface SKUIStorePage : NSObject <NSCopying>
{
    SKUIArtwork *_backgroundArtwork;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSArray *_pageComponents;
    NSString *_pageType;
    NSURL *_pageURL;
    SKUIProductPage *_productPage;
    NSString *_title;
    SKUIUber *_uber;
    NSMutableDictionary *_values;
}

@property (strong, nonatomic) NSData *ITMLData; // @synthesize ITMLData=_itmlData;
@property (strong, nonatomic) NSHTTPURLResponse *ITMLResponse; // @synthesize ITMLResponse=_itmlResponse;
@property (strong, nonatomic) SKUIArtwork *backgroundArtwork; // @synthesize backgroundArtwork=_backgroundArtwork;
@property (strong, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
@property (copy, nonatomic) NSString *metricsPageDescription; // @synthesize metricsPageDescription=_metricsPageDescription;
@property (copy, nonatomic) NSArray *pageComponents; // @synthesize pageComponents=_pageComponents;
@property (copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property (copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property (copy, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forPageKey:(id)arg2;
- (id)valueForPageKey:(id)arg1;

@end
