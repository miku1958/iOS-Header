//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@protocol PXPlacesMapPipelineComponentProvider;

@protocol PXPlacesMapPipelineComponent <NSObject>

@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

- (void)reset;
@end
