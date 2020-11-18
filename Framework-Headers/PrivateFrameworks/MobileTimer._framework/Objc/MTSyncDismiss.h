//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTProtoBufferSerializable-Protocol.h>
#import <MobileTimer/MTSerializable-Protocol.h>
#import <MobileTimer/MTSyncable-Protocol.h>
#import <MobileTimer/SYChange-Protocol.h>

@class NSDate, NSString;

@interface MTSyncDismiss : NSObject <SYChange, MTProtoBufferSerializable, MTSerializable, MTSyncable>
{
    float _syncVersion;
    NSDate *_dismissDate;
    NSString *_identifier;
    NSDate *_date;
}

@property (readonly, nonatomic) long long changeType;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDate *dismissDate; // @synthesize dismissDate=_dismissDate;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *syncDate;
@property (readonly, nonatomic) NSString *syncIdentifier;
@property (readonly, nonatomic) unsigned long long syncType;
@property (nonatomic) float syncVersion; // @synthesize syncVersion=_syncVersion;

+ (id)deserialize:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)syncDismissOfObjectWithIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3;
+ (id)syncDismissOfObjectWithIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3 version:(float)arg4;
- (void).cxx_destruct;
- (BOOL)conflicts:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDismissedObjectIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3 version:(float)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)preferred:(id)arg1;
- (id)serialize;
- (void)serializeWithSerializer:(id)arg1;

@end
