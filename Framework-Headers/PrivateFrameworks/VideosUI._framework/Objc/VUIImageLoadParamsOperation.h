//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

#import <VideosUI/VUIImageLoadingOperation-Protocol.h>

@class NSError, NSString, TVImage;
@protocol VUIImageLoadParams;

__attribute__((visibility("hidden")))
@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation <VUIImageLoadingOperation>
{
    BOOL _cropToFit;
    TVImage *_image;
    unsigned long long _scalingResult;
    NSError *_error;
    id<VUIImageLoadParams> _params;
    struct CGSize _scaleToSize;
}

@property (nonatomic) BOOL cropToFit; // @synthesize cropToFit=_cropToFit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TVImage *image; // @synthesize image=_image;
@property (strong, nonatomic) id<VUIImageLoadParams> params; // @synthesize params=_params;
@property (nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
@property (nonatomic) unsigned long long scalingResult; // @synthesize scalingResult=_scalingResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(BOOL)arg3;

@end

