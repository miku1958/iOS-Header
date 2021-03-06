//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKActionBinding.h>

@interface OKActionBindingScroll : OKActionBinding
{
    unsigned long long _triggerLimit;
    unsigned long long _probability;
    struct CGPoint _offset;
    BOOL _continuous;
}

@property (nonatomic) struct CGPoint offset; // @synthesize offset=_offset;

+ (id)supportedSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)unload;

@end

