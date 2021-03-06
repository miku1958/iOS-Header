//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject
{
    struct atomic_flag _cancelFlag;
    BOOL _cancelRequested;
    PHImageDecoder *_initialDecoder;
    unsigned long long _figRequestID;
    unsigned long long _figGainMapRequestID;
    struct FigPhotoDecompressionContainer *_figDecompressionContainer;
}

@property (readonly, nonatomic) BOOL cancelRequested;
@property (strong, nonatomic) struct FigPhotoDecompressionContainer *figDecompressionContainer; // @synthesize figDecompressionContainer=_figDecompressionContainer;
@property (nonatomic) unsigned long long figGainMapRequestID; // @synthesize figGainMapRequestID=_figGainMapRequestID;
@property (nonatomic) unsigned long long figRequestID; // @synthesize figRequestID=_figRequestID;
@property (readonly, nonatomic) PHImageDecoder *initialDecoder; // @synthesize initialDecoder=_initialDecoder;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithFigRequestID:(unsigned long long)arg1 container:(struct FigPhotoDecompressionContainer *)arg2 figDecoder:(id)arg3;
- (id)initWithImageIODecoder:(id)arg1;

@end

