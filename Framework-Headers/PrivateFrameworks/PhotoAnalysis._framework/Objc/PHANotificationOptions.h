//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, PHAsset;

@interface PHANotificationOptions : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_bodyText;
    NSDate *_deliveryDate;
    NSDate *_expirationDate;
    NSDictionary *_userInfo;
    PHAsset *_keyAsset;
    NSString *_collectionUUID;
}

@property (strong, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property (strong, nonatomic) NSString *collectionUUID; // @synthesize collectionUUID=_collectionUUID;
@property (strong, nonatomic) NSDate *deliveryDate; // @synthesize deliveryDate=_deliveryDate;
@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (strong, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;

@end

