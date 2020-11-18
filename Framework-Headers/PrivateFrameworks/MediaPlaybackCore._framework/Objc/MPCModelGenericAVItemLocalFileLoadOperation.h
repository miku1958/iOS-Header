//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation
{
    BOOL _requirePreferredAssetQuality;
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    CDUnknownBlockType _responseHandler;
}

@property (strong, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // @synthesize assetLoadProperties=_assetLoadProperties;
@property (nonatomic) BOOL requirePreferredAssetQuality; // @synthesize requirePreferredAssetQuality=_requirePreferredAssetQuality;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
