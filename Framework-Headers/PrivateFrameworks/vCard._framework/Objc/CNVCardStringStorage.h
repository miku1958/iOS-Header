//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardSerializationStorage-Protocol.h>

@class NSMutableString, NSString;

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage>
{
    NSMutableString *_string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)storageWithString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (unsigned long long)currentLength;
- (unsigned long long)estimatedDataLength;
- (id)initWithString:(id)arg1;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (id)insertionMarker;

@end

