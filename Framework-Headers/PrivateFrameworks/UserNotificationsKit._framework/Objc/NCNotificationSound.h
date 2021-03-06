//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface NCNotificationSound : NSObject <BSDescriptionProviding>
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned long long _soundBehavior;
    NSString *_ringtoneName;
    NSDictionary *_vibrationPattern;
    BOOL _repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    NSString *_songPath;
    TLAlertConfiguration *_alertConfiguration;
}

@property (readonly, copy, nonatomic) TLAlertConfiguration *alertConfiguration; // @synthesize alertConfiguration=_alertConfiguration;
@property (readonly, copy, nonatomic) NSDictionary *controllerAttributes; // @synthesize controllerAttributes=_controllerAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property (readonly, nonatomic, getter=isRepeating) BOOL repeats; // @synthesize repeats=_repeats;
@property (readonly, copy, nonatomic) NSString *ringtoneName; // @synthesize ringtoneName=_ringtoneName;
@property (readonly, copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property (readonly, nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property (readonly, nonatomic) long long soundType; // @synthesize soundType=_soundType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property (readonly, copy, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationSound:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

