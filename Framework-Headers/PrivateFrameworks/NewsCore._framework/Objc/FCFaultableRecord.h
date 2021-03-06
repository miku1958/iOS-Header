//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>

@class NSData, NSString, NTPBRecordBase, PBCodable;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding>
{
    struct os_unfair_lock_s _recordLock;
    PBCodable *_record;
    NSData *_recordData;
    NTPBRecordBase *_recordBase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PBCodable *record; // @synthesize record=_record;
@property (strong, nonatomic) NTPBRecordBase *recordBase; // @synthesize recordBase=_recordBase;
@property (strong, nonatomic) NSData *recordData; // @synthesize recordData=_recordData;
@property (nonatomic) struct os_unfair_lock_s recordLock; // @synthesize recordLock=_recordLock;
@property (readonly) Class superclass;

+ (id)faultableRecordWithRecord:(id)arg1;
+ (id)faultableRecordWithRecordData:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)writeToKeyValuePair:(id)arg1;

@end

