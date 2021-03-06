//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class CLKClockTimerToken, NSMutableDictionary, UIColor;

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_timerToken;
    BOOL _finalized;
    BOOL _paused;
    UIColor *_tintColor;
    double _backgroundRingAlpha;
}

@property double backgroundRingAlpha; // @synthesize backgroundRingAlpha=_backgroundRingAlpha;
@property (readonly, nonatomic) BOOL needsTimerUpdates;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (void)_commonInit;
- (void)_maybeStartOrStopUpdates;
- (BOOL)_needsUpdates;
- (double)_progressFractionForNow:(id)arg1;
- (void)_update;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)progressFractionForNow:(id)arg1;
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopUpdatesForToken:(id)arg1;
- (long long)timeTravelUpdateFrequency;
- (BOOL)validate;

@end

