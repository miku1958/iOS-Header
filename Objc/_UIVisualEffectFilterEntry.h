//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIVisualEffectDiffable-Protocol.h>

@class CAFilter, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable>
{
    CAFilter *_filter;
    NSString *_filterType;
    NSDictionary *_configurationValues;
    NSDictionary *_requestedValues;
    NSDictionary *_identityValues;
    double _requestedScaleHint;
    double _identityScaleHint;
    NSString *_filterName;
}

@property (copy, nonatomic) NSDictionary *configurationValues; // @synthesize configurationValues=_configurationValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CAFilter *filter;
@property (readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property (copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double identityScaleHint; // @synthesize identityScaleHint=_identityScaleHint;
@property (copy, nonatomic) NSDictionary *identityValues; // @synthesize identityValues=_identityValues;
@property (nonatomic) double requestedScaleHint; // @synthesize requestedScaleHint=_requestedScaleHint;
@property (copy, nonatomic) NSDictionary *requestedValues; // @synthesize requestedValues=_requestedValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canTransitionToEffect:(id)arg1;
- (void)convertToIdentity;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)forceUniqueName;
- (id)initWithFilterType:(id)arg1 configurationValues:(id)arg2 requestedValues:(id)arg3 identityValues:(id)arg4;
- (BOOL)isSameTypeOfEffect:(id)arg1;
- (double)scaleHintAsRequested:(BOOL)arg1;
- (id)valueAsRequested:(BOOL)arg1;

@end

