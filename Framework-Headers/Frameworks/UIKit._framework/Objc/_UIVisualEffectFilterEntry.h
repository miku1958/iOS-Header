//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIVisualEffectDiffable-Protocol.h>

@class CAFilter, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable>
{
    CAFilter *_filter;
    NSDictionary *_requestedValues;
    NSDictionary *_identityValues;
    double _requestedScaleHint;
    double _identityScaleHint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CAFilter *filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (nonatomic) double identityScaleHint; // @synthesize identityScaleHint=_identityScaleHint;
@property (copy, nonatomic) NSDictionary *identityValues; // @synthesize identityValues=_identityValues;
@property (nonatomic) double requestedScaleHint; // @synthesize requestedScaleHint=_requestedScaleHint;
@property (copy, nonatomic) NSDictionary *requestedValues; // @synthesize requestedValues=_requestedValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilter:(id)arg1 requestedValues:(id)arg2 identityValues:(id)arg3;
- (BOOL)isSameTypeOfEffect:(id)arg1;
- (double)scaleHintAsRequested:(BOOL)arg1;
- (id)valueAsRequested:(BOOL)arg1;

@end
