//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, UIImage;
@protocol SKUIArtworkProviding;

@interface SKUIRedeem : NSObject <NSSecureCoding>
{
    BOOL _hideItemView;
    NSArray *_items;
    NSArray *_downloads;
    NSString *_inAppPurchase;
    NSString *_credit;
    NSString *_balance;
    NSString *_creditDisplay;
    NSDictionary *_thankYouDictionary;
    NSURL *_redirectURL;
    NSURL *_customizedThankyouURL;
    UIImage *_headerImage;
    id<SKUIArtworkProviding> _headerArtworkProvider;
    NSString *_title;
    NSString *_message;
    NSArray *_links;
    double _ITunesPassLearnMoreAlertInterval;
}

@property (nonatomic) double ITunesPassLearnMoreAlertInterval; // @synthesize ITunesPassLearnMoreAlertInterval=_ITunesPassLearnMoreAlertInterval;
@property (copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property (copy, nonatomic) NSString *credit; // @synthesize credit=_credit;
@property (copy, nonatomic) NSString *creditDisplay; // @synthesize creditDisplay=_creditDisplay;
@property (strong, nonatomic) NSURL *customizedThankyouURL; // @synthesize customizedThankyouURL=_customizedThankyouURL;
@property (strong, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
@property (strong, nonatomic) id<SKUIArtworkProviding> headerArtworkProvider; // @synthesize headerArtworkProvider=_headerArtworkProvider;
@property (strong, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property (nonatomic) BOOL hideItemView; // @synthesize hideItemView=_hideItemView;
@property (strong, nonatomic) NSString *inAppPurchase; // @synthesize inAppPurchase=_inAppPurchase;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSArray *links; // @synthesize links=_links;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property (strong, nonatomic) NSDictionary *thankYouDictionary; // @synthesize thankYouDictionary=_thankYouDictionary;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

