//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFileHandle.h>

@class NSData, NSNumber;

@interface NEFlowDivertFileHandle : NEFileHandle
{
    NSNumber *_controlUnit;
    NSData *_keyMaterial;
}

@property (readonly) NSNumber *controlUnit; // @synthesize controlUnit=_controlUnit;
@property (readonly) NSData *keyMaterial; // @synthesize keyMaterial=_keyMaterial;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)getUnitForSocket:(int)arg1;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)arg1;
- (id)initFlowDivertDataSocket;
- (id)initFromDictionary:(id)arg1;
- (unsigned long long)type;

@end

