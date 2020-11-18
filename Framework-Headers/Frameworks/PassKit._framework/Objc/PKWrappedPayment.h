//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKWrappedPayment : NSObject <NSSecureCoding>
{
    NSString *_transactionIdentifier;
    NSData *_transactionData;
}

@property (copy, nonatomic) NSData *transactionData; // @synthesize transactionData=_transactionData;
@property (copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

