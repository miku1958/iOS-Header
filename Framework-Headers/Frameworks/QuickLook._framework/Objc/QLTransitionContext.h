//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class QLPreviewController, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface QLTransitionContext : NSObject <NSSecureCoding>
{
    QLPreviewController *_previewController;
    UIImage *_sourceViewSnapshotImage;
    BOOL _contextPreparedToSend;
    BOOL _usingViewForZoomTransition;
    UIView *_sourceView;
    double _topNavigationOffset;
    double _hostNavigationOffset;
    UIView *_sourceViewSnapshot;
    struct CGSize _previewItemSize;
    struct CGRect _sourceFrame;
    struct CGRect _uncroppedFrame;
}

@property double hostNavigationOffset; // @synthesize hostNavigationOffset=_hostNavigationOffset;
@property struct CGSize previewItemSize; // @synthesize previewItemSize=_previewItemSize;
@property struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property (strong, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (strong, nonatomic) UIView *sourceViewSnapshot; // @synthesize sourceViewSnapshot=_sourceViewSnapshot;
@property double topNavigationOffset; // @synthesize topNavigationOffset=_topNavigationOffset;
@property struct CGRect uncroppedFrame; // @synthesize uncroppedFrame=_uncroppedFrame;
@property BOOL usingViewForZoomTransition; // @synthesize usingViewForZoomTransition=_usingViewForZoomTransition;

+ (id)firstChildNavigationControllerFromViewController:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)useImageTransitionForPreviewController:(id)arg1;
+ (BOOL)useViewTransitionForPreviewController:(id)arg1;
+ (BOOL)useZoomTransitionForPreviewController:(id)arg1;
- (void).cxx_destruct;
- (void)_snapshotSourceViewIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQLPreviewController:(id)arg1 containerView:(id)arg2 toViewController:(id)arg3;
- (void)prepareContextToSend;
- (void)setUpTransitionSourceView;
- (id)sourceViewSnapshotImage;

@end

