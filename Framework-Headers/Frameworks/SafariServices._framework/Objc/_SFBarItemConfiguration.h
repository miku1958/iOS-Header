//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SFBarItemConfiguration : NSObject
{
    BOOL _enabled;
    BOOL _hidden;
    CDUnknownBlockType _menuProvider;
}

@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (copy, nonatomic) CDUnknownBlockType menuProvider; // @synthesize menuProvider=_menuProvider;

- (void).cxx_destruct;
- (id)init;

@end

