//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDDrawableInfo.h>

@class EQKitEquation;

@interface TSWPEquationInfo : TSDDrawableInfo
{
    EQKitEquation *_equation;
}

@property (strong, nonatomic) EQKitEquation *equation; // @synthesize equation=_equation;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 mathMLNode:(struct _xmlNode *)arg2 fromXMLDoc:(struct _xmlDoc *)arg3;
- (Class)layoutClass;
- (Class)repClass;

@end

