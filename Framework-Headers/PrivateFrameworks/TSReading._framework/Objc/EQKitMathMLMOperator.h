//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLMToken.h>

#import <TSReading/EQKitLayoutSchemataOperator-Protocol.h>
#import <TSReading/EQKitOperator-Protocol.h>

@class NSString;

@interface EQKitMathMLMOperator : EQKitMathMLMToken <EQKitOperator, EQKitLayoutSchemataOperator>
{
    unsigned short mOperatorId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithString:(id)arg1 environment:(id)arg2;
- (BOOL)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (const set_386565a4 *)mathMLAttributes;
- (id)operatorCore;
- (unsigned short)operatorId;
- (unsigned int)operatorUnicharOrNul;
- (id)schemataOperator;

@end

