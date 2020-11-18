//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUExtrasBorderedImageView;

@interface MPUExtrasZoomingImageTransitionContext : NSObject
{
    BOOL _interactive;
    MPUExtrasBorderedImageView *_zoomingImageView;
    unsigned long long _itemIndex;
    unsigned long long _appearState;
}

@property (nonatomic) unsigned long long appearState; // @synthesize appearState=_appearState;
@property (nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property (nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property (strong, nonatomic) MPUExtrasBorderedImageView *zoomingImageView; // @synthesize zoomingImageView=_zoomingImageView;

- (void).cxx_destruct;
- (id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(BOOL)arg4;

@end
