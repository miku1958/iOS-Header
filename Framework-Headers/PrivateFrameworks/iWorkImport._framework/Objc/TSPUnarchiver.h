//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, TSPObjectContext, TSPUnknownContent;
@protocol TSPLazyReferenceDelegate, TSPObjectDelegate, TSPUnarchiverDelegate;

__attribute__((visibility("hidden")))
@interface TSPUnarchiver : NSObject
{
    unsigned int _messageType;
    auto_ptr_4370f086 _message;
    long long _objectIdentifier;
    auto_ptr_945ad503 _strongReferences;
    unsigned long long _messageVersion;
    TSPUnknownContent *_unknownContent;
    id<TSPObjectDelegate> _objectDelegate;
    id<TSPLazyReferenceDelegate> _lazyReferenceDelegate;
    id<TSPUnarchiverDelegate> _delegate;
    vector_adb99b2c _references;
    vector_cc556b2d _repeatedReferences;
    vector_3c415888 _finalizeHandlers;
    struct FieldPath *_currentFieldPath;
}

@property (readonly, nonatomic) BOOL canValidateReferences;
@property (readonly, weak, nonatomic) TSPObjectContext *context;
@property (readonly, weak, nonatomic) id<TSPUnarchiverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL documentHasCurrentFileFormatVersion;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) BOOL hasPreUFFVersion;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isFromCopy;
@property (readonly, nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property (readonly, nonatomic) unsigned long long messageVersion; // @synthesize messageVersion=_messageVersion;
@property (readonly, weak, nonatomic) id<TSPObjectDelegate> objectDelegate; // @synthesize objectDelegate=_objectDelegate;
@property (readonly, nonatomic) long long objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property (readonly, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) unsigned long long preUFFVersion;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) TSPUnknownContent *unknownContent; // @synthesize unknownContent=_unknownContent;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFinalizeHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (set_713dd2e1 *)filterIdentifiers:(const set_713dd2e1 *)arg1;
- (vector_3c415888 *)finalizeHandlers;
- (id)initWithMessageType:(unsigned int)arg1 message:(auto_ptr_4370f086)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr_945ad503)arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9;
- (const struct Message *)message;
- (void)pushScopeForField:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)readDataReferenceMessage:(const struct DataReference *)arg1;
- (void)readLazyReferenceMessage:(const struct Reference *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readLazyReferenceMessage:(const struct Reference *)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)readReferenceMessage1:(const struct Reference *)arg1 message2:(const struct Reference *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readReferenceMessage:(const struct Reference *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readReferenceMessage:(const struct Reference *)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)readReferenceMessage:(const struct Reference *)arg1 repeatedMessage:(const RepeatedPtrField_a0d2dbe7 *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)readRepeatedReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)readRepeatedUnownedReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 retainObjectUntilArchived:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const RepeatedPtrField_0a3269f6 *)arg1 completion:(CDUnknownBlockType)arg2;
- (id)readRepeatedWeakObjectUUIDReferenceMessage:(const RepeatedPtrField_bfda3daa *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedWeakReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readSparseReferenceArrayMessage:(const struct SparseReferenceArray *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readSparseReferenceArrayMessage:(const struct SparseReferenceArray *)arg1 isWeak:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const struct SparseUUIDPathArray *)arg1;
- (id)readSparseWeakObjectUUIDReferenceArrayMessage:(const struct SparseUUIDArray *)arg1;
- (void)readSparseWeakReferenceArrayMessage:(const struct SparseReferenceArray *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readUnownedReferenceMessage:(const struct Reference *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWeakLazyReferenceMessage:(const struct Reference *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWeakLazyReferenceMessage:(const struct Reference *)arg1 retainObjectUntilArchived:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)readWeakObjectUUIDPathReferenceMessage:(const struct UUIDPath *)arg1 completion:(CDUnknownBlockType)arg2;
- (id)readWeakObjectUUIDReferenceMessage:(const struct UUID *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWeakReferenceMessage1:(const struct Reference *)arg1 message2:(const struct Reference *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readWeakReferenceMessage:(const struct Reference *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWeakReferenceMessage:(const struct Reference *)arg1 repeatedMessage:(const RepeatedPtrField_a0d2dbe7 *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (vector_adb99b2c *)references;
- (vector_cc556b2d *)repeatedReferences;
- (unordered_map_38045d47 *)strongReferences;
- (void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(BOOL *)arg2 validateStrongReferences:(BOOL)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5;

@end

