//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SiriActivationSource.h>

#import <SiriActivation/SiriButtonSource-Protocol.h>

@class NSMutableArray, NSString, SiriContext, SiriLongPressButtonContext;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource>
{
    double _longPressInterval;
    long long _buttonIdentifier;
    NSMutableArray *_lock_activityAssertions;
    SiriLongPressButtonContext *_context;
}

@property (nonatomic) long long buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
@property (strong, nonatomic) SiriContext *context; // @dynamic context;
@property (strong, nonatomic) SiriLongPressButtonContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *lock_activityAssertions; // @synthesize lock_activityAssertions=_lock_activityAssertions;
@property (nonatomic) double longPressInterval; // @synthesize longPressInterval=_longPressInterval;
@property (readonly) Class superclass;

+ (id)longPressButtonForIdentifier:(long long)arg1;
+ (id)new;
- (void).cxx_destruct;
- (id)_initWithButtonIdentifier:(long long)arg1;
- (void)configureConnection;
- (void)didRecognizeButtonSinglePressUp;
- (void)didRecognizeLongPress;
- (id)init;
- (void)overrideConnectedToCarPlay:(BOOL)arg1;
- (void)overrideConnectedToTrustedCarPlay:(BOOL)arg1;
- (id)prepareForActivation;
- (id)speechInteractionActivityWithTimestamp:(double)arg1;

@end
