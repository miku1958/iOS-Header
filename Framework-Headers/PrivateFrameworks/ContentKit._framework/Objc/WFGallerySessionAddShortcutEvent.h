//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFGallerySessionAddShortcutEvent : WFEvent
{
    NSString *_key;
    NSString *_sessionIdentifier;
    NSString *_shortcutIdentifier;
}

@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (copy, nonatomic) NSString *shortcutIdentifier; // @synthesize shortcutIdentifier=_shortcutIdentifier;

+ (Class)codableEventClass;
- (void).cxx_destruct;

@end
