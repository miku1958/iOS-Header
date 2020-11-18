//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitMathMLNode-Protocol.h>

@interface EQKitMathMLTernaryNode : EQKitMathMLNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
    EQKitMathMLNode *mThird;
}

- (void)dealloc;
- (id)init;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
- (BOOL)isBaseFontNameUsed;
- (const set_25e6ba53 *)mathMLAttributes;

@end

