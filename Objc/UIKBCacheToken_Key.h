//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBCacheToken.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBCacheToken_Key : UIKBCacheToken
{
    CDUnion_2c5a7b77 _style;
    NSString *_cacheDisplayString;
    NSString *_cacheSecondaryDisplayString;
    NSString *_annotationString;
    int _displayTypeHint;
    int _displayRowHint;
    struct CGSize _size;
    int _state;
    int _clipCorners;
    BOOL _usesInsets;
    struct UIEdgeInsets _displayInsets;
}

+ (id)tokenForKey:(id)arg1 style:(CDStruct_961fb75c)arg2;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_961fb75c)arg2 displayInsets:(struct UIEdgeInsets)arg3;
- (id)_initWithKey:(id)arg1 style:(CDStruct_961fb75c)arg2 displayInsets:(struct UIEdgeInsets)arg3;
- (id)_stringWithAdditionalValues:(CDUnknownBlockType)arg1;
- (void)annotateWithBool:(BOOL)arg1;
- (void)annotateWithInt:(int)arg1;
- (void)annotateWithString:(id)arg1;
- (void)dealloc;
- (int)displayHint;
- (BOOL)hasKey;
- (void)resetAnnotations;
- (int)rowHint;
- (void)setDisplayHint:(int)arg1;
- (void)setRowHint:(int)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setStyling:(CDStruct_961fb75c)arg1;
- (struct CGSize)size;
- (id)string;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2;
- (CDStruct_961fb75c)styling;

@end

