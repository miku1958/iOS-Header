//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PHPerson, UIImage;

@interface PXPersonItem : NSObject
{
    int _faceImageRequestID;
    NSString *_name;
    NSString *_displayName;
    unsigned long long _photosCount;
    PHPerson *_modelObject;
    NSNumber *_personTypeNumber;
    CDUnknownBlockType _faceImageLoadingCompletionBlock;
    CDUnknownBlockType _fastDisplayBlock;
    UIImage *_faceImage;
}

@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (weak) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property (copy) CDUnknownBlockType faceImageLoadingCompletionBlock; // @synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock;
@property int faceImageRequestID; // @synthesize faceImageRequestID=_faceImageRequestID;
@property (copy) CDUnknownBlockType fastDisplayBlock; // @synthesize fastDisplayBlock=_fastDisplayBlock;
@property (strong, nonatomic) PHPerson *modelObject; // @synthesize modelObject=_modelObject;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long personType;
@property (strong, nonatomic) NSNumber *personTypeNumber; // @synthesize personTypeNumber=_personTypeNumber;
@property (nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;

- (void).cxx_destruct;
- (id)initWithPerson:(id)arg1;
- (void)updateWithModel:(id)arg1;

@end
