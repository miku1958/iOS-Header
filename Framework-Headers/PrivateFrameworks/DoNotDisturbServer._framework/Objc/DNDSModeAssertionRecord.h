//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class DNDSModeAssertionDetailsRecord, DNDSModeAssertionSourceRecord, NSNumber, NSString;

@interface DNDSModeAssertionRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_UUID;
    NSNumber *_startDate;
    DNDSModeAssertionDetailsRecord *_details;
    DNDSModeAssertionSourceRecord *_source;
}

@property (strong, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) DNDSModeAssertionDetailsRecord *details; // @synthesize details=_details;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) DNDSModeAssertionSourceRecord *source; // @synthesize source=_source;
@property (strong, nonatomic) NSNumber *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;

+ (id)recordForAssertion:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
- (void).cxx_destruct;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;
- (id)object;

@end

