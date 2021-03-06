//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSSet, NSString;

@interface UIKBCacheToken : NSObject <NSCopying>
{
    NSMutableArray *_components;
    NSString *_name;
    double _scale;
    int _emptyFields;
    NSSet *_transformationIdentifiers;
    long long _renderFlags;
}

@property (nonatomic) int displayHint;
@property (nonatomic) int emptyFields; // @synthesize emptyFields=_emptyFields;
@property (readonly, nonatomic) BOOL hasKey;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long renderFlags; // @synthesize renderFlags=_renderFlags;
@property (nonatomic) int rowHint;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) struct CGSize size;
@property (readonly, nonatomic) NSString *string;
@property (nonatomic) CDStruct_227bb23d styling;
@property (strong, nonatomic) NSSet *transformationIdentifiers; // @synthesize transformationIdentifiers=_transformationIdentifiers;

+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;
+ (id)tokenForKeyMask:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;
+ (id)tokenForKeyplane:(id)arg1;
+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize)arg4;
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;
- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeEdgeInsets:(struct UIEdgeInsets)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;
- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (void)annotateWithBool:(BOOL)arg1;
- (void)annotateWithInt:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithComponents:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;
- (void)resetAnnotations;
- (id)stringForComponentArray:(id)arg1 additionalValues:(CDUnknownBlockType)arg2;
- (id)stringForConstruction:(CDUnknownBlockType)arg1;
- (id)stringForKey:(id)arg1 state:(int)arg2;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2;
- (id)stringForSplitState:(BOOL)arg1 handBias:(long long)arg2;
- (id)stringForState:(int)arg1;

@end

