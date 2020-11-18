//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNumberFilter.h>

@interface PXInitialHysteresisNumberFilter : PXNumberFilter
{
    BOOL _didReachThreshold;
    double _offset;
    double _hysteresis;
}

@property (nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;

- (double)updatedOutput;

@end

