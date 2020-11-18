//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreDialogResponse, ICURLBag, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface ICMediaRedownloadResponse : NSObject
{
    NSDate *_requestDate;
    ICURLBag *_urlBag;
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) BOOL authorized;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, nonatomic) unsigned int downloadQueueItemCount;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *jingleAction;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property (readonly, nonatomic) BOOL shouldCancelPurchaseBatch;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;

@end

