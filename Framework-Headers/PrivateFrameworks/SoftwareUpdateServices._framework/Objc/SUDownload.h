//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class SUDescriptor, SUDownloadMetadata, SUDownloadOptions, SUOperationProgress;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>
{
    SUDescriptor *_descriptor;
    SUOperationProgress *_progress;
    SUDownloadOptions *_downloadOptions;
    SUDownloadMetadata *_metadata;
}

@property (strong, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (strong, nonatomic) SUDownloadOptions *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property (strong, nonatomic) SUDownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) SUOperationProgress *progress; // @synthesize progress=_progress;

+ (BOOL)supportsSecureCoding;
- (BOOL)allowCellularDownload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidDownload;
- (unsigned long long)totalSpaceConsumed;

@end

