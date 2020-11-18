//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKBRenderingContext : NSObject <NSCopying>
{
    unsigned long long _shiftState;
    UIKBRenderConfig *_renderConfig;
    long long _keyboardType;
    long long _handBias;
}

@property (nonatomic) long long handBias; // @synthesize handBias=_handBias;
@property (nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property (strong, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property (nonatomic) unsigned long long shiftState; // @synthesize shiftState=_shiftState;

+ (id)renderingContextForRenderConfig:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRenderConfig:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

