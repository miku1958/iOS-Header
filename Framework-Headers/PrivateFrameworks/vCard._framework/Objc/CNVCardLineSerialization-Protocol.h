//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <vCard/NSObject-Protocol.h>

@class CNVCardLine, NSArray, NSData, NSString;

@protocol CNVCardLineSerialization <NSObject>
- (BOOL)canSerializeArray:(NSArray *)arg1;
- (BOOL)canSerializeData:(NSData *)arg1;
- (BOOL)canSerializeString:(NSString *)arg1;
- (unsigned long long)estimatedDataLength;
- (void)insertLine:(CNVCardLine *)arg1 atMarker:(id)arg2;
- (id)insertionMarker;
- (void)serializeArray:(NSArray *)arg1 withItemSeparator:(NSString *)arg2;
- (void)serializeData:(NSData *)arg1;
- (void)serializeLine:(CNVCardLine *)arg1;
- (void)serializeOpaqueValue:(NSData *)arg1;
- (void)serializeString:(NSString *)arg1;
- (void)serializeVersionPlaceholder;
@end

