//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HAPCharacteristicValueRange : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_lowerBound;
    NSData *_upperBound;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *lowerBound; // @synthesize lowerBound=_lowerBound;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *upperBound; // @synthesize upperBound=_upperBound;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithLowerBound:(id)arg1 upperBound:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

