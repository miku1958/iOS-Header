//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

#import <CoreHAP/HAP2EncodedCharacteristicRequest-Protocol.h>

@class NSArray, NSString;

@interface HAP2ControllerReadRequest : HAP2LoggingObject <HAP2EncodedCharacteristicRequest>
{
    NSArray *_originalCharacteristics;
}

@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *originalCharacteristics; // @synthesize originalCharacteristics=_originalCharacteristics;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithCharacteristics:(id)arg1;
- (id)serialize;

@end

