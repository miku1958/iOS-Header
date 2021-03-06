//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPCharacteristicValueTransitionFetch, HAPCharacteristicValueTransitionStart, NSString;

@interface HAPCharacteristicValueTransitionControl : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPCharacteristicValueTransitionFetch *_transitionFetch;
    HAPCharacteristicValueTransitionStart *_transitionStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) HAPCharacteristicValueTransitionFetch *transitionFetch; // @synthesize transitionFetch=_transitionFetch;
@property (strong, nonatomic) HAPCharacteristicValueTransitionStart *transitionStart; // @synthesize transitionStart=_transitionStart;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTransitionFetch:(id)arg1 transitionStart:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

