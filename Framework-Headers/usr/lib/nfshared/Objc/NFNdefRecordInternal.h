//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <nfshared/NFNdefRecord-Protocol.h>
#import <nfshared/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface NFNdefRecordInternal : NSObject <NFNdefRecord, NSSecureCoding>
{
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

@property (nonatomic) BOOL chunked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char header;
@property (strong, nonatomic) NSData *identifier;
@property (nonatomic) BOOL messageBegin;
@property (nonatomic) BOOL messageEnd;
@property (strong, nonatomic) NSData *payload;
@property (nonatomic) BOOL shortRecord;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;

+ (id)_decodeTextRecord:(id)arg1;
+ (id)_decodeURIRecord:(id)arg1;
+ (id)dataFromRecord:(id)arg1;
+ (id)decodeFromRecord:(id)arg1;
+ (BOOL)parseRecordUsingScanner:(struct _NFDataScanner *)arg1 header:(char *)arg2 type:(id *)arg3 identifier:(id *)arg4 payload:(id *)arg5;
+ (id)recordsFromBytes:(const void *)arg1 length:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;
- (BOOL)_idLengthPresent;
- (void)_setIdLengthPresent:(BOOL)arg1;
- (id)asData;
- (void)dealloc;
- (id)decode;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeader:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (id)initWithNDEFRecord:(id)arg1;
- (BOOL)isURIRecord;

@end

