//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPTextViewStyle;

__attribute__((visibility("hidden")))
@interface LPTextRowStyle : NSObject
{
    LPTextViewStyle *_leading;
    LPTextViewStyle *_trailing;
    long long _balancingMode;
}

@property (nonatomic) long long balancingMode; // @synthesize balancingMode=_balancingMode;
@property (readonly, nonatomic) LPTextViewStyle *leading; // @synthesize leading=_leading;
@property (readonly, nonatomic) LPTextViewStyle *trailing; // @synthesize trailing=_trailing;

- (void).cxx_destruct;
- (void)applyToAllTextViewStyles:(CDUnknownBlockType)arg1;
- (id)initWithPlatform:(long long)arg1;
- (id)left;
- (id)right;

@end
