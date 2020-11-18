//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitLayoutSchemataSpace-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMSpace : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataSpace>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (BOOL)isSpaceLike;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;

@end
