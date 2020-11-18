//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapSnapshotCreator, NSString, UIImage, VKMapSnapshotCreator;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotRequest : NSObject
{
    id _requester;
    id _context;
    struct CLLocationCoordinate2D _coordinate;
    unsigned long long _zoomLevel;
    struct CGSize _size;
    UIImage *_image;
    NSString *_attributionString;
    MKMapSnapshotCreator *_delegate;
    VKMapSnapshotCreator *_snapshotCreator;
}

@property (strong, nonatomic) NSString *attributionString; // @synthesize attributionString=_attributionString;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (weak, nonatomic) MKMapSnapshotCreator *delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) id requester; // @synthesize requester=_requester;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (void)start;

@end

