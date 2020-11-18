//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/NSSecureCoding-Protocol.h>
#import <iTunesStoreUI/SSXPCCoding-Protocol.h>

@class NSError, NSNumber, NSString;

@interface SUCreditCardReaderOutput : SUScriptObject <SSXPCCoding, NSSecureCoding>
{
    BOOL _cancelled;
    BOOL _manualEntrySelected;
    NSString *_cardCardholderName;
    NSNumber *_cardExpirationDay;
    NSNumber *_cardExpirationMonth;
    NSNumber *_cardExpirationYear;
    NSString *_cardExpirationStringValue;
    NSString *_cardNumber;
    NSError *_error;
}

@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (copy, nonatomic) NSString *cardCardholderName; // @synthesize cardCardholderName=_cardCardholderName;
@property (copy, nonatomic) NSNumber *cardExpirationDay; // @synthesize cardExpirationDay=_cardExpirationDay;
@property (copy, nonatomic) NSNumber *cardExpirationMonth; // @synthesize cardExpirationMonth=_cardExpirationMonth;
@property (copy, nonatomic) NSString *cardExpirationStringValue; // @synthesize cardExpirationStringValue=_cardExpirationStringValue;
@property (copy, nonatomic) NSNumber *cardExpirationYear; // @synthesize cardExpirationYear=_cardExpirationYear;
@property (copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL manualEntrySelected; // @synthesize manualEntrySelected=_manualEntrySelected;
@property (readonly) Class superclass;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void).cxx_destruct;
- (id)attributeKeys;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)scriptAttributeKeys;

@end
