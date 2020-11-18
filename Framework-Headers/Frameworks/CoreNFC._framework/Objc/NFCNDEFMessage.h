//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSSecureCoding-Protocol.h>

@class NSArray;

@interface NFCNDEFMessage : NSObject <NSSecureCoding>
{
    NSArray *_records;
}

@property (readonly, nonatomic) unsigned long long length;
@property (copy, nonatomic) NSArray *records; // @synthesize records=_records;

+ (id)_getPayloadsFromNDEFRecords:(id)arg1;
+ (BOOL)_validateRecords:(id)arg1 fromOriginal:(id)arg2;
+ (id)ndefMessageWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_getURLsFromNDEFMessage:(id)arg1;
- (id)_initWithRecords:(id)arg1;
- (id)asData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmptyNdefMessage;
- (id)initWithNDEFRecords:(id)arg1;
- (id)initWithNFNdefMessage:(id)arg1;

@end
