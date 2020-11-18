//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CLKGaugeProvider : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _paused;
    BOOL _finalized;
    long long _style;
    NSArray *_gaugeColors;
    NSArray *_gaugeColorLocations;
    NSString *_accessibilityLabel;
}

@property (strong, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (nonatomic) BOOL finalized; // @synthesize finalized=_finalized;
@property (strong, nonatomic) NSArray *gaugeColorLocations; // @synthesize gaugeColorLocations=_gaugeColorLocations;
@property (strong, nonatomic) NSArray *gaugeColors; // @synthesize gaugeColors=_gaugeColors;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (id)gaugeProviderWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)needsTimerUpdates;
- (double)progressFractionForNow:(id)arg1;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (void)validate;

@end

