//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/SBUIBannerView-Protocol.h>

@class CPSBannerItem, NSString, SBUIBannerContext;

@interface CPSBannerView : UIView <SBUIBannerView>
{
    CPSBannerItem *_bannerItem;
    SBUIBannerContext *_bannerContext;
}

@property (strong, nonatomic) SBUIBannerContext *bannerContext; // @synthesize bannerContext=_bannerContext;
@property (strong, nonatomic) CPSBannerItem *bannerItem; // @synthesize bannerItem=_bannerItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationIconImage;
- (id)initWithContext:(id)arg1;
- (void)updateBannerWithBannerItem:(id)arg1;

@end
