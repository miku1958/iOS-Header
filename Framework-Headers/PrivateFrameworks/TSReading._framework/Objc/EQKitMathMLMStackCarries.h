//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataStackCarries-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMStackCarries : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackCarries>
{
    NSArray *mChildren;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (BOOL)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (const set_386565a4 *)mathMLAttributes;
- (id)schemataChildren;

@end

