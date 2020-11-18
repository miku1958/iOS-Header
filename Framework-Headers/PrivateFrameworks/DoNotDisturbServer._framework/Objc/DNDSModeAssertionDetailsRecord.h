//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class DNDSModeAssertionLifetimeRecord, NSNumber, NSString;

@interface DNDSModeAssertionDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_identifier;
    NSString *_modeIdentifier;
    NSNumber *_userVisibleEndDate;
    DNDSModeAssertionLifetimeRecord *_lifetime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) DNDSModeAssertionLifetimeRecord *lifetime; // @synthesize lifetime=_lifetime;
@property (strong, nonatomic) NSString *modeIdentifier; // @synthesize modeIdentifier=_modeIdentifier;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSNumber *userVisibleEndDate; // @synthesize userVisibleEndDate=_userVisibleEndDate;

+ (id)recordForAssertionDetails:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
- (void).cxx_destruct;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;
- (id)object;

@end
