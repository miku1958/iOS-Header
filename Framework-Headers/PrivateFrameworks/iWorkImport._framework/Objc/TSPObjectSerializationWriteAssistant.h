//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPEncoderWriteCoordinatorDelegate-Protocol.h>

@class NSString, NSUUID, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate>
{
    TSPObjectContext *_context;
    NSUUID *_documentUUID;
    NSUUID *_versionUUID;
    BOOL _serializeWeakAsStrongReferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)componentWriterMode;
- (id)createMetadataForRootObject:(id)arg1 dataArchiver:(id)arg2 archivedObjects:(id)arg3 componentObjectUUIDMap:(id)arg4 externalReferences:(id)arg5 weakExternalReferences:(id)arg6 lazyReferences:(id)arg7 dataReferences:(id)arg8 error:(id *)arg9;
- (void)encodeObject:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithContext:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3;
- (unsigned long long)objectTargetType;
- (BOOL)skipMetadataObjectSerialization;

@end

