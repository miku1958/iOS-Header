//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject, NSPredicate, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDNameValidator : HMFObject
{
    NSMutableDictionary *_namespaceList;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_homeManagerUUID;
    NSPredicate *_nonZeroLengthPredicate;
}

@property (strong, nonatomic) NSUUID *homeManagerUUID; // @synthesize homeManagerUUID=_homeManagerUUID;
@property (strong, nonatomic) NSMutableDictionary *namespaceList; // @synthesize namespaceList=_namespaceList;
@property (strong, nonatomic) NSPredicate *nonZeroLengthPredicate; // @synthesize nonZeroLengthPredicate=_nonZeroLengthPredicate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (id)_addName:(id)arg1 namespace:(id)arg2;
- (id)_addNamespace:(id)arg1;
- (id)_checkForConflict:(id)arg1 namespace:(id)arg2;
- (id)_removeName:(id)arg1 namespace:(id)arg2;
- (id)_removeNamespace:(id)arg1;
- (id)_replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)_validateName:(id)arg1;
- (id)addActionSetName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2 voiceShortcutCheck:(BOOL)arg3;
- (id)addNamespace:(id)arg1;
- (id)checkForConflict:(id)arg1 namespace:(id)arg2;
- (id)despaceName:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)removeNamespace:(id)arg1;
- (id)replaceActionSetName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 voiceShortcutCheck:(BOOL)arg4;
- (id)validateName:(id)arg1;

@end

