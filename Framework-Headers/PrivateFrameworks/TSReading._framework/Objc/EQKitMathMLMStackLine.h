//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataStackLine-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSString;

@interface EQKitMathMLMStackLine : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackLine>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (unsigned long long)schemataThickness;

@end
