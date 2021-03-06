//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolPickerSpec : PUViewControllerSpec
{
    double _toolParentViewEdgeSpacing;
    double _horizontalToolTopSpacing;
    double _horizontalToolBottomSpacing;
    double _dotSelectionIndicatorDistance;
    double _dashSelectionIndicatorDistance;
}

@property (nonatomic) double dashSelectionIndicatorDistance; // @synthesize dashSelectionIndicatorDistance=_dashSelectionIndicatorDistance;
@property (nonatomic) double dotSelectionIndicatorDistance; // @synthesize dotSelectionIndicatorDistance=_dotSelectionIndicatorDistance;
@property (nonatomic) double horizontalToolBottomSpacing; // @synthesize horizontalToolBottomSpacing=_horizontalToolBottomSpacing;
@property (nonatomic) double horizontalToolTopSpacing; // @synthesize horizontalToolTopSpacing=_horizontalToolTopSpacing;
@property (readonly, nonatomic) double interToolSpacing;
@property (nonatomic) double toolParentViewEdgeSpacing; // @synthesize toolParentViewEdgeSpacing=_toolParentViewEdgeSpacing;

- (id)init;

@end

