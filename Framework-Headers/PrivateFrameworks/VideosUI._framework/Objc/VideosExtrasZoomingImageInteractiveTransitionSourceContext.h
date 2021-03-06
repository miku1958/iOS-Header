//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface VideosExtrasZoomingImageInteractiveTransitionSourceContext : NSObject
{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    unsigned long long _itemIndex;
    unsigned long long _supportedZoomingImageTransitionDirections;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property (strong, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property (nonatomic) unsigned long long supportedZoomingImageTransitionDirections; // @synthesize supportedZoomingImageTransitionDirections=_supportedZoomingImageTransitionDirections;

- (void).cxx_destruct;

@end

