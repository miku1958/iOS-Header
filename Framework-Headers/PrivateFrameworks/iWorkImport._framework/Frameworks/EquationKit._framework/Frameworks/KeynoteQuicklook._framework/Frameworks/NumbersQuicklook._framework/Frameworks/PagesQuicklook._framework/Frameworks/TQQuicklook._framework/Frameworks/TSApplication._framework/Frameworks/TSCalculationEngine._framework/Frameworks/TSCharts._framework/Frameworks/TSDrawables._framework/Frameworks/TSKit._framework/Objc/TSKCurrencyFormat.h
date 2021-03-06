//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKFormat.h>

#import <TSKit/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface TSKCurrencyFormat : TSKFormat <NSCopying>
{
    NSNumber *_propertiesCacheKey;
    BOOL _showThousandsSeparator;
    BOOL _accountingStyle;
    BOOL _usePlusSign;
    int _negativeStyle;
    unsigned long long _decimalPlaces;
    unsigned long long _currencyCodeIndex;
}

@property (readonly, nonatomic) BOOL accountingStyle; // @synthesize accountingStyle=_accountingStyle;
@property (readonly, nonatomic) NSString *currencyCode;
@property (nonatomic) unsigned long long currencyCodeIndex; // @synthesize currencyCodeIndex=_currencyCodeIndex;
@property (readonly, nonatomic) unsigned long long decimalPlaces; // @synthesize decimalPlaces=_decimalPlaces;
@property (readonly, nonatomic) int negativeStyle; // @synthesize negativeStyle=_negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property (readonly, nonatomic) BOOL usePlusSign; // @synthesize usePlusSign=_usePlusSign;

- (void).cxx_destruct;
- (id)asCurrencyFormat;
- (unsigned long long)hash;
- (id)initWithDecimalPlaces:(unsigned long long)arg1 negativeStyle:(int)arg2 showSeparator:(BOOL)arg3 accountingStyle:(BOOL)arg4 currencyCode:(id)arg5;
- (id)initWithFormatType:(unsigned int)arg1;
- (id)initWithLocale:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end

