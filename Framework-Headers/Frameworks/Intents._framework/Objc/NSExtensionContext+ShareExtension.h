//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class INIntent;

@interface NSExtensionContext (ShareExtension)

@property (readonly, nonatomic) INIntent *intent;

- (BOOL)_intents_accessedIntent;
- (id)_intents_intent;
- (void)_intents_setAccessedIntent:(BOOL)arg1;
- (void)_intents_setIntent:(id)arg1;
@end
