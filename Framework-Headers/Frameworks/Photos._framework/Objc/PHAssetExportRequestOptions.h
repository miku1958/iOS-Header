//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHAssetExportRequestOptions : NSObject
{
    BOOL _treatLivePhotoAsStill;
    BOOL _flattenSlomoVideos;
    long long _variant;
}

@property (nonatomic) BOOL flattenSlomoVideos; // @synthesize flattenSlomoVideos=_flattenSlomoVideos;
@property (nonatomic) BOOL treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
@property (nonatomic) long long variant; // @synthesize variant=_variant;

- (id)description;

@end

