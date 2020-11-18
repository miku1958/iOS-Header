//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding>
{
    BOOL _resumableContainerLimpMode;
    BOOL _chunkingLibraryCorruptionMode;
    BOOL _insufficientDiskSpaceMode;
}

@property (nonatomic) BOOL chunkingLibraryCorruptionMode; // @synthesize chunkingLibraryCorruptionMode=_chunkingLibraryCorruptionMode;
@property (nonatomic) BOOL insufficientDiskSpaceMode; // @synthesize insufficientDiskSpaceMode=_insufficientDiskSpaceMode;
@property (nonatomic) BOOL resumableContainerLimpMode; // @synthesize resumableContainerLimpMode=_resumableContainerLimpMode;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
