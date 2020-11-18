//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCrossfadingImageView;

__attribute__((visibility("hidden")))
@interface _SFURLLabelAccessoryItem : NSObject
{
    BOOL _centerAligned;
    SFCrossfadingImageView *_view;
    double _spacing;
    double _squishedSpacing;
    double _squishedVerticalOffset;
    double _verticalOffset;
    struct CGSize _size;
    struct CGSize _squishedSize;
    struct CGSize _interpolatedSize;
}

@property (nonatomic) BOOL centerAligned; // @synthesize centerAligned=_centerAligned;
@property (nonatomic) struct CGSize interpolatedSize; // @synthesize interpolatedSize=_interpolatedSize;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (nonatomic) double spacing; // @synthesize spacing=_spacing;
@property (nonatomic) struct CGSize squishedSize; // @synthesize squishedSize=_squishedSize;
@property (nonatomic) double squishedSpacing; // @synthesize squishedSpacing=_squishedSpacing;
@property (nonatomic) double squishedVerticalOffset; // @synthesize squishedVerticalOffset=_squishedVerticalOffset;
@property (nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property (strong, nonatomic) SFCrossfadingImageView *view; // @synthesize view=_view;

- (void).cxx_destruct;

@end
