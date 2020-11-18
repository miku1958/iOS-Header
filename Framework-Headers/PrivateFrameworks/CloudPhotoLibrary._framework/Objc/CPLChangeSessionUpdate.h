//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>
{
    NSString *_libraryVersion;
    NSDate *_queuedDate;
}

@property (readonly, copy, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property (readonly, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
@property (readonly, nonatomic) NSString *statusDescription;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)applyToStore:(id)arg1 error:(id *)arg2;
- (BOOL)discardFromStore:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)storageForStatusInStore:(id)arg1;

@end

