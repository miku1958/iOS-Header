//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXADBannerView, SXAdRequest;

@interface SXAdResponse : NSObject
{
    SXAdRequest *_request;
    SXADBannerView *_bannerView;
}

@property (strong, nonatomic) SXADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property (strong, nonatomic) SXAdRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;

@end

