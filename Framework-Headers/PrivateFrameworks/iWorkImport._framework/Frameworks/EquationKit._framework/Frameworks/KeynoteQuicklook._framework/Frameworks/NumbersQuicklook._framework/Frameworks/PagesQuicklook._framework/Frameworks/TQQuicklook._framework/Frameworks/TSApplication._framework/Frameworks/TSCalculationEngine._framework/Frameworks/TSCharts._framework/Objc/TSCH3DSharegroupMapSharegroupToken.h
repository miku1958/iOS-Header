//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DSharegroupToken.h>

@class TSCH3DGPUSharegroup;
@protocol MTLDevice;

@interface TSCH3DSharegroupMapSharegroupToken : TSCH3DSharegroupToken
{
    id<MTLDevice> _device;
    TSCH3DGPUSharegroup *_sharegroup;
}

@property (strong, nonatomic) id<MTLDevice> device; // @synthesize device=_device;
@property (strong, nonatomic) TSCH3DGPUSharegroup *sharegroup; // @synthesize sharegroup=_sharegroup;

+ (id)tokenWithDevice:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasInterestForDiscreteGraphics;
- (id)initWithDevice:(id)arg1;
- (void)releaseSharegroup:(id)arg1;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (id)tokenSharegroup;

@end
