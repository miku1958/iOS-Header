//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUIGiftValidationResponse : NSObject
{
    NSString *_errorString;
    NSString *_giftKey;
    NSString *_totalGiftAmountString;
    BOOL _valid;
}

@property (readonly, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property (readonly, nonatomic) NSString *giftKey; // @synthesize giftKey=_giftKey;
@property (readonly, nonatomic) NSString *totalGiftAmountString; // @synthesize totalGiftAmountString=_totalGiftAmountString;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

- (void).cxx_destruct;
- (id)initWithValidationDictionary:(id)arg1;

@end

