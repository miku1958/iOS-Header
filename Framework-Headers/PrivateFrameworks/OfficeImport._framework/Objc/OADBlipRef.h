//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, OADBlip;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <NSCopying>
{
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
+ (int)blipTypeForContentType:(id)arg1;
+ (int)blipTypeForExtension:(id)arg1;
+ (int)blipTypeForImageData:(id)arg1;
+ (id)inflatedExtensionForGzippedExtension:(id)arg1;
- (void).cxx_destruct;
- (void)addEffect:(id)arg1;
- (id)blip;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)effectAtIndex:(unsigned long long)arg1;
- (unsigned long long)effectCount;
- (id)effects;
- (unsigned long long)hash;
- (int)index;
- (id)init;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNull;
- (id)name;
- (void)removeEffectAtIndex:(unsigned long long)arg1;
- (void)setBlip:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setIndex:(int)arg1;
- (void)setName:(id)arg1;

@end

