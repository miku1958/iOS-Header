//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface PXPersonItem : NSObject
{
    int _faceImageRequestID;
    NSString *_name;
    NSString *_displayName;
    unsigned long long _photosCount;
    id _modelObject;
    CDUnknownBlockType _faceImageLoadingCompletionBlock;
    CDUnknownBlockType _fastDisplayBlock;
    UIImage *_faceImage;
}

@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (weak) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property (copy) CDUnknownBlockType faceImageLoadingCompletionBlock; // @synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock;
@property int faceImageRequestID; // @synthesize faceImageRequestID=_faceImageRequestID;
@property (copy) CDUnknownBlockType fastDisplayBlock; // @synthesize fastDisplayBlock=_fastDisplayBlock;
@property (strong, nonatomic) id modelObject; // @synthesize modelObject=_modelObject;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;

- (void).cxx_destruct;

@end

