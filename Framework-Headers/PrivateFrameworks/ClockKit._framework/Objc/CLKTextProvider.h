//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class CLKTextProviderCache, NSMutableArray, NSMutableDictionary, UIColor;

@interface CLKTextProvider : NSObject <NSSecureCoding, NSCopying>
{
    CLKTextProviderCache *_defaultCache;
    NSMutableDictionary *_cachesByKey;
    NSMutableArray *_recentCacheKeys;
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    struct NSNumber *_secondTimerToken;
    struct NSNumber *_minuteTimerToken;
    struct NSNumber *_30fpsTimerToken;
    BOOL _finalized;
    BOOL _paused;
    BOOL _italicized;
    BOOL _useMonospacedNumbersForTimeTravel;
    UIColor *_tintColor;
    long long _shrinkTextPreference;
    long long _timeTravelUpdateFrequency;
}

@property (nonatomic) BOOL italicized; // @synthesize italicized=_italicized;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) long long shrinkTextPreference; // @synthesize shrinkTextPreference=_shrinkTextPreference;
@property (nonatomic) long long timeTravelUpdateFrequency; // @synthesize timeTravelUpdateFrequency=_timeTravelUpdateFrequency;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (nonatomic) BOOL useMonospacedNumbersForTimeTravel; // @synthesize useMonospacedNumbersForTimeTravel=_useMonospacedNumbersForTimeTravel;

+ (id)localizableTextProviderWithStringsFileFormatKey:(id)arg1 textProviders:(id)arg2;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1 shortTextKey:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithFormat:(id)arg1;
+ (id)textProviderWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)textProviderWithJSONObjectRepresentation:(id)arg1;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_cacheForKey:(id)arg1;
- (void)_commonInit;
- (id)_defaultCache;
- (id)_description;
- (void)_endSession;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_italicize:(id)arg1;
- (void)_localeChanged;
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (void)_maybeStartOrStopUpdates;
- (void)_pruneCacheKeysIfNecessary;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(BOOL)arg2 designatorExists:(BOOL *)arg3;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(BOOL *)arg2;
- (void)_update;
- (long long)_updateFrequency;
- (void)_validate;
- (id)attributedString;
- (id)attributedTextAndSize:(struct CGSize *)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 now:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)finalizedCopy;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (struct CGSize)minimumSizeWithStyle:(id)arg1 now:(id)arg2;
- (id)sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (void)validate;

@end

