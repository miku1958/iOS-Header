//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPKnownFieldRuleProvider-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSPUnknownContentSnapshot : NSObject <TSPKnownFieldRuleProvider>
{
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
    BOOL _shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration;
    NSArray *_messages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enumerateKnownFieldRulesUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMessages:(id)arg1 preserveFields:(id)arg2 preserveUntilModifiedFields:(id)arg3 shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration:(BOOL)arg4;
- (id)newUnknownContentSnapshotWithMessages:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)updateMessageInfo:(struct MessageInfo *)arg1;

@end

