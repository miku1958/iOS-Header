//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPDiagnosticsSnapshotFormatWrapper, HAPDiagnosticsSnapshotTypeWrapper, NSString;

@interface HAPSupportedDiagnosticsSnapshot : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPDiagnosticsSnapshotFormatWrapper *_format;
    HAPDiagnosticsSnapshotTypeWrapper *_type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HAPDiagnosticsSnapshotFormatWrapper *format; // @synthesize format=_format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) HAPDiagnosticsSnapshotTypeWrapper *type; // @synthesize type=_type;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithFormat:(id)arg1 type:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

