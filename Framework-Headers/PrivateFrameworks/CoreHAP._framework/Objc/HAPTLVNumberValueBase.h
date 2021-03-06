//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HAPTLVNumberValueBase : NSObject <NSCopying, HAPTLVProtocol>
{
    NSNumber *_value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSNumber *value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)_parseFromData:(const char *)arg1 length:(unsigned long long)arg2 status:(int *)arg3;
- (id)_serialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

