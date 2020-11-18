//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKActionBinding.h>

@class NSString;

@interface OKActionBindingCustom : OKActionBinding
{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)supportedSettings;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (BOOL)ownsGestureRecognizer:(id)arg1;
- (BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)unload;

@end

