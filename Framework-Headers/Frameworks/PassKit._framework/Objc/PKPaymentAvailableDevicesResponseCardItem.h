//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject
{
    BOOL _supportsInApp;
    NSString *_cardType;
    NSNumber *_cardTypeCode;
    NSString *_currentStatus;
}

@property (copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property (copy, nonatomic) NSNumber *cardTypeCode; // @synthesize cardTypeCode=_cardTypeCode;
@property (copy, nonatomic) NSString *currentStatus; // @synthesize currentStatus=_currentStatus;
@property (nonatomic) BOOL supportsInApp; // @synthesize supportsInApp=_supportsInApp;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

