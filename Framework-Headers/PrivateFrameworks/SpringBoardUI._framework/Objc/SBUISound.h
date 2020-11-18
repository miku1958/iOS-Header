//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface SBUISound : NSObject
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned int _resolvedSystemSoundID;
    unsigned long long _soundBehavior;
    NSDictionary *_vibrationPattern;
    TLAlertConfiguration *_alertConfiguration;
    CDUnknownBlockType _completionBlock;
    NSString *_songPath;
    long long _eventType;
    long long _alertType;
}

@property (nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID; // @synthesize _resolvedSystemSoundID;
@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration; // @synthesize alertConfiguration=_alertConfiguration;
@property (nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property (nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property (copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property (nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property (nonatomic) long long soundType; // @synthesize soundType=_soundType;
@property (nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property (strong, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;

+ (id)soundWithFeedbackEventType:(long long)arg1;
- (void).cxx_destruct;
- (CDUnknownBlockType)_completionBlock;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithFeedbackEventType:(long long)arg1;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (id)initWithToneAlertConfiguration:(id)arg1;
- (BOOL)isPlaying;
- (BOOL)playInEvironments:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;

@end

