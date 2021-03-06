//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSLocale;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding>
{
    NSLocale *_locale;
    unsigned short _resultSW;
    unsigned long long _PINCompletion;
    NSArray *_PINMessageIndices;
    NSData *_resultData;
}

@property unsigned long long PINCompletion; // @synthesize PINCompletion=_PINCompletion;
@property (strong) NSArray *PINMessageIndices; // @synthesize PINMessageIndices=_PINMessageIndices;
@property (strong) NSLocale *locale;
@property (strong) NSData *resultData; // @synthesize resultData=_resultData;
@property unsigned short resultSW; // @synthesize resultSW=_resultSW;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

