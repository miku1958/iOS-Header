//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class NSData, NSString, TKSmartCard, TKSmartCardPINFormat;

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation
{
    TKSmartCardPINFormat *_PINFormat;
    NSData *_APDUTemplate;
    long long _PINByteOffset;
    TKSmartCard *_smartCard;
    NSString *_PIN;
    NSString *_localizedPINLabel;
}

@property (copy) NSData *APDUTemplate; // @synthesize APDUTemplate=_APDUTemplate;
@property (copy) NSString *PIN; // @synthesize PIN=_PIN;
@property long long PINByteOffset; // @synthesize PINByteOffset=_PINByteOffset;
@property (strong) TKSmartCardPINFormat *PINFormat; // @synthesize PINFormat=_PINFormat;
@property (copy) NSString *localizedPINLabel; // @synthesize localizedPINLabel=_localizedPINLabel;
@property (strong) TKSmartCard *smartCard; // @synthesize smartCard=_smartCard;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)finishWithError:(id *)arg1;
- (void)importOperation:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

