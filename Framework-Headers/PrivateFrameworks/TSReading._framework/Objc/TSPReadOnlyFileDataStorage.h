//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPFileDataStorage.h>

@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (BOOL)readOnly;
- (BOOL)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id *)arg3 didCopyDataToBundle:(BOOL *)arg4;

@end
