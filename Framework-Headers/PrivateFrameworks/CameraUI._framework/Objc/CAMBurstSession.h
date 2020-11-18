//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject
{
    BOOL _finalized;
    unsigned long long _estimatedCount;
    unsigned long long _count;
    CIBurstImageSet *__burstImageSet;
}

@property (readonly, nonatomic) CIBurstImageSet *_burstImageSet; // @synthesize _burstImageSet=__burstImageSet;
@property (nonatomic, setter=_setCount:) unsigned long long count; // @synthesize count=_count;
@property (nonatomic, setter=_setEstimatedCount:) unsigned long long estimatedCount; // @synthesize estimatedCount=_estimatedCount;
@property (nonatomic, getter=_isFinalized, setter=_setFinalized:) BOOL finalized; // @synthesize finalized=_finalized;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)addStillImageCaptureResult:(id)arg1;
- (void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2;
- (id)description;
- (id)init;
- (id)performBurstAnalysisForDevice:(long long)arg1;

@end
