//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSURL;

@interface PXVideoProcessingOperationSpec : NSObject <NSCopying>
{
    NSURL *_inputVideoURL;
    NSURL *_outputURL;
    NSURL *_debugInfoOutputURL;
}

@property (strong, nonatomic) NSURL *debugInfoOutputURL; // @synthesize debugInfoOutputURL=_debugInfoOutputURL;
@property (strong, nonatomic) NSURL *inputVideoURL; // @synthesize inputVideoURL=_inputVideoURL;
@property (strong, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
