//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying, DEDSecureArchiving>
{
    BOOL _allowsCellularUpload;
    long long _finishingMove;
    NSString *_seedingDeviceToken;
    long long _seedingSubmissionID;
    long long _seedingSubmissionType;
    long long _seedingEnvironment;
    NSString *_seedingHost;
    NSNumber *_radarProblemID;
    NSString *_radarAuthToken;
}

@property BOOL allowsCellularUpload; // @synthesize allowsCellularUpload=_allowsCellularUpload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long finishingMove; // @synthesize finishingMove=_finishingMove;
@property (readonly) unsigned long long hash;
@property (strong) NSString *radarAuthToken; // @synthesize radarAuthToken=_radarAuthToken;
@property (strong) NSNumber *radarProblemID; // @synthesize radarProblemID=_radarProblemID;
@property (strong) NSString *seedingDeviceToken; // @synthesize seedingDeviceToken=_seedingDeviceToken;
@property long long seedingEnvironment; // @synthesize seedingEnvironment=_seedingEnvironment;
@property (strong) NSString *seedingHost; // @synthesize seedingHost=_seedingHost;
@property long long seedingSubmissionID; // @synthesize seedingSubmissionID=_seedingSubmissionID;
@property long long seedingSubmissionType; // @synthesize seedingSubmissionType=_seedingSubmissionType;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)secureUnarchiveWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToConfiguration:(id)arg1;
- (id)secureArchive;

@end

