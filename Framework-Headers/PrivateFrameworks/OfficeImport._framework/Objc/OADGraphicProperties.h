//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADDrawableProperties.h>

#import <OfficeImport/OADEffectsParent-Protocol.h>
#import <OfficeImport/OADProperties3DParent-Protocol.h>

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D, OADStroke;

__attribute__((visibility("hidden")))
@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText:1;
    unsigned int mIsBehindText:1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)effects;
- (id)exts;
- (id)fill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)hasEffects;
- (BOOL)hasExts;
- (BOOL)hasFill;
- (BOOL)hasIsBehindText;
- (BOOL)hasNonEmptyFill;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;
- (BOOL)hasStroke;
- (id)initWithDefaults;
- (BOOL)isBehindText;
- (BOOL)isEqual:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)scene3D;
- (void)setEffects:(id)arg1;
- (void)setExts:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setIsBehindText:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (void)setStroke:(id)arg1;
- (id)shape3D;
- (id)stroke;

@end
