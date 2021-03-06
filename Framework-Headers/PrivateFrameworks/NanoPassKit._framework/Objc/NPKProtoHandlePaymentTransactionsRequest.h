//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_passAppletStates;
    NSMutableArray *_transactionPassIDs;
    NSMutableArray *_transactionsBytes;
}

@property (strong, nonatomic) NSMutableArray *passAppletStates; // @synthesize passAppletStates=_passAppletStates;
@property (strong, nonatomic) NSMutableArray *transactionPassIDs; // @synthesize transactionPassIDs=_transactionPassIDs;
@property (strong, nonatomic) NSMutableArray *transactionsBytes; // @synthesize transactionsBytes=_transactionsBytes;

+ (Class)passAppletStatesType;
+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;
- (void).cxx_destruct;
- (void)addPassAppletStates:(id)arg1;
- (void)addTransactionPassIDs:(id)arg1;
- (void)addTransactionsBytes:(id)arg1;
- (void)clearPassAppletStates;
- (void)clearTransactionPassIDs;
- (void)clearTransactionsBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passAppletStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)passAppletStatesCount;
- (BOOL)readFrom:(id)arg1;
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionPassIDsCount;
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionsBytesCount;
- (void)writeTo:(id)arg1;

@end

