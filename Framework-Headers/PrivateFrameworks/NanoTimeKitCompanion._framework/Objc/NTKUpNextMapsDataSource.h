//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextElementDataSource.h>

@interface NTKUpNextMapsDataSource : NTKUpNextElementDataSource
{
    NTKUpNextElementDataSource *_proxy;
}

@property (readonly, nonatomic) NTKUpNextElementDataSource *proxy; // @synthesize proxy=_proxy;

+ (id)_homeCommuteElementWithDate:(id)arg1 headerTextProvider:(id)arg2 descriptionTextProvider:(id)arg3;
+ (id)bundleIdentifier;
+ (id)sampleContentElements;
+ (BOOL)wantsReloadForSignificantTimeChange;
- (void).cxx_destruct;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)pause;
- (void)resume;
- (void)setAllowsLocationUse:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setState:(unsigned long long)arg1;

@end

