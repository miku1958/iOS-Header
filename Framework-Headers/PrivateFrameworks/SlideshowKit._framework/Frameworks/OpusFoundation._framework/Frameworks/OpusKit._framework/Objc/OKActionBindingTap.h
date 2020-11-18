//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKActionBinding.h>

#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer;

@interface OKActionBindingTap : OKActionBinding <UIGestureRecognizerDelegate>
{
    unsigned long long _numberOfTapsRequired;
    unsigned long long _numberOfTouchesRequired;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property (readonly) Class superclass;

+ (id)supportedSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)handleTap:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (BOOL)ownsGestureRecognizer:(id)arg1;
- (BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)unload;

@end
