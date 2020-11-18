//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject
{
    NSDictionary *_fieldSchemasByName;
    NSString *_clientRecordType;
    NSString *_serverRecordType;
}

@property (readonly, copy, nonatomic) NSArray *allEncryptedFieldNames;
@property (readonly, copy, nonatomic) NSArray *allUnencryptedFieldNames;
@property (readonly, copy, nonatomic) NSString *clientRecordType; // @synthesize clientRecordType=_clientRecordType;
@property (readonly, nonatomic) BOOL hasEncryptedFields;
@property (readonly, copy, nonatomic) NSString *serverRecordType; // @synthesize serverRecordType=_serverRecordType;

+ (id)recordWithClientType:(id)arg1 serverType:(id)arg2 fields:(id)arg3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3;
- (BOOL)isFieldEncrypted:(id)arg1;
- (BOOL)isFieldKnown:(id)arg1;

@end
