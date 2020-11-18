//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIKBScreenTraits, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneTransformationContext : NSObject
{
    BOOL _usesScriptSwitch;
    UIKBTree *_activeKeyboard;
    NSString *_currentKeyplaneName;
    UIKBScreenTraits *_screenTraits;
    double _resizingOffset;
}

@property (strong, nonatomic) UIKBTree *activeKeyboard; // @synthesize activeKeyboard=_activeKeyboard;
@property (strong, nonatomic) NSString *currentKeyplaneName; // @synthesize currentKeyplaneName=_currentKeyplaneName;
@property (nonatomic) double resizingOffset; // @synthesize resizingOffset=_resizingOffset;
@property (strong, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property (nonatomic) BOOL usesScriptSwitch; // @synthesize usesScriptSwitch=_usesScriptSwitch;

- (void).cxx_destruct;

@end
