//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextElementDataSource.h>

@interface NTKUpNextNewsDataSource : NTKUpNextElementDataSource
{
    NTKUpNextElementDataSource *_newsDataSourceProxy;
}

@property (strong, nonatomic) NTKUpNextElementDataSource *newsDataSourceProxy; // @synthesize newsDataSourceProxy=_newsDataSourceProxy;

+ (id)bundleIdentifier;
+ (Class)nanoNewsDataSourceClass;
+ (id)sampleContentElements;
+ (BOOL)wantsReloadForSignificantTimeChange;
- (void).cxx_destruct;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setState:(unsigned long long)arg1;

@end

