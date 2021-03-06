//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardLineSerialization-Protocol.h>

@class NSString;
@protocol CNVCardSerializationStorage;

@interface CNVCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization>
{
    id<CNVCardSerializationStorage> _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serializerWithStorage:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canSerializeArray:(id)arg1;
- (BOOL)canSerializeData:(id)arg1;
- (BOOL)canSerializeString:(id)arg1;
- (unsigned long long)estimatedDataLength;
- (id)initWithStorage:(id)arg1;
- (void)insertLine:(id)arg1 atMarker:(id)arg2;
- (id)insertionMarker;
- (void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
- (void)serializeData:(id)arg1;
- (void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2;
- (void)serializeGroupingName:(id)arg1;
- (void)serializeLine:(id)arg1;
- (void)serializeName:(id)arg1;
- (void)serializeOpaqueValue:(id)arg1;
- (void)serializeParameters:(id)arg1;
- (void)serializeString:(id)arg1;
- (void)serializeVersionPlaceholder;
- (void)willSerializeValue;

@end

