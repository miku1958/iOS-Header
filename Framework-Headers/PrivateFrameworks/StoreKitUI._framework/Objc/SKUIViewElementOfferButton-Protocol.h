//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIBuyButtonDescriptor, SKUIClientContext, SKUIItemState;
@protocol SKUIItemOfferButtonDelegate;

@protocol SKUIViewElementOfferButton <NSObject>

@property (weak, nonatomic) id<SKUIItemOfferButtonDelegate> itemOfferDelegate;

- (BOOL)setValuesUsingBuyButtonDescriptor:(SKUIBuyButtonDescriptor *)arg1 itemState:(SKUIItemState *)arg2 clientContext:(SKUIClientContext *)arg3 animated:(BOOL)arg4;
@end

