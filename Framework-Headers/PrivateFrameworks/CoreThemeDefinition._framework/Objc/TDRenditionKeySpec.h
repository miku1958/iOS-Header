//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <CoreThemeDefinition/TDElementAttributes-Protocol.h>

@class TDThemeDirection, TDThemeDrawingLayer, TDThemeElement, TDThemeGraphicsFeatureSetClass, TDThemeIdiom, TDThemePart, TDThemePresentationState, TDThemeSize, TDThemeState, TDThemeUISizeClass, TDThemeValue;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes>
{
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    struct _renditionkeytoken _stackScratchKey[16];
    struct _renditionkeytoken *_scratchKey;
}

@property (strong, nonatomic) TDThemeDirection *direction; // @dynamic direction;
@property (strong, nonatomic) TDThemeElement *element; // @dynamic element;
@property (strong, nonatomic) TDThemeGraphicsFeatureSetClass *graphicsFeatureSetClass; // @dynamic graphicsFeatureSetClass;
@property (strong, nonatomic) TDThemeIdiom *idiom; // @dynamic idiom;
@property (strong, nonatomic) TDThemeDrawingLayer *layer; // @dynamic layer;
@property (strong, nonatomic) TDThemePart *part; // @dynamic part;
@property (strong, nonatomic) TDThemePresentationState *presentationState; // @dynamic presentationState;
@property (strong, nonatomic) TDThemeState *previousState; // @dynamic previousState;
@property (strong, nonatomic) TDThemeValue *previousValue; // @dynamic previousValue;
@property (strong, nonatomic) TDThemeSize *size; // @dynamic size;
@property (strong, nonatomic) TDThemeUISizeClass *sizeClassHorizontal; // @dynamic sizeClassHorizontal;
@property (strong, nonatomic) TDThemeUISizeClass *sizeClassVertical; // @dynamic sizeClassVertical;
@property (strong, nonatomic) TDThemeState *state; // @dynamic state;
@property (strong, nonatomic) TDThemeValue *value; // @dynamic value;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (long long)attributeCount;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataFromAttributes;
- (void)dealloc;
- (id)debugDescription;
- (unsigned int)dimension1;
- (unsigned int)dimension2;
- (void)getKey:(struct _renditionkeytoken *)arg1;
- (const struct _renditionkeytoken *)key;
- (id)keyDescription;
- (const struct _renditionkeyfmt *)keyFormat;
- (unsigned int)memoryClass;
- (unsigned int)nameIdentifier;
- (unsigned int)scaleFactor;
- (id)scaleFactorString;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setAttributesFromData:(id)arg1;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken *)arg1 withDocument:(id)arg2;
- (void)setDimension1:(unsigned int)arg1;
- (void)setDimension2:(unsigned int)arg1;
- (void)setMemoryClass:(unsigned int)arg1;
- (void)setNameIdentifier:(unsigned int)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (void)setScaleFactorString:(id)arg1;
- (void)setSubtype:(unsigned int)arg1;
- (unsigned int)subtype;

@end

