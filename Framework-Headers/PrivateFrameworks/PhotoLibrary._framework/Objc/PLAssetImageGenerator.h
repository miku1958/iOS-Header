//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject
{
    BOOL _inUse;
    AVAssetImageGenerator *_imageGenerator;
}

@property (strong, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property (nonatomic) BOOL inUse; // @synthesize inUse=_inUse;

- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

