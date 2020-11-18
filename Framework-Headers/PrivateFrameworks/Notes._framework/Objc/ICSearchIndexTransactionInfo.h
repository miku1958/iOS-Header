//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICPropertyListSerializable-Protocol.h>
#import <Notes/NSCopying-Protocol.h>
#import <Notes/NSMutableCopying-Protocol.h>

@class NSDictionary;

@interface ICSearchIndexTransactionInfo : NSObject <NSCopying, NSMutableCopying, ICPropertyListSerializable>
{
    NSDictionary *_transactionInfoDictionary;
}

@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSDictionary *transactionInfoDictionary; // @synthesize transactionInfoDictionary=_transactionInfoDictionary;
@property (readonly, nonatomic) BOOL valid;

+ (id)completionTransactionID;
+ (id)invalidTransactionID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)guaranteesCompletionOfTransactionInfo:(id)arg1;
- (id)init;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)initWithTransactionInfoDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)propertyListObjectRepresentation;
- (id)transactionIDForName:(id)arg1;

@end

