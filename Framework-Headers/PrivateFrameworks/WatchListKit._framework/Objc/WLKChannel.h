//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKChannelDetails;

@interface WLKChannel : NSObject
{
    NSString *_ID;
    WLKChannelDetails *_details;
    NSDictionary *_punchoutUrls;
    NSArray *_seasonNumbers;
    NSArray *_subscriptionOffers;
}

@property (readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property (readonly, copy, nonatomic) WLKChannelDetails *details; // @synthesize details=_details;
@property (readonly, copy, nonatomic) NSDictionary *punchoutUrls; // @synthesize punchoutUrls=_punchoutUrls;
@property (readonly, copy, nonatomic) NSArray *seasonNumbers; // @synthesize seasonNumbers=_seasonNumbers;
@property (readonly, copy, nonatomic) NSArray *subscriptionOffers; // @synthesize subscriptionOffers=_subscriptionOffers;

+ (id)channelsWithDictionaries:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;

@end

