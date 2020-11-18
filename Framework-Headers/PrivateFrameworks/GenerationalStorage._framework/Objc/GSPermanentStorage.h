//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GenerationalStorage/GSAdditionStoring-Protocol.h>
#import <GenerationalStorage/GSAdditionStoringPrivate-Protocol.h>

@class GSDocumentIdentifier, GSStagingPrefix, NSData, NSURL;
@protocol NSCopying><NSSecureCoding;

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>
{
    GSDocumentIdentifier *_documentID;
    GSStagingPrefix *_stagingPrefix;
    NSURL *_documentURL;
    unsigned long long _remoteID;
    unsigned long long _storageID;
    NSData *_pubExtension;
    NSData *_privExtension;
    long long _pubHandle;
    long long _privHandle;
}

@property (readonly, nonatomic) GSDocumentIdentifier *documentID;
@property (strong) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property (readonly, nonatomic) id<NSCopying><NSSecureCoding> persistentIdentifier; // @synthesize persistentIdentifier=_documentID;
@property (strong) NSData *privExtension;
@property (strong) NSData *pubExtension;
@property (readonly, nonatomic) long long remoteID;
@property (strong, nonatomic) GSStagingPrefix *stagingPrefix; // @synthesize stagingPrefix=_stagingPrefix;
@property (readonly, nonatomic) unsigned long long storageID; // @synthesize storageID=_storageID;

+ (id)storageIDForItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)storagePrefixForFileDescriptor:(int)arg1 error:(id *)arg2;
- (id)URLforReplacingItemWithError:(id *)arg1;
- (void)_connectionWithDaemonWasLost;
- (void)_invalidate;
- (BOOL)_refreshRemoteIDWithFileDescriptor:(int)arg1 error:(id *)arg2;
- (id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (void)cleanupStagingURL:(id)arg1;
- (void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)description;
- (struct NSEnumerator *)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (void)finalize;
- (id)getAdditionDictionary:(id)arg1 error:(id *)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 documentID:(id)arg2 forItemAtURL:(id)arg3 error:(id *)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id *)arg4;
- (void)removeAdditions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (BOOL)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (BOOL)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id *)arg3;
- (id)stagingURLforCreatingAdditionWithError:(id *)arg1;
- (BOOL)transferToItemAtURL:(id)arg1 error:(id *)arg2;

@end

