//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry
{
    NSString *_filterType;
}

@property (copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (BOOL)canTransitionToEffect:(id)arg1;
- (id)description;
- (BOOL)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;

@end

