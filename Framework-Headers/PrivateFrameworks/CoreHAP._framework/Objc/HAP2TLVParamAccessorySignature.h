//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAP2TLVParamServiceList, HAPTLVUnsignedNumberValue, NSString;

@interface HAP2TLVParamAccessorySignature : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_accessoryID;
    HAP2TLVParamServiceList *_serviceList;
}

@property (strong, nonatomic) HAPTLVUnsignedNumberValue *accessoryID; // @synthesize accessoryID=_accessoryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HAP2TLVParamServiceList *serviceList; // @synthesize serviceList=_serviceList;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithAccessoryID:(id)arg1 serviceList:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

