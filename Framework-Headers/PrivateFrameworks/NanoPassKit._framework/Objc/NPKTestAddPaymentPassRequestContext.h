//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NPKTestAddPaymentPassRequestContext : NSObject
{
    NSString *_cardPNO;
    NSString *_cardFlow;
    NSString *_cardID;
    NSString *_cardType;
    NSString *_cardIssuer;
    NSString *_cardProduct;
    NSString *_cardEncryptionScheme;
}

@property (strong, nonatomic) NSString *cardEncryptionScheme; // @synthesize cardEncryptionScheme=_cardEncryptionScheme;
@property (strong, nonatomic) NSString *cardFlow; // @synthesize cardFlow=_cardFlow;
@property (strong, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property (strong, nonatomic) NSString *cardIssuer; // @synthesize cardIssuer=_cardIssuer;
@property (strong, nonatomic) NSString *cardPNO; // @synthesize cardPNO=_cardPNO;
@property (strong, nonatomic) NSString *cardProduct; // @synthesize cardProduct=_cardProduct;
@property (strong, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;

- (void).cxx_destruct;

@end
