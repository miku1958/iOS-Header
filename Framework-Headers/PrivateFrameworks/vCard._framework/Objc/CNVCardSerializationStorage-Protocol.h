//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <vCard/NSObject-Protocol.h>

@class NSData, NSString;

@protocol CNVCardSerializationStorage <NSObject>
- (void)appendData:(NSData *)arg1;
- (void)appendFormat:(NSString *)arg1;
- (void)appendString:(NSString *)arg1;
- (void)appendString:(NSString *)arg1 usingEncoding:(unsigned long long)arg2;
- (unsigned long long)currentLength;
- (unsigned long long)estimatedDataLength;
- (void)insertString:(NSString *)arg1 atMarker:(id)arg2;
- (id)insertionMarker;
@end

