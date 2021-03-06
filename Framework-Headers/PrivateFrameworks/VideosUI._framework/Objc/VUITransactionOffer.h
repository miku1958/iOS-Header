//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUITransactionOffer : NSObject
{
    NSDictionary *_transactionOfferDict;
    NSArray *_videosPlayables;
    BOOL _initiateFamilySetup;
    NSDictionary *_offer;
}

@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) BOOL initiateFamilySetup; // @synthesize initiateFamilySetup=_initiateFamilySetup;
@property (readonly, copy, nonatomic) NSDictionary *offer; // @synthesize offer=_offer;
@property (readonly, nonatomic) BOOL playWhenDone;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *videosPlayables;

- (void).cxx_destruct;
- (id)getCanonicalID;
- (id)initWithDictionary:(id)arg1;
- (id)notificationBody;
- (id)notificationTitle;

@end

