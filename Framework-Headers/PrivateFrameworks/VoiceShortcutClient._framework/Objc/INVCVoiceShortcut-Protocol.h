//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutClient/NSObject-Protocol.h>

@class INShortcut, NSString;

@protocol INVCVoiceShortcut <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *phrase;
@property (readonly, nonatomic) INShortcut *shortcut;

@end
