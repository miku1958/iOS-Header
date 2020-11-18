//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, SKUIArtworkList, UIImage;

@interface SKUIRedeem : NSObject
{
    BOOL _hideItemView;
    NSArray *_items;
    NSString *_inAppPurchase;
    NSString *_credit;
    NSString *_balance;
    NSDictionary *_thankYouDictionary;
    NSURL *_redirectURL;
    UIImage *_headerImage;
    SKUIArtworkList *_headerArtworkList;
    NSString *_title;
    NSString *_message;
    NSArray *_links;
    double _ITunesPassLearnMoreAlertInterval;
}

@property (nonatomic) double ITunesPassLearnMoreAlertInterval; // @synthesize ITunesPassLearnMoreAlertInterval=_ITunesPassLearnMoreAlertInterval;
@property (copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property (copy, nonatomic) NSString *credit; // @synthesize credit=_credit;
@property (strong, nonatomic) SKUIArtworkList *headerArtworkList; // @synthesize headerArtworkList=_headerArtworkList;
@property (strong, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property (nonatomic) BOOL hideItemView; // @synthesize hideItemView=_hideItemView;
@property (strong, nonatomic) NSString *inAppPurchase; // @synthesize inAppPurchase=_inAppPurchase;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSArray *links; // @synthesize links=_links;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property (strong, nonatomic) NSDictionary *thankYouDictionary; // @synthesize thankYouDictionary=_thankYouDictionary;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)init;

@end
