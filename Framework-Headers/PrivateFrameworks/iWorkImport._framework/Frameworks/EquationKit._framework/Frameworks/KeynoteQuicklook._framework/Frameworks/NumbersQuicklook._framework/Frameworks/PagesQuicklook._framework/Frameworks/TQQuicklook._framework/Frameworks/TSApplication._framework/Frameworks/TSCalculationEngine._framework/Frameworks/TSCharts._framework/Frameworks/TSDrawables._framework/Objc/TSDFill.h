//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSDrawables/TSDPathPainter-Protocol.h>
#import <TSDrawables/TSSPreset-Protocol.h>
#import <TSDrawables/TSSPropertyCommandSerializing-Protocol.h>
#import <TSDrawables/TSSPropertyValueArchiving-Protocol.h>

@class NSString, TSUColor;

@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSSPropertyValueArchiving, TSDPathPainter, TSSPreset>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long fillType;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) TSUColor *referenceColor;
@property (readonly, nonatomic) TSUColor *referenceColorForFontArchiving;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
+ (id)p_subclassRegistry;
+ (void)registerSubclass:(Class)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)drawsInOneStep;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)isClear;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)arg1;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;

@end

