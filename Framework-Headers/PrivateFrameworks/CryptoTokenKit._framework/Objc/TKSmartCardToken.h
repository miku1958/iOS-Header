//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKToken.h>

@class NSData, TKSmartCard;

@interface TKSmartCardToken : TKToken
{
    NSData *_AID;
    TKSmartCard *_smartCard;
}

@property (readonly) NSData *AID; // @synthesize AID=_AID;
@property (readonly) TKSmartCard *smartCard; // @synthesize smartCard=_smartCard;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)valid;

@end

