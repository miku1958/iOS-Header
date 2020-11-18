//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIResponder;

@interface UIKBTextEditingTraits : NSObject
{
    BOOL _canToggleBoldface;
    BOOL _canToggleItalics;
    BOOL _canToggleUnderline;
    BOOL _supportStyling;
    BOOL _canCut;
    BOOL _canCopy;
    BOOL _canPaste;
    BOOL _canMoveCursorLeft;
    BOOL _canMoveCursorRight;
    BOOL _isBold;
    BOOL _isItalicized;
    BOOL _isUnderlined;
    UIResponder *_firstResponder;
    UIResponder *_actionResponder;
}

@property (readonly, weak, nonatomic) UIResponder *actionResponder; // @synthesize actionResponder=_actionResponder;
@property (readonly, nonatomic) BOOL canCopy; // @synthesize canCopy=_canCopy;
@property (nonatomic) BOOL canCut; // @synthesize canCut=_canCut;
@property (readonly, nonatomic) BOOL canMoveCursorLeft; // @synthesize canMoveCursorLeft=_canMoveCursorLeft;
@property (readonly, nonatomic) BOOL canMoveCursorRight; // @synthesize canMoveCursorRight=_canMoveCursorRight;
@property (readonly, nonatomic) BOOL canPaste; // @synthesize canPaste=_canPaste;
@property (readonly, nonatomic) BOOL canToggleBoldface; // @synthesize canToggleBoldface=_canToggleBoldface;
@property (readonly, nonatomic) BOOL canToggleItalics; // @synthesize canToggleItalics=_canToggleItalics;
@property (readonly, nonatomic) BOOL canToggleUnderline; // @synthesize canToggleUnderline=_canToggleUnderline;
@property (readonly, weak, nonatomic) UIResponder *firstResponder; // @synthesize firstResponder=_firstResponder;
@property (readonly, nonatomic) BOOL isBold; // @synthesize isBold=_isBold;
@property (readonly, nonatomic) BOOL isItalicized; // @synthesize isItalicized=_isItalicized;
@property (readonly, nonatomic) BOOL isUnderlined; // @synthesize isUnderlined=_isUnderlined;
@property (readonly, nonatomic) BOOL supportStyling; // @synthesize supportStyling=_supportStyling;

+ (id)traitsForEditingInteractionWithFirstResponder:(id)arg1 actionResponder:(id)arg2 keyMaskFlags:(unsigned long long)arg3;
+ (id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)initWithResponder:(id)arg1 actionResponder:(id)arg2 keyMaskFlags:(unsigned long long)arg3 sender:(id)arg4;

@end
