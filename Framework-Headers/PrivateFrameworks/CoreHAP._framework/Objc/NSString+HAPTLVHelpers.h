//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <CoreHAP/HAP2AccessoryCharacteristicEncodableBodyValue-Protocol.h>

@interface NSString (HAPTLVHelpers) <HAP2AccessoryCharacteristicEncodableBodyValue>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;
@end

