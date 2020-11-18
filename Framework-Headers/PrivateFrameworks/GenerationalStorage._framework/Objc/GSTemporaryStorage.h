//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GenerationalStorage/GSAdditionStoring-Protocol.h>
#import <GenerationalStorage/GSAdditionStoringPrivate-Protocol.h>

@class NSURL;
@protocol NSCopying><NSSecureCoding;

@interface GSTemporaryStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>
{
    NSURL *_libraryURL;
    NSURL *_documentURL;
    NSURL *_stagingURL;
    int _lockFd;
}

@property (strong) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property (readonly, nonatomic) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property (readonly, nonatomic) id<NSCopying><NSSecureCoding> persistentIdentifier;

- (id)URLforReplacingItemWithError:(id *)arg1;
- (id)_URLForNameSpace:(id)arg1 createIfNeeded:(BOOL)arg2 allowMissing:(BOOL)arg3 error:(id *)arg4;
- (BOOL)__lockWithFlags:(int)arg1 error:(id *)arg2;
- (id)_enumerateItemsAtURL:(id)arg1;
- (void)_protectPath:(id)arg1;
- (BOOL)_readLock:(id *)arg1;
- (void)_unlock;
- (void)_unprotectPath:(id)arg1;
- (BOOL)_writeLock:(id *)arg1;
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
- (id)initWithLibraryURL:(id)arg1 forItemAtURL:(id)arg2 error:(id *)arg3;
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

@end

