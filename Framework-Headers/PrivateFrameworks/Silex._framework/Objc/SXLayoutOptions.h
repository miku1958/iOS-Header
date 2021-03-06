//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXColumnLayout, UITraitCollection;

@interface SXLayoutOptions : NSObject
{
    SXColumnLayout *_columnLayout;
    struct CGSize _viewportSize;
    UITraitCollection *_traitCollection;
    NSString *_contentSizeCategory;
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
    BOOL _testing;
    unsigned long long _viewingLocation;
    double _contentScaleFactor;
    unsigned long long _newsletterSubscriptionStatus;
}

@property (readonly, nonatomic) long long bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
@property (readonly, nonatomic) long long channelSubscriptionStatus; // @synthesize channelSubscriptionStatus=_channelSubscriptionStatus;
@property (readonly, nonatomic) SXColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
@property (readonly, nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property (readonly, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (readonly, nonatomic) unsigned long long newsletterSubscriptionStatus; // @synthesize newsletterSubscriptionStatus=_newsletterSubscriptionStatus;
@property (readonly, nonatomic) BOOL testing; // @synthesize testing=_testing;
@property (readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property (readonly, nonatomic) unsigned long long viewingLocation; // @synthesize viewingLocation=_viewingLocation;
@property (readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)diffWithLayoutOptions:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnLayout:(id)arg1 viewportSize:(struct CGSize)arg2 traitCollection:(id)arg3 contentSizeCategory:(id)arg4 bundleSubscriptionStatus:(long long)arg5 channelSubscriptionStatus:(long long)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9 newsletterSubscriptionStatus:(unsigned long long)arg10;
- (BOOL)isEqual:(id)arg1;

@end

