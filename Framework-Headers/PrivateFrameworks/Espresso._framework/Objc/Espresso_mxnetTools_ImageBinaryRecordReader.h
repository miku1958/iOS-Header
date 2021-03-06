//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject
{
    NSFileHandle *_recFileHandle;
    struct _mxnetTools_recordHeader_t_ _recordHeader;
    unsigned long long _currentOffset;
    NSMutableArray *_labelsPrivate;
    struct _mxnetTools_imageHeader_t_ _imageHeader;
}

@property unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property struct _mxnetTools_imageHeader_t_ imageHeader; // @synthesize imageHeader=_imageHeader;
@property (strong) NSMutableArray *labelsPrivate; // @synthesize labelsPrivate=_labelsPrivate;
@property (strong) NSFileHandle *recFileHandle; // @synthesize recFileHandle=_recFileHandle;
@property struct _mxnetTools_recordHeader_t_ recordHeader; // @synthesize recordHeader=_recordHeader;

- (void).cxx_destruct;
- (id)imageData;
- (struct _mxnetTools_imageID_t_)imageID;
- (id)initWithRecFile:(id)arg1 error:(id *)arg2;
- (id)labels;
- (BOOL)nextRecordAndError:(id *)arg1;
- (BOOL)seekRecordWithID:(struct _mxnetTools_imageID_t_ *)arg1 error:(id *)arg2;

@end

