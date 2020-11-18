//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction : MNTransitInstruction
{
    GEOComposedRouteStep *_step;
    NSDictionary *_overridenInstructionsMapping;
}

@property (readonly, nonatomic) NSDictionary *overridenInstructionsMapping; // @synthesize overridenInstructionsMapping=_overridenInstructionsMapping;
@property (readonly, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;

+ (id)instructionForStep:(id)arg1 context:(long long)arg2;
+ (id)instructionForStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;
- (void).cxx_destruct;
- (id)initWithStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;
- (id)instructionSet;

@end
