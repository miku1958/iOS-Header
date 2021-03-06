//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCPurchaseOfferableConfiguration : NSObject
{
    BOOL _allowsPublisherPhoneApp;
    BOOL _allowsPublisherPadApp;
    BOOL _allowsPublisherWebsite;
    BOOL _preferredOffer;
    NSString *_purchaseID;
}

@property (nonatomic) BOOL allowsPublisherPadApp; // @synthesize allowsPublisherPadApp=_allowsPublisherPadApp;
@property (nonatomic) BOOL allowsPublisherPhoneApp; // @synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp;
@property (nonatomic) BOOL allowsPublisherWebsite; // @synthesize allowsPublisherWebsite=_allowsPublisherWebsite;
@property (nonatomic) BOOL preferredOffer; // @synthesize preferredOffer=_preferredOffer;
@property (copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;

- (void).cxx_destruct;
- (id)initWithPurchaseID:(id)arg1 allowsPublisherPhoneApp:(BOOL)arg2 allowsPublisherPadApp:(BOOL)arg3 allowsPublisherWebsite:(BOOL)arg4 preferredOffer:(BOOL)arg5;

@end

