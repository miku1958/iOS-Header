//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding>
{
    NSDate *_insertDate;
    PKPeerPaymentRecipient *_item;
}

@property (readonly, nonatomic) PKPeerPaymentRecipient *item; // @synthesize item=_item;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasExpired;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (BOOL)isNewerThan:(id)arg1;

@end
