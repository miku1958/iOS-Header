//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MPNowPlayingInfoLanguageOption : NSObject
{
    void *_mrLanguageOption;
}

@property (readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property (readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property (readonly, nonatomic) NSArray *languageOptionCharacteristics; // @dynamic languageOptionCharacteristics;
@property (readonly, nonatomic) unsigned long long languageOptionType; // @dynamic languageOptionType;
@property (readonly, nonatomic) NSString *languageTag; // @dynamic languageTag;
@property (readonly, nonatomic) void *mrLanguageOption; // @synthesize mrLanguageOption=_mrLanguageOption;

- (void)dealloc;
- (id)initWithMRLanguageOption:(void *)arg1;
- (id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;
- (BOOL)isAutomaticAudibleLanguageOption;
- (BOOL)isAutomaticLegibleLanguageOption;

@end

