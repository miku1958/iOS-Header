//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

@class NSError, NSURL;

@interface CRKUnzipOperation : CATOperation
{
    NSURL *_zipFileURL;
    NSURL *_destinationDirectoryURL;
    struct _BOMCopier *_copier;
    NSError *_stashedError;
}

@property struct _BOMCopier *copier; // @synthesize copier=_copier;
@property (readonly, nonatomic) NSURL *destinationDirectoryURL; // @synthesize destinationDirectoryURL=_destinationDirectoryURL;
@property (strong, nonatomic) NSError *stashedError; // @synthesize stashedError=_stashedError;
@property (readonly, nonatomic) NSURL *zipFileURL; // @synthesize zipFileURL=_zipFileURL;

+ (id)errorFromBOMCopierStatus:(int)arg1 message:(id)arg2;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithZipFileURL:(id)arg1;
- (id)initWithZipFileURL:(id)arg1 destinationDirectoryURL:(id)arg2;
- (void)main;
- (void)operationWillFinish;

@end
