//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/ShotflowDetector.h>

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANFDv2 : ShotflowDetector
{
}

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
- (id)initWithNetwork:(id)arg1;
- (id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2;
- (id)mergeHeadsBoxes:(id)arg1;
- (id)nmsBoxes:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;

@end
