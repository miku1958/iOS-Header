//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreDialogResponse, ICURLBag, NSArray, NSData, NSDate, NSDictionary, NSError, NSString;

@interface ICMusicSubscriptionPlaybackResponse : NSObject
{
    NSDictionary *_responseDictionary;
    NSDate *_requestDate;
    ICURLBag *_urlBag;
}

@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, copy, nonatomic) NSString *householdID;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property (readonly, copy, nonatomic) NSData *leaseInfoData;
@property (readonly, copy, nonatomic) NSError *serverError;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;
- (id)itemWithStoreAdamID:(long long)arg1;

@end

